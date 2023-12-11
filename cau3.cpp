#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define cute ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int N = 1e6 + 1;
int n, d[N], maxx = 0;
int32_t main()
{
    cute
    freopen("cau3.inp", "r", stdin);
    freopen("cau3.out", "w", stdout);
    cin >> n;
    int x;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        d[x]++;
    }
    for(int i = 1; i <= 1000000; i++)
    {
        maxx = max(maxx, d[i]);
    }
    cout << maxx;
    return 0;
}






