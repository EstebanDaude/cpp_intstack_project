#include <iostream>

template <typename T>
class Stack{
    T* stack;
    int head;
    int size;
public :
    void push (T x){
        if (!is_full()){
            stack[head] = x;
            head+=1;
        }
        else{
            throw rangeerror();
        }
    }
    T pop (){
        if(!is_empty()){
            head-=1;
            return stack[head];
        }
        else{
            throw rangeerror();
        }
    }
    bool is_empty(){
        return head == 0;
    }
    bool is_full(){
        return head == size;
    }
    void print_stack(){
        std::cout << "[";
        int i = 0;
        for(;i<head-1; i++){
            std::cout << stack[i] << ", ";
        }
        if (i<head){
            std::cout << stack[i];
        }
        std::cout << "]" << std::endl;
    }
    Stack(){
        head = 0;
        size = 0;
        stack = new T [0];
    }
    Stack (int s){
        head = 0;
        size = s;
        stack = new T [s];
    }
    ~Stack (){
        delete [] stack;
    }
    class rangeerror {};
};