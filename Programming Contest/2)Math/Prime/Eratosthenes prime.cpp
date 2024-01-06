#include<iostream>
#include<cmath> // Include cmath for sqrt function
using namespace std;

int ar[100];

int main() {
    int n;
    cout << "Enter how many prime numbers you want?" << endl;
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Invalid input. Please enter a positive number less than or equal to 100." << endl;
        return 1; // Exit with an error code
    }

    int k = 0;
    for (int i = 2; k < n; i++) {
        bool isPrime = true;

        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break; // If 'i' is divisible by any number between 2 and sqrt(i), it's not prime
            }
        }

        if (isPrime) {
            ar[k] = i;
            k++;
        }
    }

    cout << "Here are the first " << n << " prime numbers:" << endl;
    for (int i = 0; i < k; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;

    return 0;
}
