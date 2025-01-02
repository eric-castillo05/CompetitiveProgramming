#include <bits/stdc++.h>
using namespace std;

// Function to calculate GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Function to calculate GCD of an array
int gcdArray(const vector<int>& arr) {
    int result = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        result = gcd(result, arr[i]);
        if (result == 1) { // Early exit if GCD becomes 1
            return 1;
        }
    }
    return result;
}

void _solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Compute GCD of the entire array
    int overallGCD = gcdArray(nums);

    // Check if all elements are divisible by overallGCD
    for (int num : nums) {
        if (num % overallGCD != 0) {
            cout << "NO" << '\n';
            return;
        }
    }

    cout << "YES" << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    _solve();
    return 0;
}
