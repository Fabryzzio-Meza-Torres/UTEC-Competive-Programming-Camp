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
    cin >> n >> m >> r >> c;

    ll ans = max(max(max(abs(n - r) + abs(m - c), abs(1 - r) + abs(1 - c)), abs(1 - r) + abs(m - c)), abs(n - r) + abs(1 - c));
    cout << ans << '\n';
}
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}