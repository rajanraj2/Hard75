#include <bits/stdc++.h>
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
    w(t) {
        int n;
        cin >> n;
        
        vi arr(n);
        ivec(arr);
        
        vector<bool> used(n, false);
        vi res;
        int curr = 0;
        
        for (int iter = 0; iter < 31; iter++) {
            int best_idx = -1;
            int best_val = -1;
            for (int j = 0; j < n; j++) {
                if (used[j]) continue;
                int v = curr | arr[j];
                if (v > best_val) {
                    best_val = v;
                    best_idx = j;
                }
            }
            if (best_idx == -1 || best_val == curr) break;
            used[best_idx] = true;
            res.pb(arr[best_idx]);
            curr = best_val;
        }
        
        for (int j = 0; j < n; j++) {
            if (!used[j]) res.pb(arr[j]);
        }
        
        for (int x : res) cout << x << ' ';
        cout << '\n';
    }
    return 0;
}
