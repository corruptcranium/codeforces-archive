#include <bits/stdc++.h>
using namespace std;
using ll =  long long;

int solve() {
    int a1, a2, a3, a4; cin >> a1 >> a2 >> a3 >> a4;
    
    if(a1 == 0) return 1;
    
    int ans = 0;
    ans += a1;
    ans += 2*min(a2, a3);
    ans += min(a1 + 1, abs(a2 - a3) + a4);
    
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    #ifndef ONLINE_JUDGE
        freopen("input", "r", stdin);
        freopen("output", "w", stdout);
    #endif
    
    int tst; cin >> tst;
    while(tst--)
        cout << solve() << '\n';
        
    return 0;
}
