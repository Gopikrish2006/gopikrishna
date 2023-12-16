#include<iostream>
using namespace std;
int main()
{
  int n,sum=0,m;
  cout<<"enter a number = "<<'\n';
  cin>>n;
  
  while(n>0)
  {
    m=n%10;
    sum=sum+m;
    n=n/10;
  }
  
  cout<<"sum of digits are= "<<sum<<'\n';
  
  return 0;
}
