#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int binExpIter(int a,int b){
    int ans = 1;
    while(b){
        if(b&1){
            ans = ans*a;
        }
        a = a*a;
        b = b>>1;
    }
    return ans;
}

// if we need mod then ans  = (ans*ll*a)%m , a = (a*1ll*a)%m
int main() {

    int a,b;
    cin>>a>>b;
    cout<<binExpIter(a,b);

    return 0;
}
