//Write a program to swap the two numbers using friend function without using third variable
#include<iostream>
using namespace std;

class N
{
	private:
	int a,b;
	public:
		void value(int i,int j)
		{
			a=i;
			b=j;
			
		}
	friend void swap(N o);
};

void swap(N o)
{
	
	o.a=o.a+o.b;
	o.b=o.a-o.b;
	o.a=o.a-o.b;
	cout<<"a = "<<o.a<<", b = "<<o.b<<endl;
}

int main()
{
	N o;
	int a,b;
	cout<<"enter 2 no to swap:"<<endl;
	cin>>a>>b;
	o.value(a,b);
	swap(o);
	 	o.
	return 0;
}

