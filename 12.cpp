#include <iostream>

using namespace std;

bool KT(int n)
{
	if(n<2)
	{
		return false;
	}
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

void Xoamang(int a[],int n, int vitrixoa)
{
	for(int i = vitrixoa;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		a[i] = i+1;
	}
	for(int i=0;i<n;i++)
	{
		if(KT(i+1))
		{
			Xoamang(a,n,i);
		}
	}
	system ("pause");
	return 0;
}