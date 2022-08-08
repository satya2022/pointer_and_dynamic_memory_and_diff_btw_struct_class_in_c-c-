#include<bits\stdc++.h>
using namespace std;
int main() {
int a=7;
int *ptr;
ptr=&a;
//print 7 becose int take 4 byte in memory and=(pointer to integer type)
cout<<"*ptr=a="<<*ptr<<endl;


//second example
char b='s';
char *pointer;
pointer =&b;
// it will print only character first letter becose =)charecter take only one byte
cout<<"pointer="<<*pointer<<endl;

return 0;
}