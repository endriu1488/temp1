typedef Atom int;
struct Elem {
    Atom data;
    int* link;
    }
ListInit(Elem*& cap);
InsElemFront(Elem*& cap,Atom a);
InsElemMiddle(Elem*& cap,Atom a,int pos);
DelElemFront(Elem*& cap);
DelElemMiddle(Elem*& cap,int pos);
AfisList(Elem*& cap);