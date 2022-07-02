#include <deque>
#include <cassert>

template<typename T>
class Stack{
    private:
        std::deque<T> elems;
    
    public:
        void push(T const& elem);
        void pop();
        T const& top() const;
        bool empty() const {
            return elems.empty();
        }

        template<typename T2>
        Stack& operator=(Stack<T2> const&);
};

template<typename T>
void Stack<T>::push(T const& elem)
{
    elems.push_back(elem);
}

template<typename T>
void Stack<T>::pop()
{
    assert(! elems.empty());
    elems.pop_back();       // remove last element
}

template<typename T>
T const& Stack<T>::top() const
{
    assert(! elems.empty());
    return elems.back();
}

template<typename T>
    template<typename T2>
Stack<T>& Stack<T>::operator= (Stack<T2> const& op2)
{
    Stack<T2> tmp(op2);
    while(! tmp.empty()){
        elems.push_front(tmp.top());
        tmp.pop();
    }

    return *this;
}