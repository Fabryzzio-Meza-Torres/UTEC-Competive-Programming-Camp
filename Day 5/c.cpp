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
#define dprint(v) cout << #v"=" << v << endl //;

const int MAXN=100100;
ll n=0,m=0,k=0;


int main() {
    // freopen("C:/Users/ASUS/OneDrive/Documentos/UTEC-Competive-Programming-Camp/Day 5/c.in", "r", stdin);
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n=0,m=0,k=0;
    while(cin>>n>>m>>k){
    vector<pair<ll,ll>>pars(n);
    vector<ll>pos(m*k);

     forn(i,n){
        cin>>pars[i].first;
        pars[i].second= i;
     }
    
    sort(pars.begin(),pars.end(),std::greater<pair<ll,ll>>());

    ll sum=0;
    forn(i,m*k){
        sum+=pars[i].first;
        pos[i]=pars[i].second;
    }

    cout<<sum<<'\n';
    sort(pos.begin(),pos.end());

    int count=0;
    for(int i=m-1;i<pos.size();i+=m){
        if(count==k-1){
            break;
        }
        cout<<pos[i]+1<<' ';
        count++;
    }
    return 0;
}
}
