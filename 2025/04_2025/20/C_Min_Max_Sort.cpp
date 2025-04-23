#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

bool isSorted(vi& pos, int mid, int n) {
    for (int i = mid + 2; i <= n - mid; i++) {
        if (pos[i] < pos[i - 1]) return false; 
    }
    return true;
}

int solve1() {
    int n, result = n;
    cin >> n;
    
    vi arr(n), pos(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        pos[arr[i]] = i;
    }

    int left = 0, right = n / 2;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (isSorted(pos, mid, n)) {
            result = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    
    cout << result << "\n";
    return 0;
}

int solve2() {
    int n, result = 0;
    cin >> n;
    
    vi arr(n), pos(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        pos[arr[i]] = i;
    }

    int left = (n + 1) / 2, right = (n + 2) / 2;
    while (left > 0 && (left == right || pos[left] < pos[left + 1] && pos[right] > pos[right - 1])) {
        left--;
        right++;
    }
    result = (n - (right - left) + 1) / 2;
    
    cout << result << "\n";
    return 0;
}


int32_t main() {
    fio;
    w(t) {
        // solve1();
        solve2();
    }    
    return 0;
}