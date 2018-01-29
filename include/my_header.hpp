//  Copyright (c) 2017 Antoine Tran Tan
//  Copyright (c) 2018 Erwan DAYOT

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

#include <cmath>


double exo1 ( double rayon )
{
	double volume;

	volume = 4.0 / 3.0 * 3.14 * rayon * rayon * rayon ;

	return volume;
}




void exo2(short a, short b)
{
	short y;

	y = a < b && !a;
}


double exo3(double rayon)
{
	double aire;

	aire = 4.0 / 3.0 * 3.14 * rayon * rayon * rayon;


	return aire;
}

void exo4(int v1, int v2, int v3)
{
	int vmax ;

	if (v1 > v2)
		if (v1 > v3)
			vmax = v1;
	if (v2 > v1)
		if (v2 > v3)
			vmax = v2;
	if (v3 > v1)
		if (v3 > v2)
			vmax = v3;


}


#endif // MY_HEADER_HPP

