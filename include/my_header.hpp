//  Copyright (c) 2017 Antoine Tran Tan
//  Copyright (c) 2018 Erwan DAYOT

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <windows.h>
#include <conio.h>
#include <iostream>

int essayer_code(unsigned short code);
unsigned short lancer_de(void);
unsigned short pour_gagner(void);

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
	std::cin.get();
	printf("Le Jeu du dés : \nC'estun jeu simple ou un Joueur lance un dés :\nSi on obtient 1 le jeu se termine \nSi on obtient 2 notre score augmente de 2 \nSi on obtient 3 notre score est multiplié par 2 \nSi on obtient 4 notre score augmente de 4 \nSi on obtient 5 notre score est remis à zéro \nSi on obtient 6 notre score augmente de 6\n");
	std::cin.get();
	while (test == 0)
	{
		unsigned short de = lancer_de();
		int de1 = de;
		Sleep(100);
		printf("Vous lancer le dés la tension monte et le chiffre est %d\n", de1);
		if (de == 2)
		{
			points = points + 2;
			printf("Votre score augmente de 2. Votre nouveau score est de : %d \n", points);

		}
		if (de == 4)
		{
			points = points + 4;
			printf("Votre score augmente de 4. Votre nouveau score est de : %d \n", points);

		}
		if (de == 6)
		{
			points = points + 6;
			printf("Votre score augmente de 6. Votre nouveau score est de : %d \n", points);
		}
		if (de == 3)
		{
			points = points * 2;
			printf("Votre score est multiplié par 2. Votre nouveau score est de : %d \n", points);
		}
		if (de == 5)
		{
			points = 0;
			printf("Votre score est remis à zéro. Votre nouveau score est de : %d \n", points);
		}
		
		if (de == 1)
		{
			printf("Votre score est de : %d . La partie est terminé. \n", points);
			test = 1;
		}
	}
}

void exo5(void)
{
	
	int tour = 1;
	int points_Joueur1 = 0;
	int points_Joueur2 = 0;
	int test = 0;
	int max = pour_gagner();
	std::cin.get();
	printf("Le Jeu du dés : \nC'est un jeu simple se jouant à deux ou un Joueur lance un dés :\nSi on obtient 1 le jeu se termine \nSi on obtient 2 notre score augmente de 2 \nSi on obtient 3 notre score est multiplié par 2 \nSi on obtient 4 notre score augmente de 4 \nSi on obtient 5 notre score est remis à zéro \nSi on obtient 6 notre score augmente de 6 \nLa partie se joue en %d, le joueur 1 commence \nBonne Chance !\n\n", max);
	std::cin.get();
	while (test == 0)
	{
		int test1 = 0;
		int test2 = 0;

		while (test1 == 0)
		{
			unsigned short de = lancer_de();
			int de1 = de;
			printf("Le joueur 1 lance le dés la tension monte ");
			std::cin.get();
			Sleep(1500);
			printf("et le chiffre est %d\n", de1);
			if (de == 2)
			{
				points_Joueur1 = points_Joueur1 + 2;
				printf("Votre score augmente de 2. Votre nouveau score est de : %d \n", points_Joueur1);
			}
			if (de == 4)
			{
				points_Joueur1 = points_Joueur1 + 4;
				printf("Votre score augmente de 4. Votre nouveau score est de : %d \n", points_Joueur1);
			}
			if (de == 6)
			{
				points_Joueur1 = points_Joueur1 + 6;
					printf("Votre score augmente de 6. Votre nouveau score est de : %d \n", points_Joueur1);
			}
			if (de == 3)
			{
				points_Joueur1 = points_Joueur1 * 2;
					printf("Votre score est multiplié par 2. Votre nouveau score est de : %d \n", points_Joueur1);
			}
			if (de == 5)
			{
				points_Joueur1 = 0;
					printf("Votre score est remis à zéro. Votre nouveau score est de : %d \n", points_Joueur1);
			}
			if (de == 1)
			{
				printf("Votre nouveau score est de : %d . Son tour est terminé. \n\n\n", points_Joueur1);
				test1 = 1;
				std::cin.get();
				if (points_Joueur1 >= max)
				{
					printf("Le Joueur1 a gagner avec : %d points.\n", points_Joueur1);
					test = 1;
					test2 = 1;
					std::cin.get();
				}
			}
		}
		while (test2 == 0)
		{
			unsigned short de = lancer_de();
			int de2 = de;
			printf("Le joueur 2 lance le dés la tension monte ");
			std::cin.get();
			Sleep(1500);
			printf("et le chiffre est %d\n", de2);
			if (de == 2)
			{
				points_Joueur2 = points_Joueur2 + 2;
				printf("Votre score augmente de 2. Votre nouveau score est de : %d \n", points_Joueur2);
			}
			if (de == 4)
			{
				points_Joueur2 = points_Joueur2 + 4;
				printf("Votre score augmente de 4. Votre nouveau score est de : %d \n", points_Joueur2);
			}
			if (de == 6)
			{
				points_Joueur2 = points_Joueur2 + 6;
				printf("Votre score augmente de 6. Votre nouveau score est de : %d \n", points_Joueur2);
			}
			if (de == 3)
			{
				points_Joueur2 = points_Joueur2 * 2;
				printf("Votre score est multiplié par 2. Votre nouveau score est de : %d \n", points_Joueur2);
			}
			if (de == 5)
			{
				points_Joueur2 = 0;
				printf("Votre score est remis à zéro. Votre nouveau score est de : %d \n", points_Joueur2);	
			}	
			if (de == 1)
			{
				printf("Votre nouveau score est de : %d . Son tour est terminé. \n\n\n", points_Joueur2);
				test2 = 1;
				tour = tour + 1;
				std::cin.get();
				if (points_Joueur2 >= max)
				{
					printf("Le Joueur1 a gagner avec : %d points.\n", points_Joueur2);
					test = 1;
					test1 = 1;
					std::cin.get();
				}
			}
		}
		printf("\nRécapitulatif ");
		printf("Le Joueur 1 a obtenue %d", points_Joueur1);
		printf(", le Joueur 2 a obtenue %d", points_Joueur2);
		printf(", nous sommes au tour(s) %d \n\n\n\n\n", tour);
	}
	printf("La partie c'est terminé en %d tours\n", tour);
}	


#endif // MY_HEADER_HPP

