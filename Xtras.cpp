#include "Xtras.h"
#include <string>
using namespace std;

void minusculas(string &s) {
	int cant=s.size();
	for(int i=0;i<cant;i++) { 
		s[i]=tolower(s[i]);
	}
}
