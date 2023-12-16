#include<iostream>
using namespace std;
int main()
{
  int x,y;
  cout<<"enter x "<<'\n';
  cin>>x;
  cout<<"enter y "<<'\n';
  cin>>y;
  
  x=x^y;
  y=x^y;
  x=x^y;
  
  cout<<"swap of num1 is "<<x<<'\n';
  cout<<"swap of num2 is "<<y<<'\n';
  
  return 0;
}
