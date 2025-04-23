#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

// function to check if a number has exactly 3 divisors - TLE

// bool check(int x) {
//     if (x == 1) return false;
//     int count = 0;
//     for (int i = 2; i * i <= x; i++) {
//         if (x % i == 0) {
//             count++;
//             if (i != x / i) count++;
//             if (count > 1) return false;
//         }
//     }
//     return count == 1;
// }

vi primes;
vector<bool> isPrime(1e6 + 1, true);

void sieve() {
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i < 1e6 + 1; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < 1e6 + 1; j += i) isPrime[j] = false;
        }
    }
}

bool hasThreeDivisors(int x) {
    int root = sqrt(x);
    if (root * root != x) return false;
    return isPrime[root];
}

int32_t main() {
    fio;
    sieve();
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (hasThreeDivisors(x)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}