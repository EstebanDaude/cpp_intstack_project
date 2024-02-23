#include "tmp_stack.h"
#include <iostream>

using namespace std;

int main (int argc, char * argv[]){
    cout << "Select type :"<<endl;
    cout << "1 - int" << endl;
    cout << "2 - float" << endl;
    cout << "3 - string" << endl;
    int i;
    cin >> i;
    cout << "Choose size of the stack :";
    int size;
    cin >> size;
    if (i == 1){
        Stack<int> stack(size);
        while (true){
            string  s;
            cin >> s;
            if (s == "pop"){
                cout << stack.pop() << endl;
                stack.print_stack();
            }
            else{
                stack.push(stoi(s));
                stack.print_stack();
            }
        }
    }
    else if (i == 2){
        Stack<float> stack(size);
        while (true){
            string s;
            cin >> s;
            if (s == "pop"){
                cout << stack.pop() << endl;
                stack.print_stack();
            }
            else {
                stack.push(stof(s));
                stack.print_stack();
            }
            
        }
    }
    else if (i == 3){
        Stack<string> stack(size);
        while (true){
            string s;
            cin >> s;
            stack.push(s);
            stack.print_stack();
        }
    }

}