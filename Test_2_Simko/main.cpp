#include "Kontajner.h"
#define _CRT_SECURE_NO_DEPRECATE

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Kontajner kontajner;
	kontajner.PridajStudenta((char*)"Data2.txt");
	kontajner.Zorad();
	kontajner.Vypis();

	return 0;
}