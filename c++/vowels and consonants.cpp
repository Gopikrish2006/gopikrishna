#include<iostream>
using namespace std;
int main()
{
  char y,vowels;
  
  cout<<"enter a character"<<'\n';
  cin>>y;
  
  vowels = (y=='A'||y=='E'||y=='I'||y=='O'||y=='U'||y=='a'||y=='e'||y=='i'||y=='o'||y=='u');
  if(vowels)
  {
    cout<<y<<" is vowel"<<'\n';
  }
  else{
    cout<<y<<" is consonant"<<'\n';
  }
  
  return 0;
}
