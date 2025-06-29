#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0||n==1){
        return 1; //기저사례가 중요하다 
    }
    return n*fact(n-1);
    
}
int fact2(int n){
    int ret = 1;
    for(int i=1; i<n; i++){
        ret *= i;
    }
}
int fibo(int n){
    if(n==0||n==1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    cout << fact(3) << fibo(3) << "\n"; 
}