#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

void solve() {
    int n;
    cin >> n;
    
    vi arr(n), digits;
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        int last = arr[i] % 10;
        if (mpp[last] < 3) {
            digits.pb(last);
            mpp[last]++;
        }
    }

    int sz = digits.size();
    for (int i = 0; i < sz; i++) {
        for (int j = i + 1; j < sz; j++) {
            for (int k = j + 1; k < sz; k++) {
                int sum = digits[i] + digits[j] + digits[k];
                if (sum % 10 == 3) {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }

    cout << "NO\n";
}

int32_t main() {
    fio;
    w(t) {
        solve();
    }    
    return 0;
}