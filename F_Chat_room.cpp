#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s, hello = "hello";
    int count = 0;
    cin >>s;
    if(s.size()>4){
        for(int i=0; i < s.size(); i++){
            if (s[i] == hello[count]){
                count ++;
            }
        }
        if(count == 5){
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
    else {
        cout << "NO";
    }
}

signed main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}