#include<bits\stdc++.h>
using namespace std;
struct abc{
int a;
char b;

};
int main(){
    struct abc*ptr;//also we can wright =)abc*ptr;
    abc obj;
    ptr=&obj;
    cout<<"ptr=address of abc"<<ptr<<endl;
    return 0;
}