#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, contador=0;
    string text1, text2;

    cin >> n >> text1 >> text2;

    for (int i=0; i<n; i++){
        if(text1[i] != text2[i]){
            contador = contador +1;
        }
    }
    cout << contador;
}

signed main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}