// sliding window - fruits into basket
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <iostream>
using namespace std;
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> tree;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        tree.push_back(x);
        m[x]++;
    }
    vector<pair<int, int>> p;
    for (auto i : m)
    {
        p.push_back(make_pair(i.first, i.second));
    }
    sort(p.begin(), p.end(), cmp);
    cout << p[p.size() - 1].second + p[p.size() - 2].second;
    return 0;
}