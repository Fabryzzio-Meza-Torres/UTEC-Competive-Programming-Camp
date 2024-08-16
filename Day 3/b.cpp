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



int main() {
    freopen("C:/Users/ASUS/OneDrive/Documentos/UTEC-Competive-Programming-Camp/Day 3/b.in", "r", stdin);
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll n,a,b,c,ans=0;
    while(cin>>n>>a>>b>>c){
        for(int i=0;i*a<=n;i++){
            for(int j=0;i*a+j*b<=n;j++){
                ll zc=n-(i*a+j*b);
                if(zc%c==0){
                    ll z=zc/c;
                    ans=max(ans,i+j+z);
                }
            }
        }
        cout<<ans<<'\n';
    }
    

    
    return 0;
}
