#include <iostream>
#include <vector>
using namespace std;
void swap(vector<int> &nums, int i, int j)
{
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}
void reverse(vector<int> &nums, int start)
{
    int i = start;
    int j = nums.size() - 1;
    while (i < j)
    {
        swap(nums, i, j);
        i++;
        j--;
    }
}
void nextPermutation(vector<int> &nums)
{
    int index = -1, ind = -1;
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(nums, 0);
    }
    else
    {
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] > nums[index])
            {
                ind = i;
                break;
            }
        }
        swap(nums, index, ind);
        reverse(nums, index + 1);
    }
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 3, 2, 1};
    nextPermutation(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}
