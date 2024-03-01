#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int number;

    cout<<"entere the number "<<endl;
    cin>>number;
    
    int divider = 1;
    cout<<"the factors of "<<number<<" are :";
    for(int i=1;i<=number;i++){
        if(number%i==0){
            cout<<i<<" ";
        }
    }
    return 0;   
}