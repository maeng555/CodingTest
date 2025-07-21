// // // BFS는 그래프를 탐색하는 알고리즘이며 어떤 정점에서 시작해 다음 깊이의 정점으로 이동하기전
// // // 현재 깊이의 모든 정점을 탐색하며 방문한 정점은 다시 방문하지 않는 알고리즘입니다. 같은
// // // 가중치를 가진 그래프에서 최단거리알고리즘으로 쓰입니다.

// // 즉 레벨로 탐색 
// // 수도코드 
// // BFS(G, u)
// //  u,visited =1 
// //  q.push(u);
// //  while(q.size()){
// //     u = q.front()
// //     q.pop()
// //     for each v : G.adj[u]
// //         if v.visited == false
// //             v.visties = u.vistied +1 
// //             q.push(v) 
// //  }
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> adj[100];      // 인접 리스트
// int visited[100];          // 방문 및 거리 기록
// int nodeList[] = {10, 12, 14, 16, 18, 20, 22, 24};  // 출력할 노드 목록

// void BFS(int start) {
//     queue<int> q;
//     visited[start] = 1;  // 시작 노드의 거리 = 1
//     q.push(start);

//     while (!q.empty()) {
//         int here = q.front();
//         q.pop();

//         for (int there : adj[here]) {
//             if (visited[there]) continue; // 이미 방문한 곳이면 스킵
//             visited[there] = visited[here] + 1; // 이전 거리 + 1
//             q.push(there);
//         }
//     }
// }

// int main() {
//     // 그래프 구성
//     adj[10].push_back(12);
//     adj[10].push_back(14);
//     adj[10].push_back(16);

//     adj[12].push_back(18);
//     adj[12].push_back(20);

//     adj[20].push_back(22);
//     adj[20].push_back(24);

//     // BFS 수행 (10번 노드에서 시작)
//     BFS(10);

//     // 각 노드까지의 방문 순서(거리) 출력
//     for (int i : nodeList) {
//         cout << i << " : " << visited[i] << '\n';
//     }

//     // 최단거리 출력 (visited는 1부터 시작하므로 -1)
//     cout << "10번으로부터 24번까지 최단거리는 : " << visited[24] - 1 << '\n';

//     return 0;
// }

// /*
// 예상 출력:
// 10 : 1
// 12 : 2
// 14 : 2
// 16 : 2
// 18 : 3
// 20 : 3
// 22 : 4
// 24 : 4
// 10번으로부터 24번까지 최단거리는 : 3
// */
// // 승원이는 당근을 좋아해서 당근마킷에 엔지니어로 취업했다. 당근을 매우좋아하기 때문에 차도
// // 당근차를 샀다. 이 당근차는 한칸 움직일 때마다 당근을 내뿜으면서 간다. 즉,
// // "한칸" 움직일 때
// // "당근한개"가 소모된다는 것이다. 승원이는 오늘도 아침 9시에 일어나 당근마킷으로 출근하고자
// // 한다. 승원이는 최단거리로 당근마킷으로 향한다고 할 때 당근몇개를 소모해야 당근마킷에 갈 수
// // 있는지 알아보자. 이 때 승원이는 육지로만 갈 수 있으며 바다로는 못간다. 맵의 1은 육지며 0은
// // 바다를 가리킨다. 승원이는 상하좌우로만 갈 수 있다.
// // 입력
// // 맵의 세로길이 N과 가로길이 M 이 주어지고 이어서 N * M의 맵이 주어진다. 그 다음 줄에 승원이의
// // 위치(y, x)와 당근마킷의 위치(y, x)가 주어진다. 이 때 승원이의 시작위치(y, x)에서 "당근한개"가
// // 이미 소모된 상태로 본다.
// // 출력
// // 당근을 몇개 소모해야 하는지 출력하라.

#include <bits/stdc++.h>
using namespace std;
const int max_n = 104;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int n,m ,sy,sx, ey ,ex;
int a[max_n][max_n] , visited[max_n][max_n] ,ny, nx;

void BFS(int y, int x){
    queue<pair<int,int>> q;
    visited[y][x] = 1 ;// 시작점 방문체크 
    q.push({y,x});
    while (q.size())
    {
        tie(y,x) = q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny<0 || nx<0 || ny >=n || nx >=m || a[ny][nx]==0){
                continue;
            }
            if(visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] +1;
            q.push({ny,nx});
        }
    }
    
}

int main() {
    cin >> n >> m; // 몇차원 배열 
    cin >> sy >> sx; //시작지
    cin >> ey >> ex; //도착지
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j]; //배열 입력 
        }
        
    }
    BFS(sy,sx);
    cout << "최단거리" << visited[ey][ex] << "\n";
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
        cout << visited[i][j] << ' ';
       }
       cout << "\n";
       
    }
    return 0;
    
    
}
