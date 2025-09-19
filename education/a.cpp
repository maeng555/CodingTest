#include <bits/stdc++.h>
using namespace std;
//getline 공백까지 포함해서 한줄을 받을때
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(true){
        string s;
        getline(cin, s);
        if(s==".") break;

        stack<int> stk; //짝짓기 
        bool check=true;

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='('){
                stk.push(s[i]);
            }
            if(s[i]=='['){
                stk.push(s[i]);
            }
            if(s[i]==')'){
                if(stk.size()==0 || stk.top()=='['){
                    check=false;
                    break;
                }
                else{
                    stk.pop();
                }
            }
            if(s[i]==']'){
                if(stk.size()==0 || stk.top()=='('){
                    
                
                    check=false;
                        break;
                }
                else{
                    stk.pop();
                }
            }
            

        }
        if( check && stk.size() == 0)  cout << "yes\n";
        else cout << "no\n";

    };
    return 0;

}