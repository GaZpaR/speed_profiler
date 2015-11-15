#include "calc.hpp"
#include "math.h"

void bigfl_calc(void){
    float *val = (float*)malloc(1024*1024*1024*sizeof(float));
    
    for(uint32_t i=0; i < 1024*1024*1024; i++){
        val[i] = (i*i)/sqrt(i);
    }
    free(val);
    printf("\r\n"); 
}

void midfl_calc(void){
    float *val = (float*)malloc(1024*1024*256*sizeof(float));
    
    for(uint32_t i=0; i < 1024*1024*256; i++){
        val[i] = exp(i)/(i*i);
    }
    free(val);
    printf("\r\n"); 
}

void smalfl_calc(void){
    float *val = (float*)malloc(1024*512*sizeof(float));
    
    for(uint32_t i=0; i < 1024*512; i++){
        val[i] = i/760;
    }
    free(val);
    printf("\r\n"); 
}
