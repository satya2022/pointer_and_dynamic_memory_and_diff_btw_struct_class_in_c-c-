/*
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


    return 0;
}
*/


//only replacing struct by class
//and declearing object public
#include<bits\stdc++.h>
using namespace std;
class dob{
    public:
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


    return 0;
}