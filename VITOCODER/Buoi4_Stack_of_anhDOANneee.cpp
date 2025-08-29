typedef int ElementType;
typedef struct Node *PtrToNode;
typedef PtrToNode Stack;
typedef PtrToNode Position;

struct Node
{
	ElementType Element;
	Position    Next;
};

/* Prototypes */

void MakeEmpty( Stack& S );
int IsEmpty( Stack S );
void Push( ElementType X, Stack S );
void Pop(Stack S);
ElementType Top(Stack S);

/*Tao 1 stack rong*/
void  MakeEmpty( Stack &S )
{
	S = new Node;
	S->Next = NULL;
}

/* Kiem tra stack rong? */
int IsEmpty( Stack S )
{
	return S->Next == NULL;
}

/* Chen phan tu X vao stack  */
void  Push( ElementType X, Stack S )
{
	Position TmpCell, P;
	P = S;

	/*TmpCell =(List)malloc( sizeof( struct Node ) );*/
	TmpCell = new Node;
	if( TmpCell == NULL )
		cout<<"Out of space!!!" ;

	TmpCell->Element = X;

	TmpCell->Next = P->Next;

	P->Next = TmpCell;
}

/* Lay phan tu dau ra khoi stack */
void	Pop(Stack S )
{
	Position P, TmpCell;

	P = S;
	if( P->Next!=NULL )
	{
		TmpCell = P->Next;
		P->Next = TmpCell->Next;
		delete TmpCell;
	}
}

/* Tim phan tu dau tien */
ElementType    Top( Stack S )
{
	return S->Next->Element;
}