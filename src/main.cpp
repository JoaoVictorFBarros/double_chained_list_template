#include <iostream>
#include "list.hpp"

template <typename T>
void printlist(list<T> l){

    std::cout<<"[";

    for (int i=0;i<l.objectcounter;i++){
       std::cout<<l[i];

       if(i < l.objectcounter -1){
        std::cout<<" ";
       }
    }

    std::cout<<"]";
}

int main(){
    list<int> l;
    l.insert(10,0);
    l.insert(11,1);
    l.insert(12,2);
    l.insert(13,3);
    l.insert(14,4);
    l.insert(15,5);
    l.insert(16,0);
    l.insert(17,-1);

    list<std::string> l2;
    l2.insert("Templates",0);
    l2.insert("are",1);
    l2.insert("cool",2);

    printlist(l);
    printlist(l);

    return 0;
}