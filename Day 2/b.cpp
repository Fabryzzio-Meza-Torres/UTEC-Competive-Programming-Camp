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


int binary_sex(vector<ll>& arr,ll x){
    int a=-1;
    int b=arr.size();

    while(b-a>1){
        ll mid= a+(b-a)/2;
        if(arr[mid]>=x){
            b=mid;
        }
        else{
            a=mid;
        }
    }
    if(b<arr.size() and arr[b]==x){
        return b;
    }
    else{
        return -1;
    }

}

int main() {
    // freopen("C:/Users/ASUS/OneDrive/Documentos/UTEC-Competive-Programming-Camp/Day 2/b.in", "r", stdin);
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    

    ll n,q;
    cin>>n>>q;
    vector<ll>num(n);
    forn(i,n){
        cin>>num[i];
    }
    std::sort(num.begin(),num.end());
    forn(i,q){
        ll query;
        cin>>query;
        cout<<(binary_sex(num,query))<<'\n';
    }

    return 0;
}