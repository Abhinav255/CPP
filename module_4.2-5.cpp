#include<iostream>
using namespace std;

class math
{
	public:
		
		void mat(int a, int b)
		{
			
			cout<<"Addition of "<<a<<" and "<<b<<" = "<<a+b<<endl;
		}
		void mat(int x,double y)
		{
			cout<<"Subtraction of "<<x<<" and "<<y<<" = "<<x-y<<endl;
		}
		void mat(double i, double j)
		{
			cout<<"Multiplication of "<<i<<" and "<<j<<" = "<<i*j<<endl;
		}
		void mat(double p, int q)
		{
			double o;
			o=p/q;
			cout<<"Division of "<<p<<" and "<<q<<" = "<<o<<endl;
}
};

int main()
{
	int a,b;
	cout<<"enter 2 values"<<endl;
	cin>>a>>b;
	math obj;
	obj.mat(a,b);
	obj.mat(a,b);
	obj.mat(a,b);
    obj.mat(a,b);
	return 0; 
}