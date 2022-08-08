#include <bits\stdc++.h>
using namespace std;

int main()
{
    int x[3] = { 5,9,20 };
    int* p = x;
    cout << p << endl;               //prints the address of x[0]
    cout << *p << endl;             //prints the value of x[0] (5)
    //printing the array
    for (int i = 0; i < 3; i++){
        cout << p[i] << endl;
        //or
        cout << *(p + i) << endl;
    }

}
/*
int *ptr;
int arr[5];

// store the address of the first
// element of arr in ptr
ptr = arr;
*/