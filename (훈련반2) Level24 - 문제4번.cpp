#include <iostream>
using namespace std;

int main()
{
    struct NODE
    {
        int x;
        NODE* next;
    };

    NODE a, b, c;
    a.x = 3;
    b.x = 5;
    c.x = 4;

    NODE* t = &a;
    NODE* tt = &b;
    NODE* ttt = &c;

    t->next = tt;
    t->next->next = ttt;


    return 0;
}