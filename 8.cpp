#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int *a =new int[n];
	int *b=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	if(a[0] > b[0]) cout<<"Yes";
	else cout<<"No";
	delete []a;
	delete []b;
	system ("pause");
	return 0;
}