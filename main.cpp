#define MAIN
#include "stack.hpp"
#include "calc.hpp"

int main(int argc, char* arg[])
{
    Stack st(20);
    st.pushf(smalfl_calc);
    st.pushf(midfl_calc);
    st.pushf(bigfl_calc);
    
    printf("Type enter...\r\n");
    getchar();
    
    printf("Starting test\r\n");
    
    st.start_profiling();

    printf("Type enter..\r\n");
    getchar();
    printf("Bye bye\r\n");
    return 0;
}


