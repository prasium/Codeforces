#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	for(int i=0;i<s.length();i++)
	{
	    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
			{
				 s.erase(i,1);
				 i--;
			}
	
  	}
	for(int j=0;j<s.length();j++)
	{
		s.insert(j++,".");
	}
	cout<<s;
	return 0;
}