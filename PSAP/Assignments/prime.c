#include <stdio.h>
// Check whether the number entered is Prime
#include <stdio.h>
// Check whether the number entered is Prime
int main() {
    int check = 0;
    int x;
    printf("Enter a number - ");
    scanf("%d", &x);
    if (x == 1) {
        printf("%d is NOT a Prime number", x);
        return 0;
    }
    int i = 2;
    while (i * i <= x){
        if (x % i == 0){
            check = 1; 
            break;
        }
        i ++;
    }
    if (check == 0){
        printf("%d is a Prime number", x);
    }
    else {
        printf("%d is NOT a Prime number", x);
    }
}
