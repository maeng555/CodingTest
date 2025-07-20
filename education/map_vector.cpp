
#include <bits/stdc++.h>
using namespace std;
//지도 기반문제면 인접행렬 리스트로 풀지말고 지도기반으로 풀어라

// 1번 갈수있는것은 간선 연결 그리고 한칸씩인지 멀리갈수잇는지 
// 2번 상하좌우로 탐색 하는 로직 
// 3번 재귀 dfs



// Q1. {0, 0}좌표에서 dy, dx를 만들어 4방향(위, 오른쪽, 아래, 왼탐색하며 좌표
// 를 출력하시오. 
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
int main(){
    int y =0, x=0;
    for (int i = 0; i < 4; i++)
    {
       int ny = y +dy[i];
       int nx = x +dx[i];
       cout<< ny<< " : "<< nx <<"\n";
    }
    
    return 0;
}
// Q2. {0, 0}좌표에서 dy, dx를 만들어 8방향(위, 오른쪽, 아래, 왼
// 대각선방향포함)을 탐색하며 좌표를 출력하시오

const int dy[]={-1,-1,0,1,1,1,0,-1};
const int dx[]={0,1,1,1,0,-1,-1,-1};
int main(){
    int y=0;
    int x=0;
    for (int i = 0; i < 8; i++)
    {
        int ny = y+dy[i];
        int nx = x+dx[i];
        cout<< ny<< " : "<< nx <<"\n";
    }
    
}
// Q3. 3 * 3 맵을 입력받아야 함. 이 맵은 1과 0으로 이루어져있고 {0, 0}은
// 무조건 1임을 보장한다. {0, 0}부터 4방향을 기준으로 한칸씩 탐색해나가며
// 방문한 정점은 다시 방문하지 않으며 방문하는 좌표
// 를 출력하는 코드. 0은 갈수 없는 지역. 1은 갈 수 있는 지역을
// 구현하시오

int a[3][3];
int visited[3][3];
const int dy[]={-1,0,1,0};
const int dx[]={0,1,0,-1};

 void go(int y,int x){
    visited[y][x]=1; //방문처리

    cout << y << ":"<< x << "\n"; //방문출력

    //상하좌우 탐색 로직 
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny<0 || ny>=3 || nx<0 || nx>=3) continue; //오버플로우 언더플로우
        if(a[ny][nx] == 0 )continue; // 0은갈수잇다 없다 비교
        if(visited[ny][nx])continue; //방문 햇는 지 비교 

        go(ny,nx);
    }
    


 }
 int main(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
        
    }
    go(0,0); 
    
 }