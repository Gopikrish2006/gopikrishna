#include<iostream>
using namespace std;
int main()
{
  int i,n,count=0,flag=1;
  cout<<"enter a number"<<'\n';
  cin>>n;
  
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0){
      flag=0;
      count++;
    }
  }
  if(flag) cout<<n<<" is a prime number"<<'\n';
  else cout<<n<<" is not a prime number"<<'\n';
  
  return 0;
}
