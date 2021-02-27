#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int *a = new int [n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			for(int h=j+1;h<n;h++)
			{
			if(a[i] +a[j] + a[h] == 0)
			{
				cout<<a[i]<<" "<<a[j];
				break;
			}
			}
		}
	}
	
	delete[]a;
	system ("pause");
	return 0;
}