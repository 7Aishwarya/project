#include<iostream>
using namespace std;
class abc
{
public:
abc()
{
cout<<"dafault constructor   line 8\n";
}
abc(int a, int b)
{
cout<<"parameterised constructor\n";
cout<<"two random nos: "<<a<<" and "<<b<<"\n";
cout<<"changes done here   line 14\n";
}
~abc()
{
cout<<"BOOM\n";
cout<<"second change done here\n";
}
};
int main()
{
abc a1,a2(2,5);
//a1=abc(2,5);
return 0;
}
 

