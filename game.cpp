#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define cute ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a,b, ans = 0;
int32_t main()
{
    cute
    freopen("game.inp", "r", stdin);
    freopen("game.out", "w", stdout);
    cin >> a >> b;
    if(a > b){
        int s = a;
        if(s - 1 > b) ans = s + s - 1;
        else ans = s + b;
    }
    else{
        int h = b;
        if(h - 1 > a) ans = h + h - 1;
        else ans = h + a;
    }
    cout << ans;
    return 0;
}

