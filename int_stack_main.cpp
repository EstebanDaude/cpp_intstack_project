#include <iostream>
#include "int_stack.hh"
using namespace std ;


int main (int argc, char * argv[]) {
    IntStack my_stack(10);
    my_stack.push(10);
    my_stack.push(20);
    my_stack.push(150);
    my_stack.print_stack();
    cout<<my_stack.pop()<<endl;
    my_stack.print_stack();
    cout<<my_stack.is_empty()<<" "<<my_stack.is_full()<<endl;
}