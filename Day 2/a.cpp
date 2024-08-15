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

int binary_sex(vector<ll>& A, int X){
    ll a=0;
    ll b=A.size();
    while(a<b){
       ll mid=a+(b-a)/2;
       if(A[mid]<=X){
            a=mid+1;
       }
       else{
        b=mid;
       } 
    }
    return a;
   
}

int main() {
    freopen("C:/Users/ASUS/OneDrive/Documentos/UTEC-Competive-Programming-Camp/Day 2/a.in", "r", stdin);
    ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    
    ll shops=0;
    cin>>shops;
    vector<ll>prices(shops);
    forn(i,prices.size()){
        cin>>prices[i];
    }
    std::sort(prices.begin(),prices.end());

    ll days;
    cin>>days;
    while(days--){
        int money;
        cin>>money;
        cout<<binary_sex(prices,money)<<'\n';
        }
    return 0;
}
