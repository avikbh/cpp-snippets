#include <iostream>
using namespace std;

void swap(int *n, int *m)
{
    int temp = *n;
    *n = *m;
    *m = temp;
}
void sort(int arr[], int n)
{
    bool swapFlg = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapFlg = true;
            }
        }
        if (!swapFlg) // If there is no swap happened, break the loop.
            break;
    }
}

int main()
{
    int intarr[] = {4, 6, 8, 1, 5, 3};

    int n = sizeof(intarr) / sizeof(intarr[0]);

    sort(intarr, n);

    for (int i = 0; i < n; i++)
        cout << intarr[i] << endl;

    return 0;
}