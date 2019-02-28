#include "functii.h"
#include <iostream>
using namespace std;

void p1() {
	int T[10];
	for (int i = 0;i < 10;i++) {
		cout << "T[" << i + 1 << "]: ";
		cin >> T[i];
	}
	int s = 0, s_max = 0, poz_i = 0, poz_j, Pmax = 0, max_T = T[0];
	for (int i = 0;i < 10;i++) {
		s += T[i];
		if (s < 0)
		{
			s = 0;
			poz_i = i + 1;
		}
		if (s > s_max) {
			s_max = s;
			poz_j = i;
		}
		if (T[i] > max_T) {
			max_T = T[i];
			Pmax = i;
		}
		if (max_T < 0) {
			cout << "max: " << max_T << " pmax: " << Pmax << endl;
		}
		else
			cout << "smax:" << s_max << " poz_i: " << poz_i << " poz_j: " << poz_j  << endl;
	}
}