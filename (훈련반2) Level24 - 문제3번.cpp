#include <iostream>
using namespace std;

int main()
{
    struct robot
    {
        int a, b;
        char t[7];
    };

    robot* p;
    robot robert;

    cin >> robert.a >> robert.b >> robert.t;

    p = &robert;
    cout << p->a + p->b << " " << p->t;

    return 0;
}