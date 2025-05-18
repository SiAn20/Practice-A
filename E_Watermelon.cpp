#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;

    cin >> n;
    if(n>2 && n%2==0){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}