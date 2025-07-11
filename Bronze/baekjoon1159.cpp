#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(26,0);
    string result = "";
    for (int i = 0; i < n; i++)
    {
       string name;
       cin >> name;
       a[name[0]-'a']++;
        
       
    }
     for (int i = 0; i < 26; i++)
        {
            if(a[i]>=5){
                result += char(i + 'a');
            }
        }
        if(result.empty()){
           cout<< "PREDAJA" << "\n";
        }else{
            cout << result << "\n";
        }
    
    


    return 0;
}