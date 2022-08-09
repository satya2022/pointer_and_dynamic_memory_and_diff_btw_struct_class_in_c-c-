//pointer can store address of similer type datatype
#include <bits\stdc++.h>
using namespace std;
int main()
{

    int a=4;
    int *pointer;
    pointer=&a;
    cout << "value of a is= " <<a << endl;
    cout << "value of pointer=" << *pointer << endl;
    //changing values of a 
    a=7;
    cout << "value of a is now="<<a<< endl;
    cout << "value of pointer is now="<<*pointer<<endl;
    
    //value changing with pointer help
    *pointer=9;
    cout << "value of a is now="<<a<< endl;
    cout << "value of pointer is now="<<*pointer<<endl;

    *pointer=a;
    cout << "value of a is now="<<a<< endl;
    cout << "value of pointer is now="<<*pointer<<endl;
    



     
    // working of pointer
    /*
    int var, *varPoint;

    // Wrong!
    // varPoint is an address but var is not
    varPoint = var;

    // Wrong!
    // &var is an address
    // *varPoint is the value stored in &var
    *varPoint = &var;

    // Correct!
    // varPoint is an address and so is &var
    varPoint = &var;

     // Correct!
    // both *varPoint and var are values
    *varPoint = var;
    */

    return 0;
}
