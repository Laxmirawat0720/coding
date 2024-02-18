#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout<<"Enter two number : ";
	cout<<"\nFirst Number : ";
	cin>>a;
	cout<<"Second Number : ";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"After swapping\n";
	cout<<"First Number = "<<a<<"\n"<<"Second Number = "<<b;
	return 0;
}

