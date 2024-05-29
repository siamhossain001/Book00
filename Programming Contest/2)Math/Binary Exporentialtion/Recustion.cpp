#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int binExpRecur(int a,int b){
    if(b==0) {
        return 1;
    }
    long long int res = binExpRecur(a,b/2);
    if(b%2==0){
        return res*res;
    }
    else{
        return res*res*a;
    }
}
//if we need mod (a * ((res*res)%m))%m , res*res%m
int main() {

    int a,b;
    cin>>a>>b;
    cout<<binExpRecur(a,b);

    return 0;
}
