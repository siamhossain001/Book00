#include<iostream>
#include<vector>  
#include<cmath>

using namespace std;
long long modular_pow(long long base, long long exponent, long long modulus) {
    long long result = 1;
    base = base % modulus;
    while (exponent > 0) {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }
    return result;
}
bool isprime(long long int a,long long int m,long long int number){
    int carry1,carry2;
    
    carry2 = modular_pow(a,m,number);
    carry1 = (carry2%number);
    
    while(1){
        if(carry1 ==1 || carry1==-1)break;
        else {
            carry2 = modular_pow(carry1,2,number);
            carry1 = (carry2 % number);
        }
    }
    if(carry1==-1){
        return true;
    }
    else {
        return false;
    }

}
//choose 'a' such that 1< a < n-1
void isSTEP2(long long int &a,long long int number){
    while(a>1 && a<number-1){
        if(a>number-1){
             a--;
        }
        else {
            a++;
       }
    }
}
//find n-1 = 2^k x m
void STEP1(long long int number,long long int &k,long long int &m){
    int carry;
    //make it iseven number
    number-=1; 
    while(1){
        carry = pow(2,k);
        if(number%carry!=0){
            k--;
            break; 
        }
        else {
            k++;
            m = number/carry;
        }
    }
}
int main(){
    long long int k=1,m,a=2;
    long long int number;
    cin>>number;
    
    STEP1(number,k,m);
    
    isSTEP2(a,number);

    if(isprime(a,m,number)){
        cout<<"Probably prime"<<endl;
    }
    else {
        cout<<"Comoisite Number"<<endl;
    }
    return 0;
}