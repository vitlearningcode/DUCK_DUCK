#include<iostream>
#include<string.h>
using namespace std;



typedef ... ElementType;

struct Node {
	ElementType Element;
	Node *Next;
};
typedef Node *PtrToNode;
typedef PtrToNode Position;
typedef PtrToNode List;

void Makenull_List(List &L);
int IsEmpty_List(List L);
int IsLast(Position P);
Position Locate(ElementType X, List L);
void Delete_List(ElementType X, List L);
Position FindPrevious(ElementType X, List L);
void Insert_List(ElementType X, Position P, List L);
void Delete_All_List(List );
Position Header(List L);
Position First(List L);
Position Advance(Position P);
ElementType Retrieve(Position P);
void Read_List(List L);
void SapXepTheoLuong(List L);
void TinhLuong(List L);
void InBangLuong(List L);
void LietKeTheoNgayCong(List L);
Position TimKiemHoTen(const char *hoten, List L);
/* MAIN PROGRAM*/
int main() {
	
	return 1;

}

// tao danh sach rong

void Makenull_List(List &L) {
	L= new Node;
	if(L==NULL) {
		cout<<"Khong du bo nho";
		return;
	}
	L->Next = NULL;
}
int IsEmpty_List(List L) {
	return L->Next==NULL;
}
int IsLast(List P) {
	return P->Next==NULL;
}
Position Locate(ElementType X, List L) {
	Position P;
	P=L->Next;
	while(P!=NULL&&strcmp(P->Element.manv,X.manv)!=0)
		P=P->Next;
	return P;
}
void Insert_List(ElementType X, Position P, List L) {
	Position TmpCell;
	TmpCell=new Node;
	if(TmpCell==NULL)
		cout<<"Out of space!!!";
	TmpCell->Element=X;
	TmpCell->Next=P->Next;
	P->Next=TmpCell;
}
void Delete_List(ElementType X, List L) {
	Position P, TmpCell;

	P=FindPrevious(X,L);
	if(!IsLast(P)) {
		TmpCell=P->Next;
		P->Next=TmpCell->Next;
		delete(TmpCell);
	}
}
Position FindPrevious(ElementType X, List L) {
	Position P;
	P=L;
	while(P->Next != NULL && strcmp(P->Next->Element.manv,X.manv)!=0)
		P=P->Next;
	return P;
}
Position Header(List L) {
	return L;
}
Position First(List L) {
	return L->Next;
}
Position Advance(Position P) {
	return P->Next;
}
ElementType Retrieve(Position P) {
	return P->Element;
}
