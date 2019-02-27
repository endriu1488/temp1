/////////////////////////
#include <stdio.h>
#include <conio.h>
#include <alloc.h>             TELEF.H
struct el { char t[20];
			char n[10];
			el* link;
			};
/////////////////////////
\\\\\\\\\\\\\\\\\\\\\\\\\
main()
{
 int k,i,n;
 char q[i];
 k=0;
 el* cap;                             PRG.PRIN+PROCEDUEI
 el* p;
 cap=new el;
 printf("1--pt. introducere      2--listare        3--sterge     ");
 scanf("%d",n);
 if(n==1)
	  proced de intr
	  else
		if(n==2)
			 listare
				else
				{  printf("numele");
				for (i=0;i<20;i++);
				{
				  scanf("%c",q[i]);  sterge
				 }
\\\\\\\\\\\\\\\\\\\\\\\\\\
 while (k==0)
 {
  p=new el;
  printf("inrodu===\n");
  for(i=0;i<20;i++);
		scanf("%c",&(p->t[i]));
  printf("intrrrr    nrr===\n");
  for(i=0;i<10;i++);
		scanf("%c",&(p->n[i]));
  p->link=cap;                       INSERARE
  cap=p;
  printf("mai vrei===\n");
  scanf("%d",&k);
 }
  p=cap->link;
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
  while(p->link!=NULL)
  {
	   printf("%c       %c",p->t[1],p->n[1]);
	   p=p->link;                                    LISTARE
   };getch();
}
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
kk=0;
 p=cap->link;
  while(p->link!=NULL)
	 {
	  for(i=0;i<n;i++)
	  {
		 if(q[i]!=p->t[i])
				 kk=1;         STERGERE  q ESTE DE TIP EL;;
	   }
	if(kk==0)
		  {
			 q=p->link;
			 p->link=q->link;
			 delete q;
		   }
	 }
  \\\\\\\\\\\\\\\\\\\\\\\\\\\\