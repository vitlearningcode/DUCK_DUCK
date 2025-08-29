
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char* InhHoaKiTuDau(char* s)
{
    char* t = strdup(s);
    strlwr(t);
    int n = strlen(t);
    if (isalpha(t[0]))   // 1

        t[0] -= 32;
    
    for (int i = 1; i < n - 1; i++)
        if (t[i] == ' ' && isalpha(t[i+1]))
            t[i+1] -= 32;
    return t;
}

int main()
{
    char str[64];
    printf("nhap vao chuoi: ");
    gets(str);

    char* n = InhHoaKiTuDau(str);
    puts(n);
    return 0;
}