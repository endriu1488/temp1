#include <conio.h>
#include <string.h>
#include "meniuri.h"

void meniuWindow()
{
	window(1,1,60,7);
	textcolor(WHITE);
	textbackground(BLUE);
}

void dialogWindow()
{
     window(1,8,60,15);
     textcolor(WHITE);
     textbackground(CYAN);
}

void userWindow()
{
     window(1,16,80,25);
     textcolor(LIGHTGRAY);
     textbackground(BLACK);
}

void executaMeniu(Meniu& m)
{
     m.crtLine=0;
     do {
	  meniuWindow();
	  clrscr();
	  afiseazaMeniul(m);           // afiseaza meniul
	  int i = selectieLinie(m);    // selecteaza o linie
	  if (i<0) break;              // s-a apasat ESCAPE
	  executaLinieMeniu(m.linii[i]);         // executa linia
     } while(1);                       // o bucla infinita
}

void afiseazaMeniul(Meniu& m)
{
     int i;
     gotoxy(18,3);
     cputs(m.nume);
     for(i=0; i<m.nrLinii; ++i){        // afiseaza liniile
	gotoxy(3,5+i);
	afiseazaLinie(m.linii[i]);
	}
}

void afiseazaLinie(LinieMeniu& lm)
{
	int i;
	cprintf(" %-50s",lm.nume);
	//cputs(lm.nume);
	//for(i=strlen(lm.nume); i<
}

int selectieLinie(Meniu& m)
{
     char c;
     do{
	textcolor(BLACK);
	textbackground(YELLOW);
	gotoxy(3,5+m.crtLine);
	afiseazaLinie(m.linii[m.crtLine]);
	c=getch();
	dialogWindow();
	clrscr();
	meniuWindow();
	gotoxy(3,5+m.crtLine);
	afiseazaLinie(m.linii[m.crtLine]);
	switch(c){
		case 0: switch(getch()){
				case TSUS: if(m.crtLine>0) m.crtLine--;
					   else m.crtLine=m.nrLinii-1;
					   break;
				case TJOS: if(m.crtLine<m.nrLinii-1)
							m.crtLine++;
					   else m.crtLine=0;
					   break;
				}
			break;
		case '\r':
			textcolor(BLACK);
			textbackground(YELLOW);
			gotoxy(3,5+m.crtLine);
			afiseazaLinie(m.linii[m.crtLine]);
			return m.crtLine;
		case ESCAPE: return -1;
		}
	}while(1);
}

void executaLinieMeniu(LinieMeniu& lm)
{
     dialogWindow();
     lm.operatie();
}

