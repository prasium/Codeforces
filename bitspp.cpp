#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	for(int i=2;i<n;i+=2)
	{
		if(s[i]<s[i-2])
		{
			char x=s[i];
			s[i]=s[i-2];
			s[i-2]=x;
		}
	}
	cout<<s;
}