#include <bits\stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    a = 4;
    b = 5;
    cout << "value of a= " << a << endl;
    cout << "value of b= " << b << endl;
    int *pointer1;
    int *pointer2;
    // woriking of pointers
    // 1st
    pointer1 = &a;
    cout << "now value of a= " << a << endl;
    cout << "now value of pointer1= " << *pointer1 << endl;
    // 2nd
    //following line will not work jb tak ki (pointer2 ko address na diya jaye ga
    *pointer2 = 6;
    cout << "now value of b= " << b << endl;
    cout << "now value of pointer2= " << *pointer2 << endl;


//now it will work
    pointer2=&b;
    *pointer2 = 6;
    cout << "now value of b= " << b << endl;
    cout << "now value of pointer2= " << *pointer2 << endl;

    return 0;
}