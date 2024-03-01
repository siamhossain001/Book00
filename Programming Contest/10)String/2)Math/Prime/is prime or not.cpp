#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int a) {
    if (a <= 1) return false;
    if (a <= 3) return true;

    if (a % 2 == 0 || a % 3 == 0) return false;

    for (int i = 5; i * i <= a; i += 6) {
        if (a % i == 0 || a % (i + 2) == 0) return false;
    }

    return true;
}

int main() {
    int t, a;
    cin >> t;

    while (t--) {
        cin >> a;
        if (isPrime(a)) {
            cout << a << " eh primo" << endl;
        } else {
            cout << a << " nao eh primo" << endl;
        }
    }

    return 0;
}
