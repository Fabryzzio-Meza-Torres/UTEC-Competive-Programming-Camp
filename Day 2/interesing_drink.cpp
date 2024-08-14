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



bool PuedoComprarenUnaTiendaMas(int a, int b){

}


int binary_sex(vector<ll>A, int X){
    ll N=A.size();
    ll a=0;
    ll b=N-1;
    ll mid=a+(b-a)/2;
    while(PuedoComprarenUnaTiendaMas(a,b)){

        if(X==A[mid]){
            return mid;
        }
        else if(X>A[mid] and mid>=0){
            mid=b;
        }
        else{
            mid=a;
        }
    }
    cout<<'0'<<"\n";
    return 0;
}


int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    vector<ll>prices;
    ll shops=0;
    cin>>shops;

    while(shops--){
        ll price;
        cin>>price;
        prices.push_back(price);
    }
    std::sort(prices.begin(),prices.end());

    ll days;
    cin>>days;
    while(days--){
        int money;
        cin>>money;
        binary_sex(prices,money);
        }

}