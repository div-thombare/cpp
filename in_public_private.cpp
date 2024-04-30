
//this code is for to understand the concept of access modes in inheritance
#include<iostream>
using namespace std;
class person{
	public:
		char name[10];
		int age;
		int phone;
		char address[20];
};

class student : private person{
		int rollno;
		int marks;
		public: void getdata()
		{
			cout<<"Enter your name:";
			cin>>name;
			cout<<"Enter your age:";
			cin>>age;
			cout<<"Enter your phone number:";
			cin>>phone;
			cout<<"Enter your address:";
			cin>>address;
			cout<<"Enter your roll number:";
			cin>>rollno;
			cout<<"Enter your marks:";
			cin>>marks;
		}	
		
		public: void display()
		{
			cout<<name<<" "<<age<<" "<<phone<<" "<<address<<" "<<rollno<<" "<<marks;
		}
};
/*
class employee : public person{
		int id;
		int salary;
};
*/
int main()
{
	student st;
	st.getdata();
	st.display();
}
