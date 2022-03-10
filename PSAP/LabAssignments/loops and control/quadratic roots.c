#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter a, b, c\n");
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    float discriminant = pow(b, 2) - (4 * a * c);
    float x =  pow(discriminant, (0.5));
    float root1 = (-b + x) / 2 * a;
    float root2 = (-b - x) / 2 * a;
    printf("root1 = %f, root2 = %f\n", root1, root2);
}