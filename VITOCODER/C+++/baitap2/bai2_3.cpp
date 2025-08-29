/*
Viết chương trình nhập số tự nhiên n , với n nằm trong đoạn từ 0 đến 100. 
Nếu nhập n không hợp lý thì yêu cầu nhập lại, ngược lại thì in số n ra màn hình và kết 
thúc chương trình.
*/
#include <stdio.h>
using namespace std;

int main ()
{
    int n, i;
    printf("nhap vao so n: "); scanf("%d", &n);
/*
    for(i = 1; i <= 100; i++) {
        if(n != i) {
            printf("ban vui long nhap lai n: ");
            scanf("%d", &n);
        } else { if( n == i) {
            printf("so n ban da nha: %d",n);
            break;
                 }
          } 
    } */

    while(n < 0 ||  n > 100) {
        printf("ban vui long nhap lai n: ");
        scanf("%d", &n);
    }
    printf("so n ban da nha: %d",n);
    return 0;
}