#include<iostream>
#include<string.h>
using namespace std;

class Phone
{
private:
    int price;
public:
    int model;
    string name;

    Phone()
    {
        cout<<"Constructor Called"<<endl;
    }

    Phone(int p, int mn, string n)
    {
        price = p;
        model = mn;
        name=n;
    }

    Phone(const Phone &x)
    {
        cout<<"Copy Constructor"<<endl;
        price = x.price;
        model=x.model;
        name=x.name;
    }
    void Camera()
    {
        cout<<"Click"<<endl;
    }
    void setPrice(int p)
    {
        price = p;
    }
    int getPrice()
    {
        return price;
    }
    void Print()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Model Number: "<<model<<endl;
        cout<<"Price: "<<"Rs "<<price<<endl;
    }
};

int main()
{
    Phone C;
    C.setPrice(2000);
    C.model=1901;
    C.name="Oneplus";
    C.Camera();
    C.Print();
    Phone A=C;
    A.setPrice(2500);
    A.Print();
    cout<<endl;
    A.name="Samsung";
    A.Print();
    C.Print();
    return 0;
}
