#include <iostream>
#include<vector>
#include<cmath>
#include<string>

using namespace std;

int extGCD(int a,int b,int &x,int &y){
    if(a==0){
        x=0;
        y=1;
        return(b);
    }
    int a1,b1,c,x1,y1,rst;
    a1 = b%a;
    b1 = a;
    c = b/a;
    rst = extGCD(a1,b1,x1,y1);
    x = y1 - c*x1;
    y = x1;
    return(rst);
}

int main() {
    int x,y,a,b;
    cout<<"Entere the 2 numbers"<<endl;
    cin>>a>>b;    

    int gcd = extGCD(a,b,x,y);
    
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd<<endl;
    cout<<"Coefficients (x, y) means ax + by = d is "<<x<<" "<<y<<endl;
    return 0;
}