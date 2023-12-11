#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define cute ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, k;
int u, r, l , v;
int t, s;
int a[101];

void rev(int x, int y)
{
    for(int i = x; i <= (x + y )/2; i++)
    {
        s = a[i];
        a[i] = a[y - i + x];
        a[y - i + x] = s;
    }
}

bool check()
{
    for(int i = 1; i <= n; i++)
    {
        if(a[i] != i) return false;
    }
    return true;
}
int32_t main()
{
    cute
    freopen("revnrev.inp", "r", stdin);
    freopen("revnrev.out", "w", stdout);
    cin >> n >> k;
    cin >> u >> v;
    cin >> l >> r;

    for(int i = 1; i <= n; i++) a[i] = i;

    rev(u,v); rev(l, r); t = 1;
    while(check() == false)
    {
        rev(u,v);
        rev(l,r);
        t++;
    }
    for(int i = 1; i <= k % t; i++)
    {
        rev(u,v);
        rev(l,r);
    }
    for(int i = 1; i <= n; i++) cout << a[i] << endl;
    return 0;
}



