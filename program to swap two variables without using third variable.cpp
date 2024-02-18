#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter value of a and b:\n";
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After swapping\n";
	cout<<"first number="<<a<<"\n"<<"second number ="<<b;
	return 0;
}
