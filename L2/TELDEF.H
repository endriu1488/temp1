
struct  Atom{
		    long nr;
		    char* nume;
		    };

struct Elem {

    Atom data;
    Elem* link;
    };
void	ListInit(Elem*& cap);
void	InsElemFront(Elem*& cap,Atom a);
void 	InsElemMiddle(Elem*& cap,Atom a,int pos);
void	DelElemFront(Elem*& cap);
void	DelElemMiddle(Elem*& cap,int pos);
void	AfisList(Elem*& cap);
int 	BinarySearch(Elem*& cap,char* name);
void	ClearList(Elem*& cap);
//void 	ReadNum(atom a);