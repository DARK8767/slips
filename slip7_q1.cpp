#include<iostream>
using namespace std;

class Numbers{
private :
    int a, b;
public :
    Numbers()
    {
        a = 25;
        b = 30;
    }
    Numbers(int m, int n)
    {
        a = m;
        b = n;
    }
    void Max()
    {
        if(a>b)
         cout<<"The Maximum Number of "<<a<<" and "<<b<<" is "<<a<<endl;
        else
         cout<<"The Maximum Number of "<<a<<" and "<<b<<" is "<<b<<endl;
    }
};

int main(void)
{
    Numbers n1;
    Numbers n2(15, 20);
    n1.Max();
    n2.Max();
}