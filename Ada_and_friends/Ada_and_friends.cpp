#include <bits/stdc++.h>
using namespace std;

int main(){
freopen("input.in","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

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




}