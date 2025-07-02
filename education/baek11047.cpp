#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, k; 
    cin >> n ;
    cin >> k;
    int cnt = 0;
    vector<int> coin(n); 
    for (int i = 0; i < n; i++)
    {
       cin >> coin[i]; 
    }
    
    sort(coin.begin(), coin.end()); //오름차순으로 정의 
    for (int i = n-1; i >=0; i --)
    {
       if(coin[i]<=k){
        cnt += k/coin[i];
        k%=coin[i];
       }
    }
    cout << cnt << "\n";
    return 0;
    
    

 }