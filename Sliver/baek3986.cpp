#include <bits/stdc++.h>
using namespace std;

int n ; 
string s;
int cnt ;
int main(){
   cin >> n ; 
   
   
   for (int i = 0; i < n; i++)
   {
      cin >> s;
      stack<char> stk;
     for(char alpa : s){
       if(stk.size()&& stk.top()==alpa){
         stk.pop();
         
       }else{
         stk.push(alpa);
       }

    }

    if(stk.size()==0) cnt++;

   }
   cout << cnt << "\n";
   
   

} //스택 문제 짝짓기 , 폭발 - >스택 생각 