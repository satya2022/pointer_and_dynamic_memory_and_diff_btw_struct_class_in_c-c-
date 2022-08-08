//placement new oprater
#include<bits\stdc++.h>
using namespace std; 
int main(){
char *buffer=new char[80];//create memory in heap section
int *var1,*var2;
// var1 = new (buffer) int;
var1 = new (buffer) int(76);//hare buffer allocate first address of bufferarray
//hare it will take 4 bytes in char type array 
var2 = new (buffer+4) int(45);
//hare it will take more 4 bytes in char type array
//total it will take 8 bytes in char type array

cout <<*var1<<" "<<*var2<<endl;

//hare buffer assining memory
delete [] buffer;
return 0;
}