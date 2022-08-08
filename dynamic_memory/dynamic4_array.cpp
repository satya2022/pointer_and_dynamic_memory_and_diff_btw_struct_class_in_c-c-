#include<bits\stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter totel number of sutudent"<<endl;
cin>>n;
float *pointer;
pointer = new float[n];

cout<<"enter gpa of sutudent"<<endl;
for(int i=0; i<n; i++){
    cout<<"student no :"<<i<<"gpa is"<<endl;
    cin>>*(pointer+i);
}

cout<<"printig gpa of sutudent"<<endl;
for(int i=0; i<n; i++){
    cout<<"student :"<<i<<"gpa is"<<endl;
    cout<<*(pointer+i)<<endl;
}

// ptr memory is released
  delete[] pointer;
    return 0;
}

// Notice the use of [] after delete. We use the square brackets [] in order to denote that the memory deallocation is that of an array