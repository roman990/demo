#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cases,sum=0,i,j,k,val;
	cin>>cases;
	int size;
	
	for(j=0;j<cases;j++)
	{
		cin>>size;
		int arr[size];
		sum=0;
		
		for(i=0;i<size;i++)	
		{
			cin>>arr[i];
		}
		sort(arr,arr+size);
	
		for( k=1;k<(size-1);k++)
		{	
			sum+=arr[k]+arr[0];				
		}
		sum+=arr[size-1];
		cout<<sum;
		
	}
		
}
