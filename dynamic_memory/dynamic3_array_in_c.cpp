#include<bits\stdc++.h>
using namespace std;
int main(){
int *arl;
arl=(int*)malloc(sizeof(int)*5);
arl[0]=34;
for (int i = 0; i < 5; i++)
{
    cout<<arl[i]<<endl;
}
//34 will print same and other will garbeg value
free(arl);

}