#include <bits/stdc++.h>
using namespace std;
//에라토스테네스 소수구하기  식 
int main() {
    int n, k;
    cin >> n >> k;

    vector<bool> isPrime(k + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= k; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= k; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = n; i <= k; i++) {
        if (isPrime[i]) {
            cout << i << "\n";
        }
    }

    return 0;
}