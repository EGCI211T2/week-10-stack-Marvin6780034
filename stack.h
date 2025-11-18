
#ifndef stack_h
#define stack_h
#include "node.h"
#include <iostream>

class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    Stack();
    ~Stack();
};


void Stack::push(int x){
  NodePtr new_node=new NODE(x);
    if (new_node) 
    {
        new_node->set_next(top);  
        top = new_node;  
        size++; 
    }
    
}

int Stack::pop(){
        NodePtr t=top;
        int value;
        value=t->get_value();
    // Left missing part for exercises
    
        --size;
        delete t;
        return value;
	
        //be careful of the empty stack!!!

    cout << "Empty Stack" << endl;
    return 0;
    }

Stack::Stack()
{
    top = NULL;
    size = 0;
    
}
Stack::~Stack()
{
    cout << "Clear the stack" << endl;
    int n = size;
    while (size>0)
    {
        pop();
    }    
}


#endif
