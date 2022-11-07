#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{

	int NombreMystere;
	int Nombre;
	int Compteur;
	char Reponse;
	char O;
	char N;
	NombreMystere = rand();

	printf("Bienvenue au jeu : le + ou le - ! \n J'ai choisi un nombre entre 1 et 100. \n Quel est ce nombre ? : ");

	do
	{
	scanf("%d", &Nombre);

		if (Nombre == NombreMystere)
		{
			printf("Bravo, vous avez trouve le nombre mystere ! \n Voulez-vous encore jouer une autre partie ?");
			scanf("%c", &Reponse);
		}

		else if (Nombre > NombreMystere)
		{
			printf("C'est moins ! Essaie encore : ");
		}

		else
		{
			printf("C'est plus ! Essaie encore : ");
		}
	} 
	while (Nombre > 1 && Nombre < 100);

	return 0;
}
