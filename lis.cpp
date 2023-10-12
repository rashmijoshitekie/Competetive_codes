// longest increasing subsequence
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int lis(vector<int> arr)
{
    int mel = 0;
    vector<int> dp(arr.size(), 1);
    for (int i = 1; i < arr.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (dp[i] > mel)
        {
            mel = dp[i];
        }
    }
    return mel;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 9, 1, 3, 7, 2};
    cout << lis(arr);
    return 0;
}
