#include <bits/stdc++.h>
using namespace std;
// next_permutation(시작지점,끝지점) 순열 ,조합 함수 (오름차순으로 만들고나서 중요)
int main(){
    vector<int> a = {1,2,3}; 
    sort(a.begin(),a.end());
    do{
        for(int i:a){
            cout << i << "";
           
        }
         cout << "\n";

    }while (next_permutation(a.begin(),a.end()));
    
    vector<int> b ={1,3,2,200,100};
    sort(b.begin(),b.end()); //오름차순이아닐경우 순열은 오름차순 정렬된 이후로 시작 
    do
    {
        for (int i = 0; i < 2; i++)
        {
           cout << b[i] << "";
        }
        cout << "\n";
        
        /* code */
    } while (next_permutation(b.begin(),b.end()));
    
   
    return 0;
}

