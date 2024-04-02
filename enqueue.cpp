#include<iostream>
#define n 100
using namespace std;
class queue
{
	public:
		int front=0,rear,queue[n];
		void enqueue(int element){
			
			if(rear==n-1){
				cout<<"overflow"<<endl;
			}
			else
			{
				rear=rear+1;
				queue[rear]=element;
				
			}
	}
		void disp()
		{
			cout<<"queue element are"<<endl;
			for(int i=front;i<=rear;i++)
			{
				cout<<queue[i];
			}
		}
};
int main()
{
	queue s1;
	s1.enqueue(100);
	s1.disp();
	return 0;
}
