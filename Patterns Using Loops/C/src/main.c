#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.

    //Pattern is num * 2^2
    int count = (n*2) - 1;
    for(int i=n; i>0; i--){
        int min = i; //Minimum of Current Row
        int stepsdown = n - min;
        int stepsup = stepsdown;
        int printval = n;

        int rep = 0;
        for(int ii=0; ii<count; ii++){
            // First Half of Row
            if(ii<=(count/2)){
                printf("%d ",printval);
                if(stepsdown){
                    printval--;
                    stepsdown--;
                }
                rep = printval-1;
            }
            // Second Half of Row
            else{
                if(rep){
                    printf("%d ",printval);
                    rep--;
                    continue;
                }
                printf("%d ",++printval);
            }
        }
        printf("\n");
    }

    for(int j=2; j<=n; j++){
        int min = j;
        int stepsdown = n - min;
        int stepsup = stepsdown;
        int printval = n;

        int rep = 0;
        for(int jj=0; jj<count; jj++){
            // First Half of Row
            if(jj<=(count/2)){
                printf("%d ",printval);
                if(stepsdown){
                    printval--;
                    stepsdown--;
                }
                rep = printval - 1;
            }
            // Second Half of Row
            else{
                if(rep){
                    printf("%d ",printval);
                    rep--;
                    continue;
                }
                printf("%d ",++printval);
            }
        }
        printf("\n");
    }

    return 0;
}
