#include <bits/stdc++.h>
using namespace std;
//4개이상 뽑는건 재귀함수사용 , 3개 이하는 중첩for문 생각 
int n=5, k=3, a[5]={1,2,3,4,5}; //5개중 3개를 뽑아 
void print(vector<int> b){
    for(int i:b){
        cout << i << "";
    }
    cout << "\n";
}
void combi(int start, vector<int> b){
    if(b.size()==k){
        print(b); //3개 조합이 완성되면 출력하겟다 
        return;
    }
    for (int i = start+1 ; i < n; i++)
    {
        b.push_back(i);
        combi(i,b);
        b.pop_back();
    }
    
}

int main(){
    vector<int> b;
    combi(-1,b);
    return 0;
}