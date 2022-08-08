#include <bits\stdc++.h>
using namespace std;

int main()
{
  int* ptr = new int(5);//in c++ that line assigned value dynamically only 5
  
  int* arr = new int[3];
  arr[0] = 96;
  arr[1] = 45;
  arr[2] = 72;
  
  std::cout << *ptr << "\n";// output: 5
  
  for (int i = 0; i < 3; i++)
  {
    std::cout << arr[i] << " ";
  } // output: 96 45 72

  return 0;
}