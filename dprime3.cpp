#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define cute ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int N = 31623;
bool prime[N];
int n;
void sieve(int n)
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for(int i = 2; i <= n; i++)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
}


int32_t main()
{
    cute
    freopen("dprime3.inp", "r", stdin);
    freopen("dprime3.out", "w", stdout);
    sieve(31622);
    cin >> n;
    int h = 0, l = 0;
    for(int i = 3; i <= 31622; i++)
    {
        if(prime[i]){
        int z = 4 + i * i;
        h = 0;
        if(z <= n){

        for(int j = 2; j * j <= z; j++)
            if(z % j == 0) h++;

        if(h == 0){ l++; cout << 2 << " " << i << " " << z << endl;}
        }
        }
    }
    if(l == 0) cout << -1;
    return 0;
}


