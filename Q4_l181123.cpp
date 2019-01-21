#include<iostream>

using namespace std;

void sort( int data[],int size)
{
	int max, indx,n;
	n=size;
	for(int i =0; i <n;i++)
	{
		indx=0;
		max=data[0];
		for(int j=0;j<size;j++)
		{   
			if(data[j]>max)
			{
				max=data[j];
				indx=j;
			}
			


		}
		swap(data[size-1],data[indx]);
		size--;
	}
	


}
int main()
{
	int a;
	cout<<"enter the size of the array";
	cin>>a;
	int* data;
	data = new int [a];
	for(int i=0;i<=a;i++)
		cin>>data[i];
	sort(data,a);
	for(int i=0;i<=a;i++)
		cout<<data[i]<<endl;
	delete[] data;
}