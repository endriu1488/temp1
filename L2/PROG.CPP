  #include <stdio.h>
  #include "list.h"
	void main()
  {
  int n;
  Elem *cap;
  cap=NULL;
  printf("\n Introduceti numere:\n");
  n=1;
  while(n!=0)
  {
	 scanf("%d",&n);
	 InsertInFata(cap,n);
   }
   Afisare(cap);
  }
