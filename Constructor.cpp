#include<iostream>
using namespace std;

class Construct
{
public:
    int a,b;
    Construct()
    {
        a = 10;
        b = 10;
    }
    Construct(int x, int y)
    {
        a=x;
        b=y;
    }
    Construct(const Construct &c2)
    {
        a=c2.a;
        b=c2.b;
    }
    void setX(int x)
    {
        a=x;
    }
    void setY(int y)
    {
        b=y;
    }
    int getX() {return a;}
    int getY() {return b;}
};
int main()
{
    Construct c(4,5);
    cout<<"a: "<<c.a<<endl<<"b: "<<c.b<<endl;

    Construct c2;
    c2.setX(6);
    c2.setY(7);
    cout<<"a: "<<c2.a<<endl<<"b: "<<c2.b<<endl;

    Construct x(10,12);
    Construct y(x);
    cout<<x.getX()<<" "<<x.getY()<<endl;
    cout<<y.getX()<<" "<<y.getY()<<endl;
    y.setX(5);
    y.setY(4);
    cout<<x.getX()<<" "<<x.getY()<<endl;
    cout<<y.getX()<<" "<<y.getY()<<endl;
    return 0;
}
