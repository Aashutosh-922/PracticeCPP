#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findPairsWithSum(const vector<int>& nums, int target) {
    vector<vector<int>> result;
    unordered_set<int> seen;

    for (int num : nums) {
        int complement = target - num;

        if (seen.find(complement) != seen.end()) {
            result.push_back({num, complement});
        }

        seen.insert(num);
    }

    return result;
}

int main() {
    // Input array dynamically
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // Input target value
    int target;
    cout << "Enter the target sum: ";
    cin >> target;

    // Find pairs with the target sum
    vector<vector<int>> pairs = findPairsWithSum(nums, target);

    // Output the pairs
    cout << "Pairs with sum " << target << " are:\n";
    for (const auto& pair : pairs) {
        cout << "[" << pair[0] << ", " << pair[1] << "]\n";
    }

    return 0;
}
