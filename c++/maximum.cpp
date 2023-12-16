#include<iostream>
using namespace std;
int main()
{
  int num1,num2,num3;
  cout<<"enter num1"<<'\n';
  cin>>num1;
  cout<<"enter num2"<<'\n';
  cin>>num2;
  cout<<"enter num3"<<'\n';
  cin>>num3;
  
  (num1>num2&&num1>num3)? std::cout<<"num1 is maximum":  (num2>num1&&num2>num3)? std::cout<<"num2 is maximum" : std::cout<<"num3 is maximum";
  
  return 0;
}
