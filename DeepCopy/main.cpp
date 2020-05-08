#include <iostream>
#include<string.h>
using namespace std;

class Car
{
private:
    int price;
public:
    int model;
    char *name;
    const int tyres;

    Car():name(NULL),tyres(4)
    {
        name = NULL;
        cout<<"Making a Car"<<endl;
    }
    Car(int p, int mn, char*n, int t=4):tyres(t)
    {
        price = p;
        model=mn;
        int l = strlen(n);
        name = new char[l+1];
        strcpy(name,n);
    }
    Car(Car &x):tyres(x.tyres)
    {
        price = x.price;
        model=x.model;
        int l = strlen(x.name);
        name = new char[l+1];
        strcpy(name,x.name);
    }
    void operator= (Car &x)
    {
        cout<<"Copy Assignment Operator"<<endl;
        price = x.price;
        model=x.model;
        int l = strlen(x.name);
        name = new char[l+1];
        strcpy(name,x.name);
    }
    void setName(char *n)
    {
        if(name==NULL)
        {
            name = new char[strlen(n)+1];
            strcpy(name,n);
        }
        else
        {

        }
    }
    void Start()
    {
        cout<<"Ignition"<<endl;
    }
    void setPrice(int n)
    {
        price = n;
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
        cout<<"Tyres: "<<tyres<<endl;
    }
    ~Car()
    {
        cout<<"Destroying Car"<<endl;
        if(name!=NULL)
            delete []name;
    }
};

int main()
{
    Car C;
    C.setPrice(1500000);
    C.setName("Mercedes");
    C.model = 45678;
    C.Print();

    Car D(100000,2334,"BMW");
    Car E(D);
    E.name[0]='X';
    D.Print();
    E.Print();

    Car F(233455,2345,"Audi");
    F.Print();
    F = E;
    F.Print();

    Car *DA = new Car(100,200,"Tesla");
    delete DA;
    return 0;
}
