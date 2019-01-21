#include<iostream>

using namespace std;
void swap(int&a,int&b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void swapP(int*&a,int*b)
{
	int *temp;
	temp=a;
	a=b;
	b=temp;
}
int main ()
{
	int a,b;
	int * p,*q;
	a=5;
	b=8;
	p=&a;
	q=&b;
	cout<<"a="<<a<<endl<<"b="<<b<<endl<<"p="<<p<<endl<<"q="<<q<<endl<<"*p="<<*p<<endl<<"*q="<<*q<<endl;
	swap(a,b);
	cout<<"a="<<a<<endl<<"b="<<b<<endl<<"p="<<p<<endl<<"q="<<q<<endl<<"*p="<<*p<<endl<<"*q="<<*q<<endl;
	swapP(p,q);
	cout<<"a="<<a<<endl<<"b="<<b<<endl<<"p="<<p<<endl<<"q="<<q<<endl<<"*p="<<*p<<endl<<"*q="<<*q<<endl;



}