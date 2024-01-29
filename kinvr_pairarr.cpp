#include <vector>

class Solution {
public:
    int kInversePairs(int n, int k) {
        const int MOD = 1000000007;
        
        // Initialize a 2D DP array
        std::vector<std::vector<int>> dp(n + 1, std::vector<int>(k + 1, 0));
        
        // Base case: one permutation with zero inverse pairs
        dp[0][0] = 1;
        
        // Fill in the DP array
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j <= k; ++j) {
                for (int p = 0; p <= std::min(j, i - 1); ++p) {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - p]) % MOD;
                }
            }
        }
        
        return dp[n][k];
    }
};

