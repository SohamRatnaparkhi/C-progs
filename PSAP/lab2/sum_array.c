#include <stdio.h>
int main(){
    int a[10];
    int s = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
        s += a[i];
    }
    printf("%d\n", s);
}
