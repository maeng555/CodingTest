#include <bits/stdc++.h>
using namespace std;

int n; //재료의개수 
int m; //재료 더해야되 값이 나오는 수 ;
int cnt ;
int main(){
   cin >> n >> m ;
   int a[1500001];
   for (int i = 0; i < n; i++)
   { 
      cin >> a[i]; // 배열에 삽입 
   }
   for (int i = 0; i < n; i++)
   {
     for (int j = i+1; j < n; j++)
     {
        if(m == a[i]+a[j]){
          cnt ++ ;
        }
     }
     
   }
   cout << cnt << "\n";
   
   return 0;

}
// int n,m;
// int a[15001];
//    int cnt ;
// //비교하는 함수 ? 재료합
// void combi(int start, vector<int> & v){ //참조로받기
//    //기저사례
//    if(v.size()==2){
//       int b = a[v[0]];
//       int c = a[v[1]];
//       if(b+c == m){
//          cnt ++ ;
//       }
//       return;
//    }
//    for (int i = start+1; i < n; i++)
//    {
//      v.push_back(i);
//      combi(i,v);
//      v.pop_back();
//    }
   

// } 
// int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

   
//    cin >> n >> m;
   
//    for (int i = 0; i < n; i++)
//    {
//       cin >> a[i];
//    }

//    vector<int> v;
//    combi(-1,v);
//    cout << cnt << "\n";
//    return 0;
   

// }