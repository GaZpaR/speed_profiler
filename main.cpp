#define MAIN
#include "stack.hpp"
#include "calc.hpp"

#include <sched.h>
#include <sys/resource.h>

cpu_set_t set;
int ret, i;

int main(int argc, char* arg[])
{
//     CPU_ZERO(&set);
//     
//     errno = 0;
//     setpriority(PRIO_PROCESS, 0, -20);
//     
//     if(errno == -1)
//         perror("sched_getaffinity");
//     
//     CPU_SET(0, &set);//Enable CPU0 for this processor
//     
//     CPU_SET(1, &set);//Enable CPU1 for this processor
//     CPU_SET(2, &set);//Enable CPU2 for this processor
//     CPU_SET(3, &set);//Enable CPU3 for this processor
//     
//     ret = sched_getaffinity(0, sizeof(cpu_set_t), &set);
//     if(ret == -1)
//         perror("sched_getaffinity");
    
    
    
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


