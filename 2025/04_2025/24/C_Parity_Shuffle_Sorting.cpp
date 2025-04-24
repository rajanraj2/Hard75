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

        cout << n - 1 << "\n";

        if (n > 1) cout << 1 << " " << n << "\n";

        int x = (arr[0] + arr[n - 1]) % 2 ? arr[0] : arr[n - 1];

        for (int i = 1; i < n - 1; i++) {
            if ((x + arr[i]) % 2)
                cout << 1 << " " << i + 1 << "\n";
            else
                cout << i + 1 << " " << n << "\n";
        }
    }

    return 0;
}
