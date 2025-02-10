//odd or even
#include <stdio.h>
main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    goto check_even_odd;
    
    check_even_odd:
        if (num % 2 == 0)
        {
            printf("%d is even.\n", num);
        }
        else
        {
            printf("%d is odd.\n", num);
        }
}



//odd or even
#include <stdio.h>
main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check_even_odd:
    goto even;
    
    even:
        if(num % 2 == 0)
        {
            printf("%d is even.\n", num);
        }
        else
        {
            printf("%d is odd.\n", num);
        }
}
