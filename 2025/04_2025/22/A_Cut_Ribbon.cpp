#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back


int32_t main() {
    fio;
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    
    vector<int> dp(40001, -1);
    dp[0] = 0;
    
    for (int i = 1; i <= n; i++) {
        if (i >= a && dp[i - a] != -1) dp[i] = max(dp[i], dp[i - a] + 1);
        if (i >= b && dp[i - b] != -1) dp[i] = max(dp[i], dp[i - b] + 1);
        if (i >= c && dp[i - c] != -1) dp[i] = max(dp[i], dp[i - c] + 1);
    }

    cout << dp[n] << "\n";
    
    return 0;
}