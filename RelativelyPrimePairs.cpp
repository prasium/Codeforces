
// You are given a set of all integers from l to r inclusive, l<r, (r−l+1)≤3⋅105 and (r−l) is always odd.

// You want to split these numbers into exactly r−l+12 pairs in such a way that for each pair (i,j) the greatest common divisor of i and j is equal to 1. Each number should appear in exactly one of the pairs.

// Print the resulting pairs or output that no solution exists. If there are multiple solutions, print any of them.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

    int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll l,r;
    cin>>l>>r;
    cout<<"YES\n";
    for(ll i=l;i<r;i+=2)
    {
        cout<<i<<" "<<i+1<<"\n";
    }
    return 0;
}
