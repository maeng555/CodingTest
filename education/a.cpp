#include <bits/stdc++.h>
using namespace std;

//메인로직 세단계 연구소 
// 벽을 세개를 세운다 , 바이러스 , 퍼진영역 , 안전영역을 카운팅 - 맥스값

int a[10][10];
int n, m, ret;
int visited[10][10];
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
vector<pair<int, int>> virusList, wallList;
void dfs(int y, int x){
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny <0 || ny >=n || nx <0 || nx >=m || visited[ny][nx] || a[ny][nx]==1) continue;
        visited[ny][nx] = 1;
        dfs(ny, nx);
    }

        return;
    
}
int solve(){
    //for (int i=0; i<10; i++)
    // for (int j=0; j<10; j++)
    //     visited[i][j] = 0;
    
   
    fill(&visited[0][0], &visited[0][0]+10*10, 0); //초기화 
    for (pair<int, int> b : virusList)
    {
        visited[b.first][b.second] = 1;
        dfs(b.first, b.second);
    }
     int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]==0 && !visited[i][j]) cnt++;
        }
        
    }
    return cnt;
    
}

int main (){
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
            if(a[i][j]==2){
                virusList.push_back({i,j});  //바이러스 위치 저장
            }
            if(a[i][j]==0){
                wallList.push_back({i,j});  //벽 위치 저장
            }
        }
    }
    //벽 세개 조합 
    for (int i = 0; i < wallList.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                a[wallList[i].first][wallList[i].second] = 1;
                a[wallList[j].first][wallList[j].second] = 1;
                a[wallList[k].first][wallList[k].second] = 1;

                //바이러스 퍼트리기 
                //안전영역 카운팅 
                ret = max(ret, solve());
                //원상복귀
                a[wallList[i].first][wallList[i].second] = 0;
                a[wallList[j].first][wallList[j].second] = 0;
                a[wallList[k].first][wallList[k].second] = 0;
            }
            
        }
        
        /* code */
    }
    cout << ret << "\n";
    return 0;
    
}
