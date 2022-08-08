#include<bits\stdc++.h>
using namespace std;
int main(){
    int a=5;
    int *add;
    
    add=0;
    //it will work becose 0 defined as NULL address
    cout<<"add="<<add<<endl;
    

    /*
    //it will notwork becose it is going  pointer(address) to integer(value)
    add=100;
    cout<<"add="<<add<<endl;
   */


//pointer can store address of similer type datatype
/*
//it will give error becose (b data type is char) and (pointerdata type is integer)
  char b;
  int *pointer;
  pointer =&b;
  cout<<"b="<<b<<endl;
  cout<<"pointer="<<*pointer<<endl;
*/

 char b;
 b='s';
  char *pointer;
  pointer =&b;
  cout<<"b="<<b<<endl;
  cout<<"pointer="<<*pointer<<endl;
    return 0;
}