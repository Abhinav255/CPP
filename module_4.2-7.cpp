/*Create a class person having members name and age. Derive a class studentv having member percentage. Derive another class teacher having member salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance) */
#include<iostream>
using namespace std;

class person
{
	protected:
		int age;
		string name;
};

class students
{
	protected:
		float perc;
};

class teacher:public person, public students
{
	public:
	int salary;
	
	void init(int i, int j,string k, float l)
	{
		age=i;
		salary=j;
		name=k;
		perc=l;
		
	}
	 
	void dis()
	{
		c.out<<"NAME = "<<name<<endl<<"Age = "<<age<<endl<<"Salary = "<<salary<<endl<<"student percentage = "<<perc<<endl;
		
	} 

};

int main()
{
	teacher obj;
	int a,b;
	float c;
	string d;
	cout<<"Enter your name"<<endl;
	cin>>d;
	cout<<"Enter your age"<<endl;
	cin>>a;
	cout<<"Enter your Salary"<<endl;
	cin>>b;
	cout<<"Enter your Student's percentage"<<endl;
	cin>>c;
	obj.init(a,b,d,c);
	obj.dis();
  return 0;
}