#include <bits/stdc++.h>
using namespace std;

int a[9];
vector<int> selected;

void combi(int index, int cnt, int sum) {
    if (cnt == 7) {
        if (sum == 100) {
            for (int x : selected) {
                cout << x << "\n";
            }
            exit(0); // 정답 하나만 출력 후 종료
        }
        return;
    }

    if (index >= 9) return;

    // 현재 index 선택
    selected.push_back(a[index]);
    combi(index + 1, cnt + 1, sum + a[index]);
    selected.pop_back();

    // 현재 index 선택 안함
    combi(index + 1, cnt, sum);
}

int main() {
    for (int i = 0; i < 9; i++) {
        cin >> a[i];
    }
    sort(a, a + 9); // 오름차순 출력 보장
    combi(0, 0, 0);
    return 0;
}