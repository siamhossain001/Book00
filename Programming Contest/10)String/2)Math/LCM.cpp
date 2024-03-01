#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int GCD(int a,int b){
    if(a==0){
        return b;
    }
    return GCD(b%a,a);
}
int LCM(int a,int b){
    return (a*b)/GCD(a,b);
}

int main() {
     int a,b;
     cin>>a>>b;
     cout<<LCM(a,b)<<endl;
    return 0;   
}