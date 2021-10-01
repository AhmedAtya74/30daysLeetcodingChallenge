class Solution {
public:
    int longestCommonSubsequence(string a, string b) {
        const int N1 = a.size();
        const int N2 = b.size();
        if (N1 < N2) 
            return longestCommonSubsequence(b, a);
        
        vector<vector<int>> dp(2, vector<int>(N2 + 1));
        for (auto i = 1; i <= N1; ++i)
        for (auto j = 1; j <= N2; ++j)
        if (a[i - 1] == b[j - 1]) dp[i % 2][j] = dp[(i -1) % 2][j - 1] + 1;
         else dp[i % 2][j] = max(dp[(i - 1) % 2][j], dp[i % 2][j - 1]);
        return dp[N1 % 2][N2];
    }
};
