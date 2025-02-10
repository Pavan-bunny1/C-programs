//continue stmt
#include <stdio.h>
main()
{
    for (int i=1;i<=5;i++)
    {
        // Skip 3 numbers
        if (i == 3)
            continue;
        printf("%d ",i);
    }
}
