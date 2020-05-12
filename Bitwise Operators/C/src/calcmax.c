#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int max[3] = {0,0,0};
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            int temp[3] = {i&j,i|j,i^j};

            if(temp[0]>max[0] && temp[0]<k){
                max[0] = temp[0];
            }
            if(temp[1]>max[1] && temp[1]<k){
                max[1] = temp[1];
            }
            if(temp[2]>max[2] && temp[2]<k){
                max[2] = temp[2];
            }
        }
    }

    for(int ii=0; ii<=2; ii++)
        printf("%d\n",max[ii]);
}
