class IntStack{
    int* stack;
    int head;
    int size;
public :
    void push (int);
    int pop ();
    bool is_empty();
    bool is_full();
    void print_stack();
    IntStack();
    IntStack (int);
    ~IntStack ();
    IntStack (const IntStack&);
    class rangeerror {};
};