#include<iostream>
using namespace std;

class calc
{
	public:

	
	calc(int a,int b, char e)
	{
	
		again:
		switch(e)
		{
			case '+': cout<<"Addition of" <<a<<" and "<<b<<" = "<<a+b<<endl;
			break;
			case '-': cout<<"Subtraction of "<<a<<" and "<<b<<" = "<<a-b<<endl;
			break;
			case '*': cout<<"Multiplication of "<<a<<" and "<<b<<" = "<<a*b<<endl;
			break;
			case '%': cout<<"Division of "<<a<<" and "<<b<<" = "<<a/b<<endl;
			break;
			default:
			cout<<"Enter valid operation";
		
			break;
			}
		
	}
		
};

int main()
{
	int a,b;
	char c;
	cout<<"enter 2 numbers";
	cin>>a>>b;
	cout<<"\n+ for Addition\n- for subtraction\n* for multiplication\n% for division"<<"\nenter the operation to be performed on the number:";
	cin>>c;
	calc x(a,b,c);
	
}