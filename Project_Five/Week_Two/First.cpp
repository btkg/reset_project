#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
// 双向循环链表
node *create(int n)
{
    node *pre, *head, *temp;
    head = new node;
    head->data = 1;
    head->next = NULL;
    head->prev = NULL;
    pre = head;
    for (int i = 2; i < n; i++)
    {
        temp = new node;
        temp->data = i;
        temp->next = NULL;
        temp->prev = pre;
        pre->next = temp;
        pre = temp;
    }
    node *fin = new node;
    fin->data = n;
    fin->next = head;
    fin->prev = temp;
    temp->next = fin;
    head->prev = fin;
    return head;
}
int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
        {
            break;
        }
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        node *Joseph = create(n);
        int count = 0;
        while (true)
        {
            for (int i = 1; i < m; i++)
            {
                Joseph = Joseph->next;
            }
            node *temp = new node;
            temp = Joseph->next;
            Joseph->prev->next = temp;
            temp->prev = Joseph->prev;
            delete Joseph;
            Joseph = temp;
            count++;
            if (count == n - 1)
            {
                break;
            }
        }
        cout << Joseph->data << endl;
        delete Joseph;
    }
    return 0;
}
