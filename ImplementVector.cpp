#include <iostream>
using namespace std;

class Vector{
    int *arr;
    int cs;
    int maxSize;
public:
    Vector(int defaultSize=4)
    {
        maxSize=defaultSize;
        cs=0;
        arr = new int [maxSize];
    }

    //Operator Overloading
    void operator() (string s)
    {
        cout<<"Overloading "<<s<<endl;
    }
    int operator[](int i)
    {
        return arr[i];
    }

     void push_back(int data)
     {
         if(cs==maxSize)
         {
             int *oldArr = arr;
             arr = new int [2*maxSize];
             maxSize*=2;

             for(int i=0;i<cs;i++)
             {
                 arr[i]=oldArr[i];
             }
             delete [] oldArr;
         }
          arr[cs] = data;
          cs++;
     }
     bool empty()
     {
         return cs==0;
     }
     void pop_back()
     {
         if(!empty())
            cs--;
     }
     void print()
     {
         for(int i=0;i<cs;i++)
         {
             cout<<arr[i]<<", ";
         }
         cout<<endl;
     }
     int getI(int i)
     {
         return arr[i];
     }
     int getSize()
     {
         return cs;
     }
     int getMax()
     {
         return maxSize;
     }

};

ostream& operator<<(ostream &os, Vector &v)
{
    v.print();
    return os;
}


int main()
{
    Vector v(10);
    v("Kartikeya Agarwal");//Functional Object;
    for(int i=0;i<=3;i++)
    {
        v.push_back(i*i);
    }
    v.print();
    Vector v2(v);
    cout<<v.getMax()<<endl;
    v.push_back(7);
    cout<<v.getMax()<<endl;
    for(int i=0;i<v.getSize();i++)
    {
        cout<<v[i]<<" ";
    }
    v2 = v; //copy assignment operator calling to copy v into v2
    cout<<endl;
    cout<<v<<v2;
    return 0;
}
