#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;

    int cnt = 0;
    int x = 666;
    while (true) {
        if (to_string(x).find("666") != string::npos) { // "666"이 들어있으면
            cnt++;// 단독으로 쓰면 상관없음 전위 든 후위든
            
             if (cnt == n) {
                cout << x << "\n";
                break;
            }
        }
        x++;
    }
    return 0;
}