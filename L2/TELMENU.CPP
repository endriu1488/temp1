#include <stdio.h>
#include "teldef.h"
#include "meniuri.h"
Elem* cap;
InitList1(){ InitList(cap); }
InsertElemMiddle1() { InsertElemMiddle(cap);}
DelElemMiddle1() {DelElemMiddle(cap)}
LinieMeniu liniileMeniului[] = {
     { "Initializeaza cartea de telefon",              InitList1   },
     { "Insereaza un numar in carte ",         InsertElemMiddle1   },
     { "sterge un numar din carte",  DelElemMiddle1                },
     { "Afisarea cartii",  Afislist1                               },
     };

Meniu meniu = { "Meniul programului", 5, liniileMeniului, 0 };

void main()
{
     userWindow();
     clrscr();
     dialogWindow();
     clrscr();
     executaMeniu(meniu);
}



