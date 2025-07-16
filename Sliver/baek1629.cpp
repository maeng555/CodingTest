#include <bits/stdc++.h>
using namespace std;

//첫째 줄에 A, B, C가 빈 칸을 사이에 두고 순서대로 주어진다
//A, B, C는 모두 2,147,483,647 이하의 자연수이다.

 long long a, b, c;
  long long ret;

long long go(long long a, long long b){
  if(b==1) return a%c; //1번 반복일때는 

  long long ret = go(a,b/2);
  ret = (ret*ret)%c;
  if(b%2) ret = (ret*a)%c;
  return ret;



}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
    cin >> a >> b >> c; 
    cout << go(a,b) <<"\n";
    return 0;




}