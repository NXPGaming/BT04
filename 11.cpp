#include <iostream>
#include <string>

using namespace std;

bool Tudaonguoc(string &s, string a)
{
	for(int i=0;i<s.length()/2;i++)
	{
		swap(s[i],s[s.length()-1-i]);
	}
	for(int i=0;i<s.length();i++)
	{
		if(s[i] != a[i])
		{
			return false;
		}
	}
	return true;
}

void In(string s)
{
	cout<<s[s.length()/2];
}

int main()
{
   int n;
   cin>>n;
   string s[4];
   for(int i=0;i<n;i++)
   {
	   cin>>s[i];
   }
   for(int i=0;i<n-1;i++)
   {
	   for(int j=i+1;j<n;j++)
	   {
		   if(s[i].length == s[j].length() && Tudaonguoc(s[i],s[j]))
		   {
			   cout<<s[i].length()<<" ";
			   In(s[i]);
			   break;
		   }
	   }
   }

   system("pause");
   return 0;
}