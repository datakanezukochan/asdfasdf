#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define cute ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int x, y;
int32_t main()
{
    cute
    freopen("cau1.inp", "r", stdin);
    freopen("cau1.out", "w", stdout);
    cin >> x >> y;
    int ans = 0;
    int h = __gcd(x, y);
    for(int i = 1; i * i <= h; i++)
    {
        if(h % i == 0) ans += 2;
        if(i * i == h) ans--;
    }
    cout << ans;
    return 0;
}




