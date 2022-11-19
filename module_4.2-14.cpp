//Write a program to find the max number from given two numbers using friend function
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
	friend void max(N o);
};
void max(N o)
{
	if(o.a>o.b)
	{
		cout<<o.a<<" is larger than "<<o.b<<endl;
	}
	else
	{
		cout<<o.b<<" is larger than "<<o.a<<endl;
	}
}

int main()
{
	N o;
	int a,b;
	cout<<"enter 2 no to check max value:"<<endl;
	cin>>a>>b;
	o.value(a,b);
	max(o);
	return 0;
}
