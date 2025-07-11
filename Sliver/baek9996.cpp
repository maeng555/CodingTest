#include <bits/stdc++.h>
using namespace std;
int n;
string s, ori_s, pre, suf ;
int main(){
    cin >> n; //개수
    cin >> ori_s; //패턴

    int pos = ori_s.find('*'); //find , substr , 

    pre = ori_s.substr(0,pos);
    suf = ori_s.substr(pos+1); // * 부터 쭈욱 

    for (int i = 0; i < n; i++)
    {
       cin >> s; //n개 입력
        if(pre.size()+suf.size()>s.size()){
            cout << "NE" << "\n";  }
        else{
            if(pre == s.substr(0,pre.size()) && suf == s.substr(s.size()-suf.size())){
                cout << "DA" << "\n";
            }
            else cout << "NE" << "\n";

        }
         
     } 
     return 0;

    }
    



