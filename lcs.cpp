// longest common subsequence
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int lcs(char *a, char *b, int m, int n, vector<vector<int>> &dp)
{
    if (m == 0 || n == 0)
    {
        return 0;
    }
    if (a[m - 1] == b[n - 1])
    {
        return dp[m][n] = 1 + lcs(a, b, m - 1, n - 1, dp);
    }
    if (dp[m][n] != -1)
    {
        return dp[m][n];
    }
    return dp[m][n] = max(lcs(a, b, m, n - 1, dp), lcs(a, b, m - 1, n, dp));
}
int main(int argc, char const *argv[])
{
    char arr1[1000] = "AGGTAYB";
    char arr2[1000] = "GXTXAYB";
    int m = strlen(arr1);
    int n = strlen(arr2);
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
    cout << lcs(arr1, arr2, m, n, dp);
    return 0;
}
