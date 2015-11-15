#include "proj_config.hpp"

typedef struct structvfv{
    void (*func)(void);
    clock_t fstart, fstop;
}Structvfv;
 
class Stack{
public:
//Constructor/destructor
    Stack();
    Stack(int size);
    ~Stack();
//Public functions
    void pushf(int (*function)(int,int), ...){
        
    }
    void pushf(void (*function)(void)){
        Structvfv current;
        current.func = function;
        pushvfv(&current);
    }
    
    void start_profiling();
    
private:
//Private data
    uint64_t itemq_vfv;
    Structvfv *stackvfv;
//Private functions
    void pushvfv(Structvfv *pushf);
    Structvfv* popvfv();
};
