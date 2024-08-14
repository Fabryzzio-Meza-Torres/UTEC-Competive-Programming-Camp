#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int>A, int X){
    int N=A.size();
    int a=-1;
    int b=N;
    while(b-a>1){
        int c=(a+b)/2;
        if(A[c]>=X){
            b=c;
        }
    else{
        a=c;
    }
    }
    if (b<N and A[b]==X){
        cout<<b;
        return b;
    }
    return -1;
}



int main(){
    vector<int>v{1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,17,18,19};
    
    binary_search(v,7);
}