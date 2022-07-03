#include <string>
#include <utility>
#include <iostream>

class Person
{
    private:
        std::string name;
    public:
        // constructor for passed initial name
        explicit Person(std::string const& n) : name(n) {
            std::cout << "COPY-CONSTR" << "\n";
        }
        explicit Person(std::string&& n) : name(std::move(n)) {
            std::cout << "MOVE-CONSTR" << "\n";
        }
        
        // copy constructor
        Person (Person const& p) : name(p.name){
            std::cout << "COPY-CONSTR Person" << "\n";
        }
        Person (Person&& p) : name(std::move(p.name)){
            std::cout << "MOVE-CONSTR Person" << "\n";
        }
};