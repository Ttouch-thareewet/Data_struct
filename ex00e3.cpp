#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, t;
    cin >> n;
    set<int> a;
    bool valid = true;

    for (int i = 0; i < n; i++) {
        cin >> t;

        // Check if t is in the valid range [1, N]
        if (t < 1 || t > n) {
            valid = false;
        }

        // Insert into the set to ensure uniqueness
        a.insert(t);
    }

    // If the size of the set is not equal to N or any element is out of range, it's not a permutation
    if (n != a.size() || !valid) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}
