#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a;
	for(int i=1; i<=a;i++)
	{ 
		for(int j=0;j<=a*2;j++)
		{ 
			if(j<i)
				cout<<i;
			else if(j>i && j<=(a*2-i))
				cout<<"*";
			else if(j>(a*2-i))
				cout<<i;
		}
		cout<<endl;
	}
	for(int i=a+1; i<a*2;i++)
	{ 
		for(int j=a*2;j>=0;j--)
		{ 
			if(j>i)
				cout<<i;
			else if(j<i && j>=a*2-i)
				cout<<"*";
			else if(j<(a*2)-i)
				cout<<i;
		}
		cout<<endl;
	}

}