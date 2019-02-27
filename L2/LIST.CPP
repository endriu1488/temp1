#include "list.h"
#include <stdio.h>
void InsertInFata( Elem *&cap,int n)
  {
  Elem *pval;
  pval=new Elem;
  pval->nData=n;
  pval->purmator=cap;
  cap=pval;
  }
  void Afisare(Elem *cap)
	{
  Elem *pTemp;
  pTemp=cap;
  while(pTemp!=NULL)
  {
	printf("\n Element: %d\n",pTemp->nData);
   pTemp=pTemp->purmator;
	}
  }
