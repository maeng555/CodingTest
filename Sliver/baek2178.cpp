//한칸 이므로 bfs
#include <bits/stdc++.h>
using namespace std;

const int max_n =104;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int n, m;
int y ,x ;
int a[max_n][max_n];
int visited[max_n][max_n];

int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
        
    }
    queue<pair<int,int>> q;
    visited[0][0]=1;
    q.push({0,0});
    while(q.size()){
        // int y = q.front().frist;
        // int x = q.front().second; -> 
        tie(y,x) = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny<0 || nx <0 || ny>=n || nx>=m || a[ny][nx]==0) continue;
            if(visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] +1;
            q.push({y,x});

        }
        
    }
    cout << visited[n-1][m-1] << "\n";
    return 0;
    
}