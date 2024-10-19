#include <stdio.h>

int main() {
    float celsius, Fahrenheit;
    
    printf("Enter your temperature in Celsius: ");
    scanf("%f", &celsius);
    
    Fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", Fahrenheit);
    
    return 0;
}
