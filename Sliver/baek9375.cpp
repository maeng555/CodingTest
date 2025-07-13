#include <bits/stdc++.h>
using namespace std;

int t,n;
string a,b;
 //문제가 경우의수이면 longlong으로 해야할 생각 가지기 
int main(){
    cin >> t; // test case 
   
    
   for(int i =0; i<t; i++){
      cin >> n ;
      map<string, int> mp;
      for (int j = 0; j < n; j++)
      {
       cin >> a >> b; //stirng hat headgear
       mp[b]++; //headgear는 증가 
      }
     int ret = 1;
    for(auto k : mp){ //타입추론 하기위해 auto 이걸안쓰면 map<string,int> 선언을해야함 
      ret *= (k.second + 1);
    }
    ret--; 

    cout << ret << "\n";
   }
   
   
      return 0;
    }
    



