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