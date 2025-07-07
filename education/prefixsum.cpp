#include <bits/stdc++.h>
using namespace std;

//prefix sum을 만들때는 인덱스 배열 첫번째부터 삽임 0말고 1번째
 
// 수의 개수 n 합을 구해야하는 횟수 m 그  이후 n개의 수가 주어진다. 수는 100이하의
// 자연수  그이후 M개의 줄에는 합을 구해야하는 구간 a,b가주어진다 

//기본 
int a[100004],b,c,psum[100004],n,m;
int main(){
    cin >> n >> m ;
    for (int i = 1; i <= n; i++) //1부터 넣는거 확인해라 
    {
       cin >> a[i]; // n개만틈 숫자 입력
    }
    for (int i = 0; i < m; i++)
    {
       cin >> b >> c;
       int sum=0;
       for (int j = b; j < c; i++)
       {
         sum += a[j];
       }
       cout << sum << "\n";
       
    }
    return 0;      
}
//이거는 최대범위로 햇을땐 시간복잡도 최악은 100억 짜리 시간복잡도다 . 10만 곱하기 10만 
//그래서 -> 누적합으로 하기 
//구간 커리 생각 - > pusm , 팬윅트리 ,  but 동적배열에선 누적합 사용 불가능 
int pusm (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // 입출력 속도를 빠르기 하기위해서 < scanf, printf를 같이 쓰면 안 됨 (혼용 금지!)
    for(int i=1; i<=n; i++){
        cin >> a[i];
        psum[i] = psum[i-1]+a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b >> c;
        cout << psum[c] - psum[b-1] << "\n";
    }
    return 0;
    
}

