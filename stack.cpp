#define STACK
#include "stack.hpp"

Stack::Stack(){
    stackvfv = new Structvfv[DEFAULT_STACK_SIZE];
    itemq_vfv = 0;
}

Stack::Stack(int size){
    if(size < MINIMAL_STACK_SIZE){
        stackvfv = new Structvfv[DEFAULT_STACK_SIZE];
    } else{
        stackvfv = new Structvfv[size];
    }
    itemq_vfv = 0;
}

Stack::~Stack(){
    delete[] stackvfv;
}

void Stack::pushvfv(Structvfv *pushf){
    
    stackvfv[itemq_vfv] = *pushf;
    printf("Function pushed to the stack\r\n");
    itemq_vfv++;
}

Structvfv* Stack::popvfv(){
    if(itemq_vfv < 1){
        printf("Stack is empty\r\n");
    }else{
        itemq_vfv--;
        Structvfv *retstruct = &stackvfv[itemq_vfv];
        return retstruct;
    }
}

void Stack::start_profiling(){
    printf("Starting program profile\r\n");
    printf("There is %d functions in stack\r\n", itemq_vfv);
    uint64_t cycles = itemq_vfv;
    for(uint64_t i=0; i < cycles; i++){
        Structvfv *current = popvfv();
        current->fstart = clock();
        current->func();
        current->fstop = clock();
        printf("Function(%d) execute time is:%f seconds\r\n", i, ( current->fstop - current->fstart ) / (double) CLOCKS_PER_SEC);
    }
}

