#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *s;
    s = malloc(sizeof(char)*1024);
    scanf("%[^\n]",s);
    s = realloc(s,strlen(s)+1);

    int score[10] = {[0]=0,};
    for(int i=0; i<strlen(s); i++){
        if(*(s+i)>=48 && *(s+i)<=57){
            (*(score+(*(s+i)-48)))++;
        }
    }

    for(int j=0; j<=9; j++) printf("%d ",score[j]);
    printf("\n");

    free(s);
    return 0;
}
