#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define debug1(a) cout << #a << " = " << (a) << endl;
#define debug2(a, b) cout << #a << " = " << (a) << ", " << #b << " = " << (b) << endl;
#define debug3(a, b, c) cout << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl;
#define debug4(a, b, c, d) cout << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << ", " << #d << " = " << (d) << endl;
ll n, m, k,l,r,c;

vector<ll> edges[500005];
vector<ll> indice(500005);
vector<ll> cEdges(500005);
bool vis[500005];


void solve(){
    ll a;
    cin >> n >> m >> a;
    ll ans = 0;
    ans += (n + (a - 1)) / a;
    ll x;
    x = max(ll(0), (m + (a - 1)) / a);
    cout << ans * x << '\n';
}
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}