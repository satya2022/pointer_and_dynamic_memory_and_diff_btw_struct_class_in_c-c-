//structure in c and c++
#include<bits\stdc++.h>
using namespace std;
struct dob{
    int day;
    string month;
    int year;
    
};
int main(){
  dob students[100];
  students[0].day=21;
  students[0].month="feubary";
  students[0].year=2002;
cout<<students[0].day<<" "<<students[0].month<<" "<<students[0].year<<endl;

for(int i=1;i<10;i++){
    cout<<"enter student number "<<i<<"day month year"<<endl;
    cin >> students[i].day;
    cout<<endl;
    cin >> students[i].month;
    cout<<endl;
    cin >> students[i].year;
    cout<<endl;
}
cout<<"print all students date of birth"<<endl;
for(int i=1;i<10;i++){
    cout<<"printing student number "<<i<<"day month year"<<endl;
    cout<<students[i].day;
    cout<<endl;
    cout<< students[i].month;
    cout<<endl;
    cout<< students[i].year;
    cout<<endl;
}
    return 0;
}