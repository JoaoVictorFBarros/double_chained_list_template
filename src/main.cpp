#include <iostream>
#include "list.hpp"

template <typename T>
void printlist(list<T> l)
{

    std::cout << "[";

    for (int i = 0; i < l.objectcounter; i++)
    {
        std::cout << l[i];

        if (i < l.objectcounter - 1)
        {
            std::cout << " ";
        }
    }

    std::cout << "]";
}

int main()
{
    std::cout<<"\n\n_________________________Starting_________________________\n\n";


    list<std::string> popularprograminglanguages;

    popularprograminglanguages.insert("JavaScript",0);
    popularprograminglanguages.insert("HTML/CSS",1);
    popularprograminglanguages.insert("SQL",2);
    popularprograminglanguages.insert("Python",3);
    popularprograminglanguages.insert("TypeScript",4);
    popularprograminglanguages.insert("Java",5);
    popularprograminglanguages.insert("Bash/Shell",6);
    popularprograminglanguages.insert("C#",7);
    popularprograminglanguages.insert("C++",8);
    popularprograminglanguages.insert("PHP",9);

    std::cout<<" - 10 most popular programming, scripting, and markup languages on stackoverflow 2022: ";
    printlist(popularprograminglanguages);

    std::cout<<"\n\n - Removing HTML/CSS since they are not programing languages                         : ";
    popularprograminglanguages.remove(1);
    printlist(popularprograminglanguages);


    std::cout<<"\n\n__________________________________________________________\n\n\n";
    return 0;
}