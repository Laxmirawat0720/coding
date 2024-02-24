#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character\n";
    cin>>ch;
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        cout<<"The given character is alphabet";
    }
    else
    {
        cout<<"The given character is not alphabet";
    }
}

