/*
 * stack.hpp
 *
 *  Created on: 19 de jan de 2022
 *      Author: t317542
 */

#ifndef STACK_HPP_
#define STACK_HPP_

#include "iostream"
#include "fstream"

using namespace std;

template<class T>
struct Node
{
    T Data;
    Node* pNext;
};
template<class T>
class Stack
{
protected:
    Node<T> *pHead;
    Node<T> *pTail;
    Node<T>* GetNODE(T x);
    void AddTail(Node<T>* x);
    void AddFirst(Node<T>* x);
    T RemoveHead();
public:
    Stack();
    bool IsEmpty();
    void push(T x);
    T pop();
    T top();
    ~Stack();
};

template<class T>
Stack<T>::Stack()
{
    this->pHead = NULL;
    this->pTail = NULL;
}

template<class T>
bool Stack<T>::IsEmpty()
{
    if(this->pHead == NULL)
        return true;
    else
        return false;
}

template<class T>
Node<T>* Stack<T>::GetNODE(T x)
{
    Node<T> *p;
    p = new Node<T>;
    if(p==NULL)
    {
        cout<<"\nMemory overload\n";
        return NULL;
    }
    p->Data = x;
    p->pNext = NULL;
    return p;
}
template<class T>
void Stack<T>::AddTail(Node<T>* x)
{
    if(this->pHead == NULL)
    {
        this->pHead = x;
        this->pTail = this->pHead;
    }
    else
    {
        this->pTail->pNext = x;
        this->pTail = x;
    }
}
template<class T>
void Stack<T>::AddFirst(Node<T>* x)
{
    if(this->pHead == NULL)
    {
        this->pHead = x;
        this->pTail = this->pHead;
    }
    else
    {
        x->pNext = this->pHead;
        this->pHead = x;
    }
}

template<class T>
void Stack<T>::push(T x)
{
    Stack<T>::AddFirst(GetNODE(x));
}

template<class T>
T Stack<T>::RemoveHead()
{
    Node<T>* p;
    T x;
    if(this->pHead != NULL)
    {
        p = this->pHead;
        x = p->Data;
        this->pHead = this->pHead->pNext;
        delete p;
        if(this->pHead == NULL)
            this->pTail = NULL;
        return x;
    }
    return NULL;
}

template<class T>
T Stack<T>::pop()
{
    T x;
    if(Stack<T>::IsEmpty())
        return NULL;
    x = Stack<T>::RemoveHead();
    return x;
}

template<class T>
T Stack<T>::top()
{
    if(Stack<T>::IsEmpty())
        return NULL;
    return this->pHead->Data;
}

template<class T>
Stack<T>::~Stack()
{
    Node<T> *p;
    while(this->pHead != NULL)
    {
        p = this->pHead;
        this->pHead = this->pHead->pNext;
        delete p;
    }
    this->pTail = NULL;
    //cout<<endl<<"            \1 \3 \2 HAVE A NICE DAY \1 \3 \2"<<endl;
}


#endif /* STACK_HPP_ */
