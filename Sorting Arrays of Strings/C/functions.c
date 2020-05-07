/*
-------------------------------------
Functions for String Comparisons
-------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))

int lexicographic_sort(const char* a, const char* b) {
    size_t i;
    for(i=0;i<MIN(strlen(a),strlen(b));i++){
        if(a[i]>b[i]) return -1;
    }
    return 0;
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    size_t i;
    for(i=0;i<MIN(strlen(a),strlen(b));i++){
        if(a[i]<b[i]) return -1;
    }
    return 0;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int* score = malloc(sizeof(int)*26);
    int* score2 = malloc(sizeof(int)*26);
    size_t i, val1=0, val2=0;

    for(i=0;i<strlen(a);i++) score[a[i]-65]++;
    for(i=0;i<strlen(b);i++) score[a[i]-65]++;

    for(i=0;i<26;i++){
        if(score[i]==1) val1++;
        if(score2[i]==1) val2++;
    }

    free(score);
    free(score2);

    if(val1>val2) return -1;
    else return 0;
}

int sort_by_length(const char* a, const char* b) {
    if(strlen(a)>strlen(b)) return -1;
    else return 0;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    size_t i;
    int compRes;
    char* temp;

    for(i=1;i<len;i++){
        compRes = cmp_func(arr[i-1],arr[i]);

        if(compRes==-1){
            temp = arr[i-1];
            arr[i-1] = arr[i];
            arr[i] = temp;
        }
    }
}
