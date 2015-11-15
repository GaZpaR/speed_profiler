#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

#include <iostream>
#include <fstream>

#include <functional>

#include <string.h>

#include <sys/time.h>

#ifdef STACK
    #define MINIMAL_STACK_SIZE 10
    #define DEFAULT_STACK_SIZE 200
#endif 
