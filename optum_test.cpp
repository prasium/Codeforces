#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="110100010";
	string res="000000000";
	int k=3;
	string::iterator i;
	for(i=s.end();i!=s.begin();i--)
	{
		char c=*i;
		if(!k)
			break;
		if(c=='0')
		{
			res.replace(i,i,"1");
			k--;
		}
	}
	cout<<res;
}