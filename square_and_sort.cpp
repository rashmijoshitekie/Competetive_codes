// two pointer - square and sort array
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int A[10000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int s = 0;
    int e = n - 1;
    vector<int> v;
    while (s <= e)
    {
        int v1 = A[s] * A[s];
        int v2 = A[e] * A[e];
        if (v1 <= v2)
        {
            v.push_back(v2);
            e--;
        }
        else
        {
            v.push_back(v1);
            s++;
        }
    }
    // reverse(v);
    return 0;
}
