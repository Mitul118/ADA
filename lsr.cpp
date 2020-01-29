#include<iostream>
using namespace std;
int linear(int a[],int n,int item,int i)
	{
		if(i==n)
		return -1;
		if(a[i]==item)
		return i+1;
		linear(a,n,item,++i);
	}
int main()
{
	int n,a[n],i,m;
	cout<<"Enter the lenght of array";
	cin>>n;
	cout<<"Enter the elements of array";
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the elements to be search";
	cin>>m;
	int r=linear(a,n,m,0);
	if(r==-1)
	cout<<"error";
	else
	cout<<"Element found at"<<i;
	return 0;
}
