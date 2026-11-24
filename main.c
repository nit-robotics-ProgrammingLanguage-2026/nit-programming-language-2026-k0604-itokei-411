#include <stdio.h>

int main(void)
{
    int input_number;
    long sum = 0;

    scanf("%d", &input_number);

    
    if (input_number < 0) {
        printf("NG");
        return 0;
    }

    
    for (int number = 1; number <= input_number; number++) {

        
        if (number % 3 != 0 && number % 5 != 0) {
            sum += number;
        }
    }

    printf("%ld", sum);
    return 0;
}
