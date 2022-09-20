#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> Node;
typedef list<Node> Graph;
void print_list(list<int> l);

int main()
{
    list<Node> *graph = new list<Node>[10];

    // graph[0]->push_back(l1);

    list<int *> l;
    int a, b, c;

    return 0;
}

void print_list(list<int> l)
{
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    printf("\n");
}
