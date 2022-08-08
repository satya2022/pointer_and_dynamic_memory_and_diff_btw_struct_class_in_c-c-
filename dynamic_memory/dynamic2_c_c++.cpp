//malloc  and free is function in c;
#include<bits\stdc++.h>
using namespace std;
int main(){

    //malloc and free are function in c/c++;
int *x;
x=(int*)malloc(sizeof(int));
//*x=198;
cout<<"enter value of *x"<<endl;
cin>>*x;
cout<<*x<<endl;
free(x);

//new and delete operator onely in c++;
int *y;
y=new int(8);
cout<<*y<<endl;

int *z;
z=new int;
cout<<"enter value of *z"<<endl;
cin>>*z;
cout<<*z<<endl;

delete y;
delete z;
    return 0;
}