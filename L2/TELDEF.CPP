#include "teldef.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//	ReadNum(Atom a)
//	{

//		char* n;
//		long t;
// 		printf("\nNumele:");
// 		scanf("%s",a.nume);
// 		printf("\nTelefon :");
// 		scanf("%l",&a.nr);
//		a.nume=n;
//		a.nr=t;

//	}

void ListInit(Elem*& cap)
{
Elem* p;
Atom a;
cap=NULL;

//ReadNum(a);

printf("\nNumele:");
 scanf("%s",a.nume);
 printf("\nTelefon :");
 scanf("%l",&a.nr);

p=new Elem;
p->data.nr=a.nr;
p->data.nume=a.nume;
p->link=cap;
cap=p;
}

void InsElemMiddle(Elem*& cap)
{
Elem* p,*x;
Atom a;
int pos;
int i;
p=new Elem;
x=cap;

//ReadNum(a);

printf("\nNumele:");
 scanf("%s",a.nume);
 printf("\nTelefon :");
 scanf("%l",&a.nr);

pos=BinarySearch(x,a.nume);
for(i=1;i<pos;i++) x=x->link;
p->data.nr=a.nr;
p->data.nume=a.nume;
p->link=x->link;
x->link=p;
       }

void DelElemFront(Elem*& cap)
{
Elem* p;
p=cap;
cap=cap->link;
delete p;
}

void DelElemMiddle(Elem*& cap)
{
Elem* p;
Elem* x;
Atom a;
int pos;
x=cap;
int i;
//ReadNum(a);
pos=BinarySearch(x,a.nume);
if(pos==1) {
	DelElemFront(cap);
	exit(1);
	}
else { for(i=0;(i<pos)&&(x->link==0);i++) x=x->link;
	   p=x->link;
	   x->link=p->link;
	   delete p;
	   }
if (x->link==0) { printf("Erroare:positia prea mare!");
		  exit(1);
		}
  }

void AfisList(Elem*& cap)
{
Elem* x;
x=cap;
int i,c;
char* n;
printf("\nNumele:");
scanf("%s",n);
if(n!="") for(i=0;(x=x->link) && (x->data.nume!=n);i++) {
			  gotoxy(65,2);
			  printf("%s\n%d" ,x->data.nume,x->data.nr);
			}

	else   {  printf("\nNumarul:");
		  scanf("%d",c);
		 for(i=0;((x=x->link)!=0) && (x->data.nr!=c);i++) {
			  gotoxy(65,2);
			  printf("%s\n%d" ,x->data.nume,x->data.nr);
			}
			 }

}

int BinarySearch(Elem*& cap,char* name)
{
Elem* x;
int i=1;
x=cap;
while(x->data.nume<=name) i++;
return i;
}

void Clearlist(Elem*& cap)
{
int i;

for(i=0;;i++) DelElemFront(cap);
}
