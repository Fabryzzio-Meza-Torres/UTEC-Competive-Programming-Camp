#include <bits/stdc++.h>
using namespace std;

int main(){
int Q,K,E;
cin>>Q>>K;
unordered_map<string,int>mapita;
string clave_big;
int big= numeric_limits<int>::min();
int result=0;

for(int i=0;i<Q;i++){
    string name;
    int cost;
    cin>>name>>cost;
    mapita[name]+=cost;
}
for(int i=0;i<min(K,int(mapita.size()));i++){
    for(const auto& par: mapita){
        if(par.second>big){
            big=par.second;
            clave_big=par.first;
        }
    }
     result+=big;
if(!clave_big.empty()){
    mapita.erase(clave_big);
}
}
cout<<big;


}