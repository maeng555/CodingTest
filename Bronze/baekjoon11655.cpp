#include <bits/stdc++.h>
using namespace std;
//OT13은 카이사르 암호의 일종으로 영어 알파벳을 13글자씩 밀어서 만든다.
//알파벳 대문자와 소문자
//카운팅스타 - >배열 
 //13 B->O a->n
int main(){
    //공백을 받을땐 
    string s;
    getline(cin,s);
     
    for (int i = 0; i < s.size(); i++)
    {   //대문자일경우
       if(s[i]>=65&&s[i]<97){
         if(s[i]+13>90) {
            s[i] = s[i]+13 -26;
         }//대문자가 z로끝나면 다ㅣㅅ돌아가기
         else s[i] =s[i]+13;
       }
       if(s[i]>=97&& s[i]<123){
        if(s[i]+13>122){
            s[i]= s[i]+13 -26;
        }
        else s[i]=s[i]+13;
       }
       cout << s[i];
    }
    return 0;
    

}