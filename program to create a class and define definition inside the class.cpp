#include <iostream>
using namespace std;
class sum
{ int A, B, total;
 public:
void getdata ()
{        cout<<"\n enter the value of A and B";
         cin>>A>>B;
}
void display ()
{
        total = A+B;
        cout<<"\n the sum of A and B="<<total;
}    
};
int main()
{   
    sum s;
    s.getdata();
    s.display(); 
}

