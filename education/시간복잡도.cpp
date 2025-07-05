#include <bits/stdc++.h>
using namespace std;
//시간복잡도 - 주요로직의 반복횟수 중점으로 측정!
int main(){
    int n ;
    cin >> n ;
    for (int i = 0; i < 10; i++) //10번
    {
        for (int j = 0; j < n; j++) // n번 
        {
            for (int k = 0; k < n; i++) // n번 
            {
                if(true) cout << k << "\n";
            }
            
        }
    }
    

    for (int i = 0; i < n; i++)
    {
        if(true)cout << i << "\n";
    }

     // 시간복잡도는 ->  10 * n^2 + n
    
    

    return 0;
}