#include<stdio.h>
#include "listdef.h"
#include "listdef.cpp"
main() {
 Elem* cap;
 int c,x;
 ListInit(cap);
 printf("\n 1.afisare\n2.insert\n3.stergere\n40.exit");
 while((c=getchar())!='0')
 switch (c){
   case '1':Afislist(cap);break;
   case '2':{
	    printf("\nr?  ");
	    scanf("%d",&x);
	    printf("\n0.in fata\n1.in interior");
	    c=getch();
	    if (c) {
		  printf("\n pozitia?  );
		  scanf("%d",&pos);
		  InsElemMiddle(cap,pos);
		  }
	     else InsElemFront(cap);
	   break;
	  }
   case '3' : {printf("\n0.in fata\n1.in interior");
	    c=getch();
	    if (c) {
		  printf("\n pozitia?  );
		  scanf("%d",&pos);
		  DelElemMiddle(cap,pos);
		  }
	     else DelElemFront(cap);
	   break;
	  }
    case 4