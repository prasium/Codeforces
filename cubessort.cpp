#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int cube;
		cin>>cube;
		ll a[cube];
		for(ll i=0;i<cube;i++)
			cin>>a[i];
      int count=0;

			for(ll j=i+1;j<cube;j++)
			{
				if(a[i]>a[j])
					count++;
			}
		}
		int check= (cube*(cube-1))/2 - 1;
                if(count>check)
                cout<<"NO\n" ;
                else
                cout<<"YES\n";
	}
}
