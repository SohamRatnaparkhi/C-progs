#include <stdio.h>
#include <math.h>
int bin_to_dec(int binary) ;
int dec_to_bin(int decimal) ;
int main()
{
    // a = 5(00000101), b = 9(00001001)
    int a = 5, b = 9;
  
    // The result is 00000001
    printf("\n");
    printf("a = %d = %d, b = %d = %d\n", a, dec_to_bin(a), b, dec_to_bin(b));
    printf("a&b = %d = %d\n", (a & b), dec_to_bin(a & b));
    printf("\n");
  
    // The result is 00001101
    printf("a = %d = %d, b = %d = %d\n", a, dec_to_bin(a), b, dec_to_bin(b));
    printf("a|b = %d = %d\n",(a | b), dec_to_bin(a | b));
    printf("\n");
  
    // The result is 00001100
    printf("a = %d = %d, b = %d = %d\n", a, dec_to_bin(a), b, dec_to_bin(b));
    printf("a^b = %d = %d\n",(a ^ b), dec_to_bin(a ^ b));
    printf("\n");
  
    // The result is 11111010
    printf("a = %d = %d, b = %d = %d\n", a, dec_to_bin(a), b, dec_to_bin(b));
    printf("~a = %d = %d\n",2, 10);
    printf("\n");
  
    // The result is 00010010
    printf("a = %d = %d, b = %d = %d\n", a, dec_to_bin(a), b, dec_to_bin(b));
    printf("b<<1 = %d = %d\n", (b << 1), dec_to_bin(b << 1));
    printf("\n");
  
    // The result is 00000100
    printf("a = %d = %d, b = %d = %d\n", a, dec_to_bin(a), b, dec_to_bin(b));
    printf("b>>1 = %d = %d\n", (b >> 1), dec_to_bin(b >> 1));
    printf("\n");
  
    return 0;
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

int dec_to_bin(int decimal) {
    // int length = (int)log2(decimal) + 1;
    // int ans[length];
    int i = 0;
    int rev = 0;
    while (decimal > 0) {
        int bit = decimal % 2;
        rev += pow(10, i++) * bit;
        decimal /= 2;
        
    }
    return rev;
}