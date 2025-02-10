//
#include <stdio.h>
main()
{
    int n = 0;  

    // If the number is zero, jump to
      // a label
    if (n == 0)
        goto a;

    // This will be skipped
    printf("You entered: %d\n", n);

a:
    printf("Exiting the program.\n");
}
