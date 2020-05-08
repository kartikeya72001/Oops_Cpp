#include<iostream>
#define PI 3.14
using namespace std;
class Circle
{
private:
    double radius;
public:
    const void setRadius (int r)
    {
        radius = r;
    }
    const double getRadius()
    {
        return radius;
    }
    double Area()
    {
        return PI*radius*radius;
    }
    double circumference()
    {
        return 2*PI*radius;
    }
};
class Square
{
private:
    double side;
public:
    const void setSide(double s)
    {
        side = s;
    }
    const double getSide()
    {
        return side;
    }
    double Area()
    {
        return side*side;
    }
    double Perimeter()
    {
        return 4*side;
    }
};
int main()
{
    Circle c1;
    c1.setRadius(7);
    cout<<c1.Area()<<"\n"<<c1.circumference();
    cout<<"\n"<<c1.getRadius();

    Square s;
    s.setSide(5);
    cout<<"Radius is "<<s.getSide()<<endl;
    cout<<"Area is "<<s.Area()<<endl;
    cout<<"Perimeter is "<<s.Perimeter()<<endl;
    return 0;
}
