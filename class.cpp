#include<iostream>
using namespace std;
class abc
{
public://comment at line 4
void sum(int x, int y)//comment at line 5
{
cout<<x<<"  "<<y<<"\n";//comment at line 7
}
void sum(float x, float y)
{
cout<<x<<"  "<<y<<"\n";
}
void sum(double x, double y)
{
cout<<x<<"  "<<y<<"\n";
}
};
int main()
{
abc a1;
a1.sum(2,4);
a1.sum(2.2,4.4);
a1.sum(3.44444,3.4444);
return 0;
}
