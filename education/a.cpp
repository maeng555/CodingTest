#include <bits/stdc++.h>
using namespace std;
// 위대한 해커 창영이는 모든 암호를 깨는 방법을 발견했다. 그 방법은 빈도를 조사하는 것이다.

// 창영이는 말할 수 없는 방법을 이용해서 현우가 강산이에게 보내는 메시지를 획득했다. 이 메시지는 숫자 N개로 이루어진 수열이고, 숫자는 모두 C보다 작거나 같다. 창영이는 이 숫자를 자주 등장하는 빈도순대로 정렬하려고 한다.

// 만약, 수열의 두 수 X와 Y가 있을 때, X가 Y보다 수열에서 많이 등장하는 경우에는 X가 Y보다 앞에 있어야 한다. 만약, 등장하는 횟수가 같다면, 먼저 나온 것이 앞에 있어야 한다.

// 이렇게 정렬하는 방법을 빈도 정렬이라고 한다.

// 수열이 주어졌을 때, 빈도 정렬을 하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 메시지의 길이 N과 C가 주어진다. (1 ≤ N ≤ 1,000, 1 ≤ C ≤ 1,000,000,000)

// 둘째 줄에 메시지 수열이 주어진다.

int n, c;
int a[1004];
vector<pair<int, int>> v; 
map<int, int> mp ,mp_first;

bool cmp(pair<int, int> a, pair<int, int>b){
    if(a.first == b.first) {
        return mp_first[a.second] < mp_first[b.second]; // 빈도수가 같으면 첫번째 등장 순서로 정렬
    }
    return a.first > b.first; // 빈도수가 다르면 빈도수 높은 순서로 정렬
}
int main(){
    
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
       cin >> a[i];
        mp[a[i]]++;  // 빈도수 카운팅 
        if(mp_first[a[i]] == 0) {
            mp_first[a[i]] = i+1; // 
        } // 숫자가 첫번째로 등장순서 

    }
    for(auto it : mp){
        v.push_back({it.second, it.first}); // 빈도수와 그빈도수 숫자 
       
    }
    sort(v.begin(),v.end(), cmp); // 빈도수 높은 순서로 정렬)
    for(auto it : v){
        for (int i = 0; i < it.first; i++)
        {
            cout << it.second << " "; // 빈도수 높은 순서로 정렬된 숫자 출력
        }
        
    }
    


    


    
}
// a.first > b.first
// 내림차순
// 많이 등장한 숫자가 먼저
// a.first < b.first
// 오름차순
// 적게 등장한 숫자가 먼저
// mp_first[a.second] < mp_first[b.second]
// 오름차순
// 먼저 등장한 숫자가 먼저
// mp_first[a.second] > mp_first[b.second]
// 내림차순
// 나중에 등장한 숫자가 먼저
