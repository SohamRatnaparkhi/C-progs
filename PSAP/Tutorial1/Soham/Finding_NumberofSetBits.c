#include <stdio.h>
#include <math.h>

int bin_to_dec(int binary) ;
long long int dec_to_bin(int decimal) ;

int main(){
    int n; 
    printf("\n\nEnter an integer: ");  
    scanf("%d", &n); // n <= 999
    int x = n;
    printf("Binary form = %d\n\n", dec_to_bin(n));
    int cnt = 0;
    int i = 1;
    while(n > 0){
        printf("ITERATION - %d\n", i++);
        printf("n  -----> %d =  %d\n",n, dec_to_bin(n));
        printf("n - 1  -> %d = %d \n",n - 1 ,dec_to_bin(n - 1));
        n = n & (n - 1);
        printf("Result of n & n-1 -----> %d = %d\n\n",n, dec_to_bin(n));
        cnt++;
    }
    printf("Number of 1's in Binary form of %d = %d\n", x, cnt);
}

int bin_to_dec(int binary) {
    int i = 0;
    int ans = 0;
    while (binary > 0) {
        int mask = 1;
        int bit = (binary & mask);
        ans += bit * pow(2, i);
        //printf("bit = %d, mask = %d\n", bit, mask);
        binary /= 10;
        i++;
    }
    return ans;
}

long long int dec_to_bin(int decimal) {
    // int length = (int)log2(decimal) + 1;
    // int ans[length];
    int i = 0;
    long long int rev = 0;
    while (decimal > 0) {
        int bit = decimal % 2;
        rev += (int)pow(10, i++) * bit;
        decimal /= 2;
        
    }
    return rev;
}