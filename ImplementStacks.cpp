#include <iostream>
using namespace std;

class Stack{
    int arr[100];
    int top= -1;
public:
    Stack(int data)
    {
        arr[++top] = data;
    }
    void Push(int data)
    {
        if(top==99)
        {
            cout<<"Stack OverFlow\n";
            return;
        }
        arr[++top]=data;
        cout<<data<<" is Pushed Into Stack"<<endl;
    }
    void Pop()
    {
        if(top==-1) return;
        top--;
    }
    void Top()
    {
        cout<<arr[top]<<endl;
    }
    void Empty()
    {
        if(top==-1)
        {
            cout<<"Stack Empty";
        }
        else
            cout<<"Not Empty"<<endl;
        return;
    }
    void Print()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main() {
    Stack s(2);
    s.Push(5);
    s.Push(6);
    s.Push(4);
    s.Print();
    s.Top();
    s.Push(9);
    s.Print();
    s.Pop();
    s.Print();
    s.Empty();
    s.Push(7);
    s.Print();
    return 0;
}
