#include <bits/stdc++.h>
using namespace std;

int a,b,c;
int sum;
vector<int> cnt(101,0);
int main(){
 cin >> a >> b >> c ; //요금 5 ,3 ,1 ;
 for (int i = 0; i < 3; i++)
 { 
    int start, end; // 3,5 
    cin >> start >> end ; 
    for (int j = start; j < end; j++) //이상 미만잘확인해라 
    {
        cnt[j]++; // 주차하는시간을  +1로
    }
 }
 for (int i = 1; i <=100; i++)
 {
    if(cnt[i]==1){
        sum += a;
    }
    else if(cnt[i]==2){
        sum += b*2;
    }
    else if(cnt[i]==3){
        sum += c*3;
    }
 }
  cout << sum << "\n";
 

 

}