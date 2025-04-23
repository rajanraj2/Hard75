#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

bool isPossible(vi& arr, int n, int c, int d, int k) {
    int sum = 0;
    for (int i = 0; i < min(n, k + 1); i++) sum += arr[i];
    int times = d / (k + 1);
    int total = sum * times;

    for (int i = 0; i < min(n, d % (k + 1)); i++) total += arr[i];
    
    return total >= c;
}

int32_t main() {
    fio;
    w(t) {
        int n, c, d;
        cin >> n >> c >> d;
        
        vi arr(n);
        int total = 0, result = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            total += arr[i];
        }
        sort(arr.rbegin(), arr.rend());

        if (arr[0] * d < c) {
            cout << "Impossible" << "\n";
            continue;
        }

        int sum = 0;
        for (int i = 0; i < min(n, d); i++) sum += arr[i];
        if (sum >= c) {
            cout << "Infinity" << "\n";
            continue;
        }

        int left = 0, right = d - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (isPossible(arr, n, c, d, mid)) {
                result = mid;
                left = mid + 1;
            }
            else right = mid - 1;
        }
        
        cout << result << "\n";
    }    
    return 0;
}