/*
// declare an int pointer
int* pointVar;

// dynamically allocate memory
// using the new keyword 
pointVar = new int;

// assign value to allocated memory
*pointVar = 45;
*/

/*
// Notice that we have used the pointer pointVar to allocate the memory dynamically.
 This is because the new operator returns the address of the memory location.
// we can see that the syntax for using the new operator is
//pointerVariable = new dataType;
*/

#include<bits\stdc++.h>
using namespace std;
int main(){
// declare an int pointer
int * pointint;
// declare an float pointer
float * pointfloat;
//dynamically allocate memory
pointint = new int;
pointfloat = new float;
//assigning  value to memory
*pointint = 7;
*pointfloat = 34.2f;

cout<< "value of *pointint="<<*pointint<<endl;
cout<< "value of *pointfloat="<<*pointfloat<<endl;

//deallocating memory
delete pointint;
delete pointfloat;

    return 0;
}