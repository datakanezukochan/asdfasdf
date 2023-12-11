#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define cute ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int c1,c2,c3, n;
const int MOD = 1e9 + 7;

int32_t main()
{
    cute
    freopen("delete.inp", "r", stdin);
    freopen("delete.out", "w", stdout);
    cin >> n;
    int a;
    for(int i = 1; i <= n; i++)
    {
        cin >> a;
        if(a == 1) c1++, c1 %= MOD;
        if(a == 2) c2 = c2*2 + c1, c2 %= MOD;
        if(a == 3) c3 += c2, c3 %= MOD;
    }
    cout << c3;
    return 0;
}
