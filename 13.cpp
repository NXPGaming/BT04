#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		int n;
		cin>>n;
		int *a=new int[n];
		int *b=new int[n+1];
		double tong =0;
		for(int j=0;j<n+1;j++)
		{
			b[j] = tong;
			if(j<n)
			{
				cin>>a[j];
				tong +=a[j];
			}
		}
		int k=1;
		for(int j=0;j<n;j++)
		{
			if( b[j] == tong - b[j+1])
			{
				cout<<"YES\n";
				k=0;
				break;
			}
		}
		if(k==1)
		{
			cout<<"NO\n";
		}
		delete []a;
		delete []b;
	}
}
