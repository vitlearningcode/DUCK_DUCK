#include <stdio.h>
#include <string.h>

//ham dem chu cai
int DemChuCai(char ch, char *s)
{
    int  d = 0;
    int n = strlen(s);
    //chay tu 1 tới n-1 (bỏ kí tự \0)
    for (int i = 0; i < n-1; i++)
        if (s[i] == ch)
            d++;
    return d;
}

//hàm đếm từ trong chuỗi 
int DemTu(char *s)
{
    int d = 0;

    //kiểm tra giá trị đầu tiên có phải khoảng trắng không
    if(s[0] != ' ')
        d++;
    
    int n = strlen(s);

    for (int i = 0; i < n-1; i++)
    //điều kiện để nhận biết một từ trong chuỗi
        if(s[i] == ' ' && s[i+1] != ' ' )
            d++;
    return d;
}

//hàm liệt kê từ có trong chuỗi trên từng dòng
void LietKeTu(char *s)
{
    char *t = strdup(s); // tạo bản sao của chuỗi
    puts("cac tu trong chuoi la: ");
    char *p = strtok(t, " "); // tách chuỗi và được ngăn cách bởi dấu " "
    while(p != NULL)
    {
        printf("\"%s\"\n", p); //\" in trích dẫn kép
        p = strtok(NULL, " ");
    }
}

//Hàm xoá Khoảng trắng
void XoaKyTu(char *s, int vt)
{
	int n = strlen(s);
	
	if (vt >= 0 && vt < n)
	{
		for (int i = vt; i < n; i++)
		    s[i] = s[i+1];
		    
	} 
}

//Hàm xác định khoảng trắng
char* ChuanHoa(char *s)
{
    //tạo bản sao cho chuỗi
	char *t = strdup(s); 

	while (t[0] == ' ')
	    XoaKyTu(t ,0);
	
    int n = strlen(t);
	while (t[n - 1] == ' ')
	    XoaKyTu(t, n-1);
        
	for (int i = 1; i<(int)n - 2; )
	    if (t[i] == ' ' && t[i+1] == ' ')
		    XoaKyTu(t, i);
		else 
		    i++; 
	return t; 
} 

int main()
{
    char str[64];

//1.Nhập vào một chuỗi
    printf("nhap chuoi: ");
    gets(str);

//2.Đếm và trả về số lượng chữ cái ch (với ch được nhập từ bàn phím) có trong chuỗi.
    printf("nhap ki tu can dem: ");
    char ch = getchar();
    int sochucai = DemChuCai(ch, str);
    printf("so chu cai %c co trong chuoi la %d\n", ch, sochucai);

//3.Đếm số lượng từ có trong chuỗi.
    int sotu = DemTu(str);
    printf("so tu cua chuoi la %d \n", sotu);

//4.Liệt kê những từ có trong chuỗi, mỗi từ trên một dòng.
    LietKeTu(str);

//5.Chuẩn hóa chuỗi (xóa khoảng trắng thừa).
    char* c = ChuanHoa(str);
    printf("chuoi sau khi chuan hoa: %s\n", c );
    return 0;
}
