void MakeNull_List(List *L);
void Insert_List(ElementType X, Position P, List *L);
void MakeNull_List(List *L)
{
	L->Last=0;
}
void Insert_List(ElementType X, Position P, List *L)
{ 	
	if (L->Last==MaxLength) 
		printf("Danh sach day"); 
	else if (P<0 || P>L->Last) 
		printf("Vi tri khong hop le"); 
	else
	{ 	Position Q;
		for(Q=(L->Last-1)+1;Q>P-1;Q--)	{
			L->Elements[Q]=L->Elements[Q-1]; 
		}
		L->Elements[P]=X; //�ua x v�o v? tr� p 
		L->Last++; //Tang d? d�i danh s�ch l�n 1 
	} 
}
