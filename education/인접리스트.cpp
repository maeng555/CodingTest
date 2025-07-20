//인접리스트는 연결리스트를 여러개 만들어서 그래프를 표현하는방법 
// 정점마다 리스트를 만듬 
#include <bits/stdc++.h>
using namespace std;
// const int V =4; //정점의개수 
// vector<int> adj[V];  //정점맘다 벡터 생성 (벡터 어려개 
// int main(){
//     adj[0].push_back(1);
//     adj[0].push_back(2);
//     adj[0].push_back(3);

//     adj[1].push_back(0);
//     adj[1].push_back(2);

//     adj[2].push_back(0);
//     adj[2].push_back(1);

//     adj[3].push_back(0);
   
//     for (int i = 0; i < V; i++)
//     {
//         cout << i << "::" ;
//         for(int cnt : adj[i]){
//             cout << cnt << " ";
//         }
//         cout << "\n"; 
        
//     }
    
// }
// 1번과 2번을 만족시키는 코드를 만들어내야 합니다.
// 1번.
// 정점은 0번 부터 9번까지 10개의 노드가 있다. 1 - 2 / 1 - 3 / 3 - 4 라는 경로가 있다. (1번과 2번,
// 1번과 3번, 3번과 4번은 연결되어있다.)이를 인접리스트로 표현한자?
// 2번.
// 0번부터 방문안한 노드를 찾고 해당 노드부터 방문, 연결된 노드를 이어서 방문해서 출력하는
// 재귀함수를 만들고 싶다면 어떻게 해야할까? 또한, 정점을 방문하고 다시 방문하지 않게 만드려면
// 어떻게 해야할까?
const int v =10; //정점의개수
vector<int> adj[v];
int visited[v];

void go (int from){
    cout << from << "\n";
    visited[from] = 1;
    for (int cnt : adj[from]){ //벡터에 들어이쓴ㄴ 원소를 cnt에하나씩 꺼낸다
        if(visited[cnt]) continue;
        go (cnt);
    }

    return;
}
int main(){
    adj[1].push_back(2);
    adj[1].push_back(3);

    adj[2].push_back(1);
    adj[3].push_back(1);

    adj[3].push_back(4);

    for (int i = 0; i < v; i++)
    {
        if(adj[i].size() && visited[i] == 0){
            go(i);
        }
    }
    
    
}
