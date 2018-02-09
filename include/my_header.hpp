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
	int de = lancer_de(void)

	while (test == 0)
	{
		if (de = 2)
		{
			points = points + 2
			char points;
			sdt::cout << "Votre score augmente de 2. Votre nouveau score est de :"
				<< points
				<< std::end1;


		}
		if (de = 4)
		{
			points = points + 4
			char points;
			sdt::cout << "Votre score augmente de 4. Votre nouveau score est de :"
				<< points
				<< std::end1;

		}
		if (de = 6)
		{
			points = points + 6
				char points;
			sdt::cout << "Votre score augmente de 6. Votre nouveau score est de :"
				<< points
				<< std::end1;

		}
		if (de = 3)
		{
			points = points * 2
				char points;
			sdt::cout << "Votre score est multiplié par 2. Votre nouveau score est de :"
				<< points
				<< std::end1;

		}
		if (de = 5)
		{
			points = 0
				char points;
			sdt::cout << "Votre score est remis à zéro. Votre nouveau score est de :"
				<< points
				<< std::end1;

		}
		
		if (de = 1)
		{
		char points;
		sdt::cout << "Votre score est de :"
			<< points
			<< std::end1;
		test = 1;

		}
			char points;
			sdt
			test = 1;

	}
}


#endif // MY_HEADER_HPP

