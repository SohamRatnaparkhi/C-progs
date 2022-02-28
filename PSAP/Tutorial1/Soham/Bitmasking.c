#include <stdio.h>
#include <math.h>

int convert_1_to0(int a, int i);
int convert0to1(int a, int i);
int bin_to_dec(int binary) ;
int dec_to_bin(int decimal) ;

int main(){
    int n = 17;
    int i1 = 3;
    int ans1 = convert_1_to0(n, i1);
    int n2 = 14;
    int i2 = 2;
    printf("\nAfter converting '%d'th bit (from right) of %d = %d to 0 gives - %d = %d\n\n",i1, n, dec_to_bin(n),ans1, dec_to_bin(ans1));
    int ans2 = convert0to1(n2, i2);
    printf("\nAfter converting '%d'th bit (from right) of %d = %d to 1 gives - %d =  %d\n\n",i2, n2, dec_to_bin(n2),ans2, dec_to_bin(ans2));
    
}
int convert_1_to0(int a, int i){
    int mask = 1 << (i - 1); // 10  
    //printf("i = %d, mask = %d\n", i, mask);
    int oppmask = ~mask; // 01
    //printf(" complementary mask = %d\n", oppmask);
    int ans = a & oppmask; // 1110 & 01 = 1100 =12
    // The result of AND is 0 if any of the two bits is 0 and same bit if the second bit is 1. 
    return ans;
   // printf("%d",ans);
}

int convert0to1(int a, int i){
    // 12 = 1100, i = 2
    //int i = 2;
    int mask = 1 << (i - 1);
    //printf("i = %d, mask = %d\n", i, mask);
    int ans = a | mask; // The result of OR is 1 if any of the two bits is 1. 
    return ans;
}

int bin_to_dec(int binary) {
    int i = 0;
    int ans = 0;
    while (binary > 0) {
        int mask = 1;
        int bit = (binary & mask);
        ans += bit * pow(2, i);
        printf("bit = %d, mask = %d\n", bit, mask);
        binary /= 10;
        i++;
    }
    return ans;
}

int dec_to_bin(int decimal) {
    int i = 0;
    int rev = 0;
    while (decimal > 0) {
        int bit = decimal % 2;
        rev += pow(10, i++) * bit;
        decimal /= 2;
        
    }
    return rev;
}