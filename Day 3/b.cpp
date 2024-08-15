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
ll n;

ll magic_cuts(ll n,vector<ll> & cuts){
    ll result=0;
    for(int i=0;i<3;i++){ 
        if(n>0 and n>=cuts[i]){
            n-=cuts[i];
            result++;
        }
    }
    return result;
}

int main() {
    // freopen("C:/Users/ASUS/OneDrive/Documentos/UTEC-Competive-Programming-Camp/Day 3/b.in", "r", stdin);
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    cin>>n;
    vector<ll>cuts(3);
   for(int i=0;i<3;i++){
        cin>>cuts[i];
   }
   sort(cuts.begin(),cuts.end());
   if(n>0){
        cout<<magic_cuts(n,cuts);
   }

    
    return 0;
}
