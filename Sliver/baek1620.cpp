#include <bits/stdc++.h>
using namespace std;

int main(){
    // int string ,string int map 두개 
    int n ,m ;
    string s; 
    map<string, int> mp;
    map<int, string> mp2;
    string a[100004];

    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

    cin >>  n >> m; // 포켓몬개수와 , 맞춰야하는개수 
    for (int i = 0; i < n; i++) //26
    {
       cin >> s; //포켓몬 네임 
       mp[s] += i+1; //포켓몬 key, value
       mp2[i+1] = s; //  == 반대로 
       a[i+1] = s;
    }
    for (int i =0 ; i < m; i++) // 5번 
    {
       cin >> s;
       if(atoi(s.c_str())!= 0){  // 숫자면  문자보여주기
        cout << mp2[atoi(s.c_str())] << "\n";
       }else{
        cout << mp[s] << "\n"; // 문자면  번호보여주기 
       }

    }
    //atoi 는 숫자는 숫자반환 문자는 0반환
    // 다만 stoi는 숫자를  stoi()이렇게 s.c_str없이 바로 문자열 숫자를  -> 숫자로 변환간으하지만 0판단 로직으론 예외발생

   
     return 0;

    }
    



