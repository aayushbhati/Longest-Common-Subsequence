class Solution {
public:
    int longestCommonSubsequence(string test, string check) {
        int n = test.length();
        int m = check.length();
        vector<vector<int>> ans(n+1, vector<int>(m+1, 0));
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                if(test[i-1] == check[j-1]) {
                    ans[i][j] = 1 + ans[i-1][j-1];
                } else {
                    ans[i][j] = max(ans[i-1][j], ans[i][j-1]);
                }
            }
        }
        return ans[n][m];
    }
};
