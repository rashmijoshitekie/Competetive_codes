// fast and slow pointer - middle of linked list
#include <iostream>
#include <vector>
using namespace std;

struct node
{
    int data;
    node *next;
};

int main(int argc, char const *argv[])
{
    struct node *n;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        struct node *n1 = new node();
        cin >> x;
        n1->data = x;
        n1->next = n;
        n = n1;
    }
    // display
    struct node *h = n;
    while (N--)
    {
        cout << h->data;
        h = h->next;
    }
    struct node *h1 = n;
    for (int i = 0, j = 1; j < N; i += 1, j += 2)
    {
        h1 = h1->next;
    }
    cout << h1->data;

    return 0;
}
