#include<iostream>
using namespace std;

class Add
{	public:
	Add(int a,int b)
	{
		cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
	}
	
};

class Sub
{	public:
	Sub(int a,int b)
	{
		cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
	}
};

class Mul
{	public: 
	Mul(int a,int b)
	{
		cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
	}
};

class Div
{	public:
	Div(int a,int b)
	{
		cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
	}
};

int main()
{	
	int a,b;
	cout<<"enter 2 numbers"<<endl;
	cin>>a>>b;
	//scin>>b;
	Add o(a,b);
	Sub ob(a,b);
	Mul obj(a,b);
	Div obje(a,b);
	return 0;
}