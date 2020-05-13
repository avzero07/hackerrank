#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    int *arr2;
    arr2 = malloc(num * sizeof(int));
    for(int j=(num-1); j>=0; j--){
        *(arr2+j) = *(arr+(num-j-1));
    }

    int *temp = arr2;
    arr2 = arr;
    arr = temp;

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));

    printf("\n");

    free(arr);
    free(arr2);
    return 0;
}
