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
    w(t) {
        int n;
        cin >> n;

        int xor1 = 0;
        int start = 0;

        for (int i = 0; i < n - 2; i++) xor1 ^= i;
        if (xor1 == 0) start = 1;

        int currXor = 0;
        for (int i = start; i < start + n - 2; i++) {
            cout << i << " ";
            currXor ^= i;
        }

        int special = (1LL << 31) - 1;
        cout << special << " " << (currXor ^ special) << "\n";
    }    
    return 0;
}
