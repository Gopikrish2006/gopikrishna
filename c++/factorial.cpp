#include<iostream>
using namespace std;
int main()
{
  int i,number,fact=1;
  cout<<"enter number"<<'\n';
  cin>>number;
  
  for(i=1;i<=number;i++)
  {
  fact=fact*i;
  }
  cout<<"factorial of "<<number<<" is "<<fact<<'\n';
  
  return 0;
}
