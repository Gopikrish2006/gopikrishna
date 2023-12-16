#include<iostream>
using namespace std;
int main()
{
  int number;
  
  cout<<"enter a number "<<'\n';
  cin>>number;
  
  if(number > 0){
    cout<<number<<" is positive";
  }
  else if(number == 0){
    cout<<number<<" is zero";
    }
  else{
    cout<<number<<" is negative";
  }
  
  return 0;
}
