#include <stdio.h>

int main() {
    float Fahrenheit, Celsius;
    
    printf("Enter your temperature in Fahrenheit: ");
    scanf("%f", &Fahrenheit);
    
    Celsius = (Fahrenheit - 32)* 5/9;
    printf("Temperature in celsius: %f", Celsius);
    getch();
    return 0;
}
