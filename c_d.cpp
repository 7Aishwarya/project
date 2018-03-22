#include<iostream>
using namespace std;
class abc
{
public:
abc()
{
cout<<"dafault constructor\n";
}
abc(int a, int b)
{
cout<<"parameterised constructor\n";
cout<<"two random nos: "<<a<<" and "<<b<<"\n";
}
~abc()
{
cout<<"BOOM\n";
}
};
int main()
{
abc a1,a2(2,5);
//a1=abc(2,5);
return 0;
}
 

