#include <iostream>
#include "outils.h"
#include "declaration.h"
using namespace std;
int main()
{
	int exo;
	void bibliotheque2();

	do {
		saisirControleEntierBorne("\n1 -Bibliotheque \n2 -Quitter \n", 0, 4, exo);
		switch (exo)
		{
		case 1:
			bibliotheque2();
			break;
		case 2:
			cout << "Quitter" << endl;
			break;

		default:
			cout << "Quitter" << endl;
			break;
		}
	} while (exo != 2);
	system("pause");
	return 0;
}