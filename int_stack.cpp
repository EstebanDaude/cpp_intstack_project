#include <iostream>
#include "int_stack.hh"

class IntStack;


void IntStack::push(int n){
    if (!is_full()){
        stack[head] = n;
        head+=1;
    }
    else {
        throw rangeerror();
    }
}

int IntStack::pop(){
    if(!is_empty()){
        head-=1;
        return stack[head];
    }
    else{
        throw rangeerror();
    }
}

inline bool IntStack::is_empty(){
    return head == 0;
}

inline bool IntStack::is_full(){
    return head == size;
}


void IntStack::print_stack(){
    std::cout << "[";
    int i = 0;
    for (;i<head-1; i++){
        std::cout << stack[i] << ", ";
    }

    if (i < head){
        std::cout << stack[i];
    }
    std::cout << "]" << std::endl;
}


IntStack::IntStack(){
    head =0;
    size =0;
    stack = new int[0];
}

IntStack::IntStack (int s){
    head =0;
    size = s;
    stack = new int [size];
}

IntStack::~IntStack(){
    delete [] stack;
}

IntStack::IntStack (const IntStack& intStack){
    size = intStack.size;
    stack = new int [size];
    head = intStack.head;
    for (int i = 0; i <= head; i++){
        stack[i] = intStack.stack[i];
    }
}