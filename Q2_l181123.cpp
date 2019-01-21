#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
	int a,b,c,i;
	ifstream fin("hello.txt");
	fin>>i;
	for(int j=0;j<i;j++)
	{
	fin>>a;
	fin>>b;
	c=a*b;
	cout<<c<<endl;
	}
	


}
