#include<iostream>
#include<cmath>

using namespace std;
/*
    pseudocode 

    intput n ;
    
    result variable = n ;

    loop -----> p=2 to (squre root n);
    
    if(n%p==0) while(n%p==0)   n = n / p;
   
    p^n co-prime = p^n(1-1/p)
*/


int euler(int n){

     int result = n,b;
     b = sqrt(n)+1;

     for(int i = 2;  i < b ; i++ ){
          
          if(n%i==0){

            while(n%i==0){
            
                n =  n / i;
            
            }

           result = result - result/i;

        }
    
     }

     if(n > 1) {
        result = result - result/n;
     }

     return result;

}
int main(){
    int a,b;
    // when co-prime means 2 value ar GCD == 2 thats call co-prime
    cout<<"This is Eulers totient function "<<endl;
    cin>>a;
    
    b = euler(a);
    cout<<b<<endl;
    
    return 0;
}