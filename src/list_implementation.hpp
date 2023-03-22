#ifndef LIST_IMPLEMENTATION_HPP
#define LIST_IMPLEMENTATION_HPP
#include "list.hpp"

template <typename T>
list<T>::list()
{
    objectcounter = 0;
    root = new node<T>;
    edge = new node<T>;

    root->before = nullptr;
    root->after = edge;

    edge->after = nullptr;
    edge->before = root;
}

template <typename T>
void list<T>::insert(T value, int position)
{

    node<T> *search = root;

    if (position < 0)
    {
        position = 0;
    }

    for (int i = 0; i <= position; i++)
    {
        if (search->after != nullptr)
        {
            search = search->after;
        }
    }

    node<T> *newnode = new node<T>;
    newnode->value = value;

    newnode->after = search;
    newnode->before = search->before;

    search->before->after = newnode;
    search->before = newnode;

    objectcounter++;
}

template <typename T>
void list<T>::remove(int position)
{
    node<T> *search = root;

    if (position < 0)
    {
        return;
    }

    for (int i = 0; i <= position; i++)
    {
        if (search->after != nullptr)
        {
            search = search->after;
        }
        else
        {
            return;
        }
    }

    search->before->after = search->after;
    search->after->before = search->before;

    delete search;
}

template <typename T>
T list<T>::operator[](int position)
{
    node<T> *search = root;

    if (position < 0)
    {
        position = -1;
    }
    for (int i = 0; i < position + 1; i++)
    {
        if (search->after != nullptr)
        {
            search = search->after;
        }
    }
    return search->value;
}

#endif