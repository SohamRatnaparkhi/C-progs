#include <stdio.h>
int main(){
    int a[10];
    int s = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    int z = 0;
    printf("Enter element to be searched - ");
    scanf("%d", &z);
    for(int i = 0; i < 10; i++){
        if(a[i] == z){
            printf("Element found at index = %d", i);
            return 0;
        }
    }
    printf("Element not found.\n");
    return 0;
}
