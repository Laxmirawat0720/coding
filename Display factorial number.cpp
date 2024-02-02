#include<iostream>
using namespace std;
int main()
{
int n,i,fact=1;
cout<<"enter a number";
cin>>n;
for(i=n;i>0;i--)
{
fact=fact*i;
}
cout<<"factorial of"<<n<<"is"<<fact;
}
