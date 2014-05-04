#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    stack<string> stack_local;

    stack_local.Push("zhou");
    stack_local.Push("you");
    stack_local.Push("isme");

    cout<<stack_local.Pop()<<stack_local.Pop()<<stack_local.Pop()<<endl;

    return 0;
}
