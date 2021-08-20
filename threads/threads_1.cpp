#include <bits/stdc++.h>
#include <thread>
#include <mutex>

using namespace std;

void printData(int n)
{
    mutex m1;
    lock_guard <mutex> lock(m1);

    for (int i = 0; i < n; i++)
    {
        cout << "from t1: " << i << endl;
        // this_thread::sleep_for(chrono::seconds(2));
    }
}

int main()
{
    cout << "Hola Mundo" << endl;
    std::thread t1(printData, 100);

    for (int i = 0; i < 100; i++)
    {
        cout << "from Main: " << i << endl;
        // this_thread::sleep_for(chrono::seconds(2));
    }

    t1.join();

    cout << "Thraed Finished";

    return 0;
}