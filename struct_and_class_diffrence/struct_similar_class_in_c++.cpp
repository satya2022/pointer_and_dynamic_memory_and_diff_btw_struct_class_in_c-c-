//structure is similar to class in c++, 
//but class is not similar 
/*
#include<bits\stdc++.h>
using namespace std;
class dob{
    public:
    int day;
    string month;
    int year;
    
   void set_day(int d){
     day=d;

   }
   void get_day(){
    cout<<"day: "<<day<<endl;
   }
};
int main(){
  dob students[100];
  students[0].set_day(21);
  students[0].month="feubary";
  students[0].year=2002;
  students[0].get_day();
cout<<students[0].day<<" "<<students[0].month<<" "<<students[0].year<<endl;


    return 0;
}
*/

//hare only i am changing (class to struct) and it will work
//DIFFRENCE IS IN CLASS BY DEFAULT every DATA IS PRIVATE
// AND IN STRUCTURE BY DEFAULT every DATA IS PUBLIC
#include<bits\stdc++.h>
using namespace std;
struct dob{
    public:
    int day;
    string month;
    int year;
    
   void set_day(int d){
     day=d;

   }
   void get_day(){
    cout<<"day: "<<day<<endl;
   }
};
int main(){
  dob students[100];
  students[0].set_day(21);
  students[0].month="feubary";
  students[0].year=2002;
  students[0].get_day();
cout<<students[0].day<<" "<<students[0].month<<" "<<students[0].year<<endl;


    return 0;
}
