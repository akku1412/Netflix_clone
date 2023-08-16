#include<iostream>
using namespace std;
int main()
{
	int x=10;
	x++;
	cout<<"\nx="<<x;
	
	++x;
	cout<<"x="<<x;
	int a=12;
	a++ + ++a;
	cout<<a<<endl;
	int c=20;
	c++ + c+ c+ c++ + ++c;
	cout<<"c="<<c<<endl;
	int d=30;
	d--;
	cout<<"d="<<d<<endl;
	--d;
	cout<<"d="<<d;
	
}
