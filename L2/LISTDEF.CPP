ListInit(Elem*& cap)
{
cap=0;
}

InsElemFront(Elem*& cap,Atom a);
{
Elem* p;
p=new Elem;
p->data=a;
p->link=cap;
cap=p;
}

InsElemMiddle(Elem*& cap,Atom a,int pos)
{
Elem* p,x;
p=new Elem;
int i;
x=cap;
for(i=0;i<pos;i++) x=x->link;
p->data=a;
p->link=x->link;
x->link=p;
}

DelElemFront(Elem*& cap)
{
Elem* p;
p=cap;
cap=cap->link;
delete p;
}

DelElemMiddle(Elem*& cap,int pos)
{
Elem* p,x;
x=cap;
int i;
for(i=0;i<pos;i++) x=x->link;
p=x->link;
x->link=p->link;
delete p;
}

AfisList(Elem*& cap)
{
Elem* x;
x=cap;
int i:
for(i=0;(x=x->link)=0;i++) printf("%d" ,x->data);
}
