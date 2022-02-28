#include <stdio.h>
int main(){
    int n,i = 0;
    int sum = 0;
    float avg;
    printf("n = ");
    scanf("%d",&n);
    printf("Enter %d numbers.\n", n);

    /*
    //Using for loop
    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        sum += x;
    }
    */
    /*
    // Using while loop
    while(++i <= n){
        int x;
        scanf("%d", &x);
        sum += x;
    }
    */
   /*
    do{
        //Program using do while loop 
        int x;
        scanf("%d", &x);
        sum += x;
    }
    while(++i < n);
    */
    avg = (float)sum / n;
    printf("Average = %f\n", avg);
    
    return 0;
}