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

ll arr[500001];
void inicialization(){
    arr[0] = 1;
    arr[1] = 1;
    for (ll i = 2; i <= 500001;i++){
        arr[i] = (arr[i - 1] + arr[i - 2]) % ll(1e8 + 7);
        
    }
}
void solve(){
    cin >> n;
    cout << arr[n - 1] << '\n';
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    inicialization();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}