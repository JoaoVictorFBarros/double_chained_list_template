#ifndef LIST_HPP
#define LIST_HPP

template <typename T>
struct node
{
    T value;
    node *before;
    node *after;
};

template <typename T>
class list
{
private:
    node<T> *root;
    node<T> *edge;

public:
    int objectcounter;
    list();

    void insert(T value, int position);
    void remove(int position);
    T operator[](int position);
};

#include "list_implementation.hpp"

#endif