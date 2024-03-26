#include<iostream>
using namespace std;
class Stack{
    int max=20;
    int stack[21];
    int top;
    public:void push(int ele)
    {
        if(top==max)
        {
            cout<<"Your stack is full";
        }
        else
        {
            top=top+1;
            stack[top]=ele;
        }
    };
    public:void pop()
    {
        if(top==0)
        {
            cout<<"Your stack is empty";
        }
        else
        {
            top=top-1;
        }
    }
    void display()
    {
        int i;
        for(i=0;i<=top;i++)
        {
            cout<<stack[i];
        }
    }
};
int main()
{
    int ele,choice;
    Stack s;
    cout<<"1.create stack\n2.insert\n3.delete\n4.display";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Stack is created";
        break;
        case 2:
        cout<<"Enter element";
        cin>>ele;
        s.push(ele);
        s.display();
        break;
        case 3:
        s.pop();
        s.display();
        break;
        case 4:
        s.display();
        
    
    }
    return 0;
}
