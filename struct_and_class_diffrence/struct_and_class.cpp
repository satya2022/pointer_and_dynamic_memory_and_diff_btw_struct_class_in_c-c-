//structure in c and c++
#include<bits\stdc++.h>
using namespace std;
struct dob{
    int day;
    string month;
    int year;
    
};
int main(){
  dob student1;
  student1.day=21;
  student1.month="feubary";
  student1.year=2002;
cout<<student1.day<<" "<<student1.month<<" "<<student1.year<<endl;
    return 0;
}