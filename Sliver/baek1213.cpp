#include <bits/stdc++.h>
using namespace std;

//팰린드롬은 오름차순생각
//홀수가 2개이상이면 펠린드롬 x  
int main(){
   char mid =0;
   string s;
   int cnt[100004]={0};
   int flag=0;
   cin >> s;
   string ret;
   for(char a : s){
      cnt[(int)a]++; 
   }
   for (int i = 'Z'; i >='A'; i--)
   {

      if(cnt[i]&1)
     {
      mid = char(i); 
      flag ++ ; //홀수 2개이상 체크 
      cnt[i]--;
     }

     if(flag == 2){
      
      break;}

      for (int j=0; j<cnt[i]; j+=2){
         ret = char(i) + ret;
         ret += char(i);

      }


   }
    if(mid) ret.insert(ret.begin()+ret.size()/2,mid);
    if(flag==2){
      cout << "I'm Sorry Hansoo" << "\n";
    }
    else{
      cout << ret << "\n";
    }

   
   
      return 0;
    }
    



