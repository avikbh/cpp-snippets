#include <iostream>
#include <memory>
using namespace std;

int main()
{
    cout << "Hola Mundo" << endl;
//! Unique Pointer
    unique_ptr<int> up(new int(30));
    unique_ptr<int> up2 = make_unique<int>(70);
    *up = 50;
    cout << "Unique1: " << *up << endl;
    cout << "Unique2: " << *up2 << endl;
    // up=up2;              // Can't be done on Unique Pointer.
    up.release(); // Releases the ownership of the underlying object
    if (up)
        cout << *up;

    unique_ptr<int[]> upa(new int[3]); // We can initialize array like this.

//! Shared Pointer
    shared_ptr<int> sp(new int(30));
    shared_ptr<int> sp2 = make_shared<int>(70);
    sp = sp2;
    cout << "Shared1: " << *sp << endl;
    cout << "Shared2: " << *sp2 << endl;

    cout << "ref_count: " << sp.use_count() << endl;

    shared_ptr<int> spd(new int(50), [](int *p) {
        cout << "Custome Deleter" << endl;
        delete p;
    });

    cout << "Shared3: " << *spd << endl;

    shared_ptr<int> spd2(new int[3], [](int *p) {
        delete[] p; // All elements will be deleted.
    });

    spd2.get()[0] = 5;
    spd2.get()[1] = 8;
    spd2.get()[2] = 2;
    for (size_t n = 0; n < 3; ++n)
        std::cout << "spd2 element " << n << ": " << spd2.get()[n] << std::endl;

//! Weak Pointer
    auto sharedPtr = make_shared<int>(100);
    weak_ptr<int> weakptr(sharedPtr);       //It will not increase the reference count
    cout <<"weakptr.use_count: "<< weakptr.use_count()<<endl;      //Output: 1
    cout <<"sharedPtr.use_count: "<< sharedPtr.use_count()<<endl;    //Output 1
    cout <<"weakptr.expired: "<< weakptr.expired()<<endl;        //Output: False. as weakptr is not expired yet

    if (shared_ptr<int> sharedPtr2 = weakptr.lock()) // Check if the laset pointed shared_ptr is stil alive. This is not thread lock
    {
        cout << "sharedPtr2: "<<*sharedPtr2<<endl;            // Output: 100
        cout << "sharedPtr2.use_count: "<<sharedPtr2.use_count()<<endl; //Output: 2 as there are two copies of shared_ptr.
    }
    else
        cout << "No resource"<<endl;

    // Another way of using weak_ptr
    if (!weakptr.expired()) 
        cout << "weakptr: "<<*weakptr.lock()<<endl;   

    weakptr.reset(); // Now this wekptr is not pointing to shared_ptr.

    return 0;
}