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
    int n;
    cin >> n;
    
    vs arr(n);
    ivec(arr);
    unordered_map<string, int> mpp;

    for (auto it : arr) {
        if (mpp.find(it) == mpp.end()) {
            mpp[it] = 0;
            cout << "OK\n"; 
        }
        else {
            mpp[it]++;
            string new_name = it + to_string(mpp[it]);

            while (mpp.find(new_name) != mpp.end()) {
                mpp[it]++;
                new_name = it + to_string(mpp[it]);
            }

            mpp[new_name] = 0;
            cout << new_name << "\n";
        }
    }

    return 0;
}