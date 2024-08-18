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
    
    while(cin>>n>>m>>k){
        vector<ll>nums(n);
        vector<ll>max(n);
        vector<ll>temp(n);
        vector<ll>pos;
        vector<ll>ans(0);

        forn(i,n){
            cin>>nums[i];
            max[i]=nums[i];
            temp[i]=nums[i];
        }
        sort(max.begin(),max.end(),std::greater<int>());

        forn(i,m*k){
            ll v=max[i];
            auto it=std::find(temp.begin(),temp.end(),max[i]);
            if(it!=nums.end()){
                int position=std::distance(temp.begin(),it);
                pos.push_back(position);
                temp[position]=0;
            }
        }

        forn(i,pos.size()){
            if(pos[i]!=nums.size()-1){
               pos[i]+=1; 
            }
        }
        ll sum=0;
        forn(i,m*k){
            sum+=max[i];
        }
        cout<<sum<<"\n";

        int i=0;
        while(ans.size()!=k-1){
            if(pos[i]>=m){
                ans.push_back(pos[i]);
                cout<<pos[i]<<" ";
                }
            i++;
        }



    
    }
    return 0;
}
