#include<iostream>
using namespace std;
int main ()
{
int n;
cout<<"Enter a no. :";
cin>>n;
if(n% 3==0  && n%7==0)
{
	cout<<" It is divisible by 3 and 7";
}
else
{
	cout<< " It is not divisible by3 &  7";
}
}
