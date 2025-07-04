#include <bits/stdc++.h>
using namespace std; 
//unique는 사용하려면 sort 사용 생각  (중복되지않는수를 뽑으려면 )
vector<int> v ;
int main(){
    for (int i = 0; i < 5; i++)
    {
       v.push_back(i);
       v.push_back(i); //11 22 33 44 55
    }
    for(int i : v) cout << i << " ";
    cout << "\n";
    //중복되지않는 요소로 채운 후 - > 이터레이터를 반환한다 **
    auto it = unique(v.begin(),v.end()); 
    cout << it - v.begin() << "\n"; //5 유효한 범위 중복된값제거한후 
    
    for(int i : v) cout << i << " "; 
    cout << "\n";
    return 0;

    
}
vector<int> v2 = {2,2,1,1,2,2,3,3,4,4,5,6,7,8,9};
int usingsort(){
 sort(v2.begin(),v2.end());
 v2.erase(unique(v2.begin(),v2.end()),v2.end());
 for(int i : v2){
  cout << i << " ";
  
 }
 cout << "\n";
 return 0;
}