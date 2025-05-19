#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    reverse(a, a + n);

    int ans = 0;
    for (int i = 0, cnt = 1; i < n; i++, cnt++) {
        if (a[i] * cnt >= x) {
            ans++;
            cnt = 0;
        }
    }
    cout << ans << endl;

}

signed main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
      solve();  
    }
}