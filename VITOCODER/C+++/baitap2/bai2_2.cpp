#include <stdio.h>
using namespace std;

int main ()
{
    int a, b, c, i, k;
  //  int j[] = {};
    /*
    int d = 480;
     a = d/100;
     b = (d%100)/10;
     c = d % 10;
    if((a*b*c) % 9 == 0){
        printf("t");
    }
 else{
    printf("f");*/

   for(i = 100; i <= 999; i++) {
     a = i / 100;
     b = (i % 100) / 10;
     c = i % 10;

        if(((a*b*c) % 9) == 0)
        {
        //printf("\t j[%d]",i );
        printf("\n %d",i );
        }
    }   
    return 0;
}