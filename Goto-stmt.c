#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    check_even_odd:
        if (num % 2 == 0) {
            printf("%d is even.\n", num);
            goto end;
        } else {
            printf("%d is odd.\n", num);
            goto end;
        }

    end:
        return 0;
}
