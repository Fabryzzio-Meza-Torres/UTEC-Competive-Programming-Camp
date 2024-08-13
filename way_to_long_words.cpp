#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    cin>>n;

    for(int i=0;i<n;i++){
        string word;
        cin>>word;
        int wsize=word.length();

        if(wsize>10){
            char start=tolower(word[0]);
            char end=tolower(word[wsize-1]);
            cout<<start<<wsize-2<<end<<endl;
        }
        else{
             cout<<word<<endl;
        }
    }


}