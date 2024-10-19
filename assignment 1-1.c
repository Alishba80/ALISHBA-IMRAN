#include <stdio.h>

int main() {
    int a, b, sum;
    
    printf("Enter any two integers: ");
    scanf("%d %d", &a, &b);
    
    sum = a + b;
    printf("The sum of %d and %d is: %d\n", a, b, sum);
    getch();
    return 0;
}
