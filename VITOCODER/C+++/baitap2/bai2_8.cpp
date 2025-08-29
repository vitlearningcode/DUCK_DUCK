#include <stdio.h>
int main ()
{
    int x, y;

    for (x = -10; x <= 10; x++)
    {
        for (y = -5; y <= 5; y++)
        {
            if (2*x + 3*y == 5)
            {
                printf("\n Gia tri (%d, %d)", x, y);
            }
        }
        
    }
    return 0;
}