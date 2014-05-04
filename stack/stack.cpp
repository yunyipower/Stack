#include "stack.h"

using namespace std;

template <class T>
stack<T>::stack():
    ptop_(NULL)
{
}

template <class T>
stack<T>::~stack()
{
}

template <class T>
void stack<T>::Push(const T& nodedata)
{
    stacknode *pnewnode = new stacknode(nodedata);
    pnewnode->pnext_ = ptop_;
    ptop_ = pnewnode;
}

template <class T>
T stack<T>::Pop()
{
    std::string str_exception = "it's an empty stack.";
    try{
        if(!IsEmpty()){
            T t = ptop_->nodedata_;
            stacknode *pretop = ptop_;
            ptop_ = ptop_->pnext_;
            delete pretop;
            return t;
        }else{
            throw str_exception;
        }
    }
    catch(...)
    {
        cout<<str_exception<<endl;
    }
}

template <class T>
T stack<T>::Peek()
{
    if(!IsEmpty()){
        return ptop_->nodedata_;
    }else{
        return NULL;//throw exception
    }
}

template <class T>
bool stack<T>::IsEmpty()
{
    return ptop_ == NULL ? true : false;
}

template class stack<string>;
template class stack<int>;







