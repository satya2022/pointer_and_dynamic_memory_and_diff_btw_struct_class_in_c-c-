//these pointer are also data type
#include<bits\stdc++.h>
using namespace std;
int main(){
int a;
int *add=&a;
int **ptr=&add;
int ***pointer=&ptr;
cout<<"address of a="<<&a<<endl;
cout<<"address of pointer add="<<ptr<<endl;
cout<<"address of pointer pointer="<<pointer<<endl;
   
    return 0;
}