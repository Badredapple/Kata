#include <string>
#include <utility>
#include <iostream>
#include <type_traits>

template<typename T>
using EnableIfString = std::enable_if_t<std::is_convertible_v<T, std::string>>;

class Person
{
    private:
        std::string name;
    public:
        // generic constructor for passed initial name
        template<typename STR, typename = EnableIfString<STR>>
        explicit Person(STR&& n) : name(std::forward<STR>(n)){
            std::cout << "TMPL-CONSTR" <<"\n";
        }

        // copy constructor
        Person (Person const& p) : name(p.name){
            std::cout << "COPY-CONSTR Person" << "\n";
        }
        Person (Person&& p) : name(std::move(p.name)){
            std::cout << "MOVE-CONSTR Person" << "\n";
        }
};