#include <bits/stdc++.h>
using namespace std;
//지렁이가 상하좌우  연결된 컴퍼턴ㄴ트 dfs 
int t, n , m, k, ny, nx,x,y  ;
int ret;
bool visited[51][51];
int a[51][51];
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};

void dfs(int y, int x){
     visited[y][x] =1 ;
     for (int i = 0; i < 4; i++)
     {
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny<0 || nx <0 || ny>=n || nx >=m ) continue;
        if(a[ny][nx]==1 && !visited[ny][nx]){
            dfs(ny,nx);
        }
        
     }
     return;
     
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t; 
    

    for (int i = 0; i < t; i++)
    {
        fill(&a[0][0],&a[0][0]+51*51 ,0); //테스트케이스마다 초기화
        fill(&visited[0][0],&visited[0][0]+51*51,0);
        ret =0;
        cin >> m >> n >> k;
        for (int i = 0; i < k; i++)
        {
            cin >> x >> y;
            a[y][x]=1; // 배추영역 1 
        }
        for (int i = 0; i < n; i++)
        {
           for (int j = 0; j < m; j++)
           {
             if(a[i][j]==1 && !visited[i][j]){
                 dfs(i,j);
                 ret ++ ;
             }
               
           }
           
        }
        cout << ret << "\n";
     
    }
    return 0;

    

} 