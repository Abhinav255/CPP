#include<iostream>
using namespace std;

class Area
{
	public:
		
		void area(int a, int b)
		{
			
			cout<<"Area of rectangle with height "<<a<<" and breadth "<<b<<" is "<<a*b<<endl;
		}
		void area(double a, float b)
		{
			
			cout<<"Area of triangle with height "<<a<<" and breadth "<<b<<" is "<<0.5*a*b<<endl;
		}
		void area(float a)
		{
			
			cout<<"Area of circle with radius "<<a<<" is "<<3.14*a*a<<endl;
		}
};

int main()
{
	int h,b;
	Area obj;
//	cout<<"enter height and breadth"<<endl;
//	cin>>h>>b;
	obj.area(5,6);
	obj.area(5.5,6.6);
	obj.area(5);
	
	return 0; 
;}