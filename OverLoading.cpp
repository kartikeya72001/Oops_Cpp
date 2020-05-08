#include<iostream>
using namespace std;
class Complex
{
    int real;
    int img;
public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int r, int i)
    {
        real=r;
        img=i;
    }
    void setReal(int r)
    {
        real=r;
    }
    void setImg(int i)
    {
        img=i;
    }
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }
    void Print()
    {
        if(img>=0)
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }
        else
        {
            cout<<real<<"-"<<-img<<"i"<<endl;
        }
    }
    void Add(const Complex &x)
    {
        real+=x.real;
        img+=x.img;
    }
    void operator+ (const Complex &x)
    {
        real+=x.real;
        img+=x.img;
    }
    void operator! ()
    {
        img = -img;
    }
    void operator[] (string s)
    {
        if(s=="real")
        {
            cout<<real<<endl;
        }
        else if(s=="img")
        {
            cout<<img<<endl;
        }
        else
            cout<<"Error, Wrong Statement!"<<endl;
    }
};
istream& operator>> (istream& is, Complex &c)
{
    int r, i;
    is>>r>>i;
    c.setReal(r);
    c.setImg(i);
    return is;
}
ostream& operator<< (ostream& os, Complex &c)
{
    c.Print();
    return os;
}
int main()
{
    Complex c(3,4);
    Complex c2;
    /*c2.setReal(5);
    c2.setImg(6);

    c.Print();
    c2.Print();

    c+c2;

    c.Print();
    !c;
    c.Print();
    string s;
    cin>>s;
    c[s];*/

    cin>>c>>c2;
    cout<<c<<c2<<endl;
    c.Add(c2);
    cout<<c;

    return 0;
}
