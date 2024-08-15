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

ll binary_sum(ll i,int j, vector<ll> &nums){
    ll result=0;
    while(i<=j){
        if(i>=0 and j<=nums.size()-1)
            result+=nums[i];
            i++;
    }
    return result;
}

int main() {
    // freopen("C:/Users/ASUS/OneDrive/Documentos/UTEC-Competive-Programming-Camp/Day 3/a.in", "r", stdin);    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    cin>>n;
    vector<ll>nums(n);
    forn(i,n){
        cin>>nums[i];
    }

    ll q;
    cin>>q;
    forn(i,q){
        ll start,end;
        cin>>start>>end;
        if(i!=q-1){
            cout<<binary_sum(start,end,nums)<<'\n';
        }
        else{
            cout<<binary_sum(start,end,nums);
        }
        
    }

    return 0;
}
