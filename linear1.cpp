#include<iostream>
using namespace std;
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
	for(i=1;i<=n;i++)
	{
		if(a[i]==m)
		{
			cout<<" element is founded at index "<<i;
			break;
		}	
	}
	if(i==n+1)
	cout<<"element not found";
return 0;
}
