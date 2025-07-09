
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string reversed = s;
    reverse(reversed.begin(), reversed.end());

    if (s == reversed) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }

    return 0;
}