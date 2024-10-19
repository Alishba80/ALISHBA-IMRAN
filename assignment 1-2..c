#include <stdio.h>

int main()  {
    int num, square;
    
    printf("Enter any integer: ");
    scanf("%d", &num);
    
    square = num * num;
    printf("The square of number %d is: %d\n", num, square);
    getch();
    
}    


