#include "Ejercicio02.h"

bool Ejercicio02::isPalindrome(string& s)
{
	string sresultante; 
	int i = 0; 
	for ( i = s.size() -1; i >= 0 ; i--)
	{
		sresultante += s[i];
	}
	if (s == sresultante) {
		return true;
	}
	else return false;
}
