#include <stdio.h>
#include <stdarg.h>

int  sum (int count,...) {
    int nsum = 0;
    va_list intArgPointer;

    va_start(intArgPointer,count);
    for(int i=0; i<count; i++){
        int temp = va_arg(intArgPointer,int);
        nsum += temp;
    }
    va_end(intArgPointer);

    return nsum;
}

int min(int count,...) {
    int nmin;
    va_list intArgPointer;

    va_start(intArgPointer,count);

    nmin = va_arg(intArgPointer,int);
    for(int i=1; i<count; i++){
        int temp = va_arg(intArgPointer,int);
        nmin = (temp<nmin)?temp:nmin;
    }
    va_end(intArgPointer);

    return nmin;
}

int max(int count,...) {
    int nmax;
    va_list intArgPointer;

    va_start(intArgPointer,count);

    nmax = va_arg(intArgPointer,int);
    for(int i=1; i<count; i++){
        int temp = va_arg(intArgPointer,int);
        nmax = (temp>nmax)?temp:nmax;
    }
    va_end(intArgPointer);

    return nmax;
}
