#ifndef _GRUPA_
#define _GRUPA_
#include "STUDENT.h"
struct Grupa {
	Student* tab;
	int nr;
	int id;          // numarul grupei, de exemplu 1105
};
void InitGrupa(Grupa&);
void AfisGrupa(Grupa);
void StergeGrupa(Grupa&);
#endif