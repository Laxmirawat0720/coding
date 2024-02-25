#include<iostream>
using namespace std;
    class Example
    {
        int a,b;
        public:
        Example()
        {
            a=50;
            b=100;
            cout<<"\nI am constructor";
        }
        Example(int x, int y)
        {
            a=x;
            b=y;
            cout<<"\nIm constructor";
        }
        void Display()
        {
            cout<<"\nvalues :"<<a<<"\t"<<b;
        }
    };
int main()
{
    Example object(10,20);
    object.Display();
    Example object2;
    object2.Display();
}

