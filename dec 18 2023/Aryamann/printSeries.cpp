#include <bits/stdc++.h>
using namespace std;

void f1(int n, int tmp, int k, vector<int>& res, int flag){
    if(tmp==n) return;
    res.push_back(tmp);
    if(tmp>0 && flag==0){
        tmp=tmp-k;
    }else{
        tmp+=k;
        flag=1;
    }
    f1(n,tmp,k,res,flag);
}

vector<int> f(int n, int k){
    vector<int> res;
    res.push_back(n);
    f1(n,n-k,k,res,0);
    res.push_back(n);
    return res;
}


int main(){
    int N=5,K=2;
    vector<int> a=f(N,K);
    for(auto i: a){
        cout<<i<<" ";
    }

    return 0;
}
