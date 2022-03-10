#include <stdio.h>

int main() {
    printf("Enter no. of elements in array - ");
    int l;
    scanf("%d",&l);
    int arr[l];
    printf("Enter elements of array - ");
    //Input
    for(int i = 0; i < l; i++) {
        scanf("%d",&arr[i]);
    }
    //Sorting
    
    for(int i = 0; i < l - 1; i++) {
        for(int j = 0, *p = arr; j < (l - i -1); j++, *p++) {
            if(*p > *(p + 1)){
                int t = *p;
                *p = *(p + 1);
                *(p + 1) = t;
            }
        }
    }
    printf("\nSorted array\n");
    int *ptr = arr;
    for(int i = 0; i < l; i++){
        printf("%d\t", *ptr++);
    }
}