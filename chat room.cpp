#include <bits/stdc++.h>
using namespace std;

int main(){
    string word;
    cin>>word;
    string s="hello";
    int j=0;
    for(int i=0;i<word.size();i++){
        if(word[i]==s[j]){
            j++;
        }
    }
    cout<<(j==s.size()?"YES":"NO")<<endl;

}