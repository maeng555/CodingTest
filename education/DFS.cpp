#include <bits/stdc++.h>
using namespace std;

// 수도코드 로직을 표현하기 위해쓰이는코드 
// DFS(u, adj)
//  u.vistied = true 
//  for each v : adj[u]
//   if v.visited == false
//     DFS(v,adj)

// const int n =6;
// vector<int> adj[n];
// int visited[n];

// void dfs(int u){
//     visited[u]=1;
//     cout << u << "\n";
//     for(int v : adj[u]){
//         if(visited[v]==0){
//             dfs(v);
//         }
//     }
//     cout << u << "로 시작된 함수 종료 \n"; 
//     return;
// }
// int main(){
//     adj[1].push_back(2);
//     adj[1].push_back(3);
//     adj[2].push_back(4);
//     adj[4].push_back(2);
//     adj[2].push_back(5);
//     dfs(1);
// } 
////////////////////////////////////////////////////////
// 종화는 21세기 유명한 방구쟁이다. 종화는 방구를 낄 때 "이러다... 다 죽어!!" 를 외치며 방구를
// 뀌는데 이렇게 방귀를 뀌었을 때 방귀는 상하좌우 네방향으로 뻗어나가며 종화와 연결된 "육지"는
// 모두 다 오염된다.
// "바다"로는 방구가 갈 수 없다. 맵이 주어졌을 때 종화가 "이러다... 다 죽어!!"를
// "최소한" 몇 번외쳐야 모든 육지를 오염시킬 수 있는지 말해보자. 1은 육지며 0은 바다를 가리킨다.
// 입력
// 맵의 세로길이 N과 가로길이 M 이 주어지고 이어서 N * M의 맵이 주어진다.
// 출력
// "이러다... 다 죽어!!"를 몇 번 외쳐야하는지 출력하라.
// 범위
// 1 <= N <= 100
// 1 <= M <= 100
// 예제입력
// 5 5
// 71
// 1 0 1 0 1
// 1 1 0 0 1
// 0 0 0 1 1
// 0 0 0 1 1
// 0 1 0 0 0
// 예제출력
// 4
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int n, m, ret,ny,nx;
int a[104][104];
bool visited[104][104];\

void DFS(int y, int x){
    visited[y][x] = 1; 
    cout << y << " : " << x << "\n";
    for (int i = 0; i < 4; i++)
    {
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny<0 || nx<0 || ny >=n || nx>=m) continue;
        if(a[ny][nx]==1 && !visited[ny][nx]){
            DFS(ny,nx);
        }
    }
    return; 
    
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m ;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
          cin >> a[i][j];
       }
       
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]==1 && !visited[i][j]){
                ret++;
                DFS(i,j);
            }
        }
        
    }
    
    
}
 