#include <iostream>

template <class T>
class stack
{
public:
    stack();
    virtual ~stack();
    virtual void Push(const T& nodedata);
    virtual T Pop();
    T Peek();
    bool IsEmpty();

private:
    struct stacknode
    {
        T nodedata_;
        stacknode* pnext_;
        stacknode(const T& nodedata)
        {
            nodedata_ = nodedata;
            pnext_ = NULL;
        }
    };

    stacknode* ptop_;
};
