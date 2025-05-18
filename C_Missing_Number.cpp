#include <bits/stdc++.h>
using namespace std;

void solve (){
    long n;
    cin >> n;
    vector<bool> exist(n,false);

    for (int i=0; i<n-1; i++){
        int x;
        cin >> x;
        exist[x-1] = true;
    }
    for (int i=0; i<n; i++){
        if (!exist[i]){
            cout << i+1;
            break;
        }
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}