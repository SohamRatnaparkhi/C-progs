#include<stdio.h>

int main() {
    int arr[11] = {1,2,3,6,5,4,5,4,6,2,1};
    int unique = 0;
    for(int i=0; i<11; i++){
        unique = unique ^ arr[i];
        //printf("%d", unique);   
    }
    printf("Unique element = %d\n", unique);
}