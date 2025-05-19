#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    for (int i=0; i<n; i++){
        int e;
        cin >> e;
        if(e>k){
            cout << "Difficult Loss";
            return;
        }
    }
    cout << "Easy Win!";
}

signed main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}