Tree 	MakeEmpty(Tree T);
Tree 	Insert(ElementType X, Tree& T);
Node	Search(ElementType X , Tree T);
Tree 	Delete ( ElementType X, Tree& T);
Node 	FindMin(Tree T);
Node 	FindMax(Tree T);
ElementType Retrieve(Node P);
int IsEmpty_Tree(Tree  T);
Node LeftChild(Tree  p);
Node RightChild(Tree p);

//Tao cay rong
Tree MakeEmpty(Tree T)
{
	if(T!=NULL)
	{
		MakeEmpty(T->Left);
		MakeEmpty(T->Right);
		delete T;
	}
	return NULL;
}

//Kiem tra cay rong?
int IsEmpty_Tree(Tree  T)
	{
		  return (T==NULL);
	}

//Xac dinh nut con trai
Node LeftChild(Tree  p)
	{ 	if (p!=NULL) 
			return p->Left; 
		else 
			return NULL; 
	} 

//Xac dinh nut con pahi
Node RightChild(Tree  p)
	{ 	if (p!=NULL)
			return p->Right;
		else 
			return NULL; 
	} 

//Kiem tra cp phai la nut la ?
int IsLeaf(Tree p)
	{ 	if(p!=NULL)
			return ((LeftChild(p)==NULL) &&(RightChild(p)==NULL));
		else 
			return 0; 
	} 

//Chen 1 phan tu vao cay
Tree Insert(ElementType X,Tree& T)
{
	if(T==NULL)
	{
		//Creat and return a one-node tree
		T= new TreeNode;
		if(T==NULL)
			printf("Out of space!");//Loi
		else
		{
			T->Element = X;
			T->Left = T->Right = NULL;
		}
	}
	else
		if(X < T->Element)
			T->Left = Insert(X, T->Left);
		else
			if(X > T->Element)
				T->Right = Insert(X,T->Right);
				//else x is in this tree already; we'll do nothing
	return T;
}
Node Search(ElementType X, Tree T)
{
	if(T == NULL)
		return NULL;
	if(X < T->Element)
		return Search ( X, T->Left);
	else
		if(X > T->Element)
			return Search(X, T->Right);
		else
			return T;
}
Node 	FindMin(Tree T)
{
	while(T->Left!=NULL)
		T=T->Left;
	return T;
}
Tree Delete(ElementType X,Tree&T)
{
	Node TmpCell;

	if(T== NULL)
		printf("Khong tim thay %d\n",X);
	else
		if (X < T->Element)
			T->Left = Delete(X, T->Left);
		else
			if(X > T->Element)
				T-> Right = Delete(X, T->Right);
			else
				//Nut co 2 con
				if(T->Left!=NULL && T->Right!=NULL)
				{
					TmpCell = FindMin(T->Right);
					T->Element = TmpCell->Element;
					T->Right = Delete(T->Element, T->Right);
				}
				else
				{
					TmpCell = T;
					//Nut co 1 con ben phai
					if (T->Left == NULL)
						T = T->Right;
					//Nut co 1 con ben trai
					else if (T->Right == NULL)
						T = T->Left ;
					//Xoa nut
					delete TmpCell;
					printf("Da xoa %d\n",X);
				}
		return T;

}

ElementType Retrieve(Node P)
{
	return P->Element;
}

