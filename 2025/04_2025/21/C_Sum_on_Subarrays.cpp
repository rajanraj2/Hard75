#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

vi generate(int n, int k) {
    if (n == 0) return {};

    if (k < n) {
        vi a(n, -1);
        if (k > 0) a[k - 1] = 200;
        a[k] = -400;
        return a;
    }

    vi a = generate(n - 1, k - n);
    a.pb(1000);
    return a;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vi res = generate(n, k);
    for (auto x : res) cout << x << " ";
    cout << "\n";
}

int32_t main() {
    fio;
    w(t) {
        solve();
    }    
    return 0;
}
