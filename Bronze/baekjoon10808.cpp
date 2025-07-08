#include <bits/stdc++.h>
using namespace std;

 
vector<int> cnt(26,0);
int main(){
    string s;
    cin >> s;
    for(char c : s){
       cnt [c - 'a']++ ;
    }
    for(int i =0; i<26; i++){
        cout << cnt[i] << " ";
    }
    
    
    return 0;
    

}