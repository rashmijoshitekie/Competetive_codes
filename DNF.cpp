// two pointer - dutch national flag
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

void swap(int A[10000], int x, int y)
{
    int temp;
    temp = A[x];
    A[x] = A[y];
    A[y] = temp;
}

int main(int argc, char const *argv[])
{
    int n, A[10000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int s = 0, e = n - 1, m = 0;
    while (m < e)
    {
        if (A[m] == 0)
        {
            swap(A, s, m);
            s++;
            m++;
        }
        else if (A[m] == 1)
        {
            m++;
        }
        else
        {
            swap(A, e, m);
            e--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i];
    }
    return 0;
}
