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
int n;

int main() {
    // freopen("C:/Users/ASUS/OneDrive/Documentos/UTEC-Competive-Programming-Camp/Day 4/b.in", "r", stdin);
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    ll n,x;
    while(cin>>n>>x){
        vector<ll>values(n);
        ll sum=0;
        forn(i,n){
            cin>>values[i];
            sum+=values[i];
        }
        int count=0;
        sum=abs(sum);
        while(sum>0){
            sum=abs(sum)-x;
            count++;
        }
        cout<<count;
    }
    return 0;
}
