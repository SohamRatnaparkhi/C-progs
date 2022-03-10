#include <stdio.h>
int main(){
    int n = 10;
    int a[n];
    int even[n], odd[n];
    int e = 0,o = 0;
    int s = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0){
            even[e++] = a[i];
        } 
        else {
            odd[o++] = a[i];
        }
    }
    printf("Even:- \n");
    for(int i = 0; i < e; i++){
        printf("%d\n", even[i]);
    }
    printf("Odd:- \n");
    for(int i = 0; i < o; i++){
        printf("%d\n", odd[i]);
    }
    
    return 0;
}
