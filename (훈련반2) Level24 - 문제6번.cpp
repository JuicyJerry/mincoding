#include <iostream>
using namespace std;

int main()
{
    struct NODE
    {
        int age;
        NODE* next1;
        NODE* next2;
    };

    NODE simson, woman1, woman2, man1, man2, man3;
    NODE* head = &simson;
    simson.age = 20;
    simson.next1 = &woman1;
    simson.next2 = &woman2;
    woman1.age = 29;
    woman1.next1 = &man1;
    woman1.next2 = &man2;

    woman2.age = 30;
    woman2.next1 = &woman1;
    woman2.next2 = &man3;

    man1.age = 25;
    man2.age = 40;
    man3.age = 38;
    man1.next1 = NULL;
    man1.next2 = NULL;
    man2.next1 = NULL;
    man2.next2 = NULL;
    man3.next1 = NULL;
    man3.next2 = NULL;

    return 0;
}