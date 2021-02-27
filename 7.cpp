#include <iostream>
#include <string>

using namespace std;

void In2tu(char a, char b)
{
	cout<<a+a<<" "<<b+b<<" "<<a+b<<" "<<b+a<<" ";
}

void In3tu(char a, char b)
{
	cout<<a+a+a<<" "<<b+b+b<<" "<<a+a+b<<" "<<a+b+a<<" "<<b+a+a<<" "<<b+b+a<<" "<<b+a+b<<" "<<a+b+b<<" ";
}

int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.length()-1;i++)
	{
		for(int j=i+1;j<s.length();j++)
		{
			In2tu(s[i],s[j]);
			In3tu(s[i],s[j]);
		}
	}
	system("pause");
	return 0;
}
