#include <bits/stdc++.h>
using namespace std;

map<int, int> mp;
int main (){
    vector<int> v{1,1,2,2,3,3};
    for(int i: v){
        if(mp[i]){
            continue; //이미 같은 수가 들어갔다면 
        }
        else{
            mp[i]=1; //value  
        }
    }
    vector<int> ret;
    for(auto it : mp){
        ret.push_back(it.first); //first = key , second = value 
    }
    for(int i : ret){
        cout << i << "\n";
    }
}