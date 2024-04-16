
#include <iostream>
using namespace std;
class Person
{   public:
    char name[10];
    int age;
    char add[20];
    int phone;
        public:
        void getdata()
        {
            cout<<"Enter your name";
            cin>>name;
            cout<<"Enter your age"<<endl;
            cin>>age;
             cout<<"Enter your address"<<endl;
            cin>>add;
             cout<<"Enter your phone no."<<endl;
            cin>>phone;
        }
};
class Employee:public virtual Person
{
    char post[10];
    int salary;
};
class Customer:public virtual Person
{   public:
    void display()
    {
       
        
    }
    char product[20];
    int cost;
};
class Emp_Cus:public Employee,public Customer
{
    int bill;
};

int main() {
   Emp_Cus V1;
   V1.getdata();
   V1.display(); 
    

    return 0;
}
