#include<iostream>
using namespace std;
int main()
{
int r,n,m;
cout<<"Enter number\n";
cin>>n;
m=0;
while(n>0)
{
r=n%10;
m=m*10+r;
n=n/10;
}
cout<<"\nAfter reversing= "<<m;
}

