#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
typedef long long ll;
typedef pair<int,int> ii;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl //;)

const int MAXN=100100;
ll n=0,m=0;    


int main() {  
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    cin>>n>>m;
    std::unordered_map<string,ll>mapita;
    std::priority_queue<ll>pq;

    for(int i=0;i<n;i++){
        string name;
        ll value;
        cin>>name>>value;
        mapita[name]+=value;
    }
    for(auto const & par: mapita){
        pq.push(par.second);
    }

    ll ans=0;
    while(m-- and !pq.empty()){
        string max_name;
        ll max=pq.top();
        ans+=max;
        pq.pop();
    }
    cout<<ans;
    }

