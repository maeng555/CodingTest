#include <bits/stdc++.h>
using namespace std;
int n;  
// 짝짓기 폭발 아름다운괄호는 스택 기반 문제풀이 
string s; 
bool check(string s){
	stack<char> stk; 
	for(char c : s){
		if(c == '(')stk.push(c); 
		else{
			if(!stk.empty()) stk.pop(); 
			else return false; 
		}
	}
	return stk.empty();
}
int main() {
	cin >> n; 
	for(int i = 0; i < n; i++){
		cin >> s; 
		if(check(s)) cout << "YES\n"; 
		else cout << "NO\n";
	}  
	return 0;
} 