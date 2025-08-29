#include <stdio.h>
#include <string.h>
#include <ctype.h>
void Lb(char *s, int vt)
{
    int n = strlen(s);
    for (int i = vt; i < n; i++)
        s[i] = s[i+1];
}
char* Xoa(char *s)
{   
    char *t = strdup(s);
    int n = strlen(t);
    for (int i = 0; i < n;)
    {
        if(isdigit(t[i]))
            Lb(t, i);
        else
            i++;
    }
    return t;
}
int main ()
{
    char str[64];
    printf("nhap chuoi di ne: "); 
    gets(str);

    char* t = Xoa(str);
    printf("sau khi xoa so: %s ", t);
    
    return 0;
}