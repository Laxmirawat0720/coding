#include<iostream>
using namespace std;
int main()
{
    int ar[3][3],i,j,count=0;
    cout<<"Enter the elements of an array:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>ar[i][j];
        }
    }
    cout<<"\nThe given 2D array is:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\t"<<ar[i][j];
        }
        cout<<"\n";
    }
    cout<<"Numbers that are divisible by 7 are:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(ar[i][j]%7==0)
            {
                cout<<ar[i][j]<<"\t";
                count++;
            }
        }   
    }
    cout<<"\nTotal Numbers that are divisible by 7 are: "<<count;
    return 0;
}

