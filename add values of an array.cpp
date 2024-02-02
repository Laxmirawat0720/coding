#include<iostream>
using namespace std;
int main()
{
	int ar[5],i,s;
	for(int i=0;i<5;i++)
	cin>>ar[i];
	
	for(int i=0;i<5;i++)
	s=s+ar[i];
	
	cout<<"sum is"<<s;
	return 0;
}

