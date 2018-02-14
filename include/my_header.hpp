//  Copyright (c) 2017 Antoine Tran Tan
//  Copyright (c) 2018 Erwan DAYOT

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP
#include <stdio.h>
#include <stdlib.h>
#include <time.h>




#include <cmath>

int essayer_code(unsigned short code);
unsigned short lancer_de(void);

void exo1(void)
{
	long a = 2, b = 1, c = 0;

	while (a + b > 0)
	{
		a = a - 2;
		b = b + 1;
		c = c + 1;
	}
}

void exo2(void)
{
	long n = 3, fac = 1, i = 1;

	if (n > 0)
		while (i <= n)
		{
			fac = fac * i;
			i = i + 1;
		}
	else
		if (n < 0)
			fac = 0;
}


void exo3(void)
{
	int test = 0;
	unsigned short code = 0;
	while (test == 0)
	{
		code += 1;
		test = essayer_code(code);
	}
}

void exo4(void)
{
	int points = 0;
	int test = 0;
	int de = lancer_de();

	while (test == 0)
	{
		if (de = 2)
		{
			points = points + 2
			char points;
			printf("Votre score augmente de 2. Votre nouveau score est de : %d \n", points);

		}
		if (de = 4)
		{
			points = points + 4
			printf("Votre score augmente de 4. Votre nouveau score est de : %d \n", points);

		}
		if (de = 6)
		{
			points = points + 6
				printf("Votre score augmente de 6. Votre nouveau score est de : %d \n", points);

		}
		if (de = 3)
		{
			points = points * 2
				printf("Votre score est multiplié par 2. Votre nouveau score est de : %d \n", points);
		}
		if (de = 5)
		{
			points = 0
				printf("Votre score est remis à zéro. Votre nouveau score est de : %d \n", points);

		}
		
		if (de = 1)
		{
			printf("Votre nouveau score est de : %d . La partie est terminé. \n", points);
		test = 1;

		}
			

	}
}

void exo5(void)
{
	
	int tours = 0;
	int points_Joueur1 = 0;
	int points Joueur2 = 0;
	int test1 = 0;
	int test2 = 0;
	int test = 0;
	int max = 50;
	printf("La partie commence le Joueur1 commence");

	while (test == 0)
	{
		while (test1 == 0)
		{
			int de = lancer_de();
			if (de = 2)
			{
				points_Joueur1 = points_Joueur1 + 2
				char points_Joueur1;
				printf("Votre score augmente de 2. Votre nouveau score est de : %d \n", points_Joueur1);
			}
			if (de = 4)
			{
				points_Joueur1 = points_Joueur1 + 4
				printf("Votre score augmente de 4. Votre nouveau score est de : %d \n", points_Joueur1);
			}
			if (de = 6)
			{
				points_Joueur1 = points_Joueur1 + 6
					printf("Votre score augmente de 6. Votre nouveau score est de : %d \n", points_Joueur1);
			}
			if (de = 3)
			{
				points_Joueur1 = points_Joueur1 * 2
					printf("Votre score est multiplié par 2. Votre nouveau score est de : %d \n", points_Joueur1);
			}
			if (de = 5)
			{
				points_Joueur1 = 0
					printf("Votre score est remis à zéro. Votre nouveau score est de : %d \n", points_Joueur1);
			}
			if (de = 1)
			{
				printf("Votre nouveau score est de : %d . Son tour est terminé. \n", points_Joueur1);
				test1 = 1;
				if (points_Joueur1 >= max)
				{
					printf("Le Joueur1 a gagner avec : %d points.\n", points_Joueur1);
					test = 1;
				}
			}
		}
		while (test2 == 0)
		{
			int de = lancer_de();
			if (de = 2)
			{
				points_Joueur2 = points_Joueur2 + 2

				char points_Joueur2;
				printf("Votre score augmente de 2. Votre nouveau score est de : %d \n", points_Joueur2);
			}
			if (de = 4)
			{
				points_Joueur2 = points_Joueur2 + 4
				printf("Votre score augmente de 4. Votre nouveau score est de : %d \n", points_Joueur2);
			}
			if (de = 6)
			{
				points_Joueur2 = points_Joueur2 + 6
				printf("Votre score augmente de 6. Votre nouveau score est de : %d \n", points_Joueur2);
			}
			if (de = 3)
			{
				points_Joueur2 = points_Joueur2 * 2
				printf("Votre score est multiplié par 2. Votre nouveau score est de : %d \n", points_Joueur2);
			}
			if (de = 5)
			{
				points_Joueur2 = 0
				printf("Votre score est remis à zéro. Votre nouveau score est de : %d \n", points_Joueur2);	
			}	
			if (de = 1)
			{
				printf("Votre nouveau score est de : %d . Son tour est terminé. \n", points_Joueur2);
				test2 = 1;
				tour = tour + 1
				if (points_Joueur2 >= max)
				{
					printf("Le Joueur1 a gagner avec : %d points.\n", points_Joueur2);
					test = 1;
				}
			}
		}
	}
	 printf("printf("La partie est terminé.");
}	


#endif // MY_HEADER_HPP

