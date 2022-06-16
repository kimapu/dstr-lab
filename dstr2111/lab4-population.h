/*
 * lab4-population.h
 *
 *  Created on: Jun 10, 2022
 *      Author: kimlee
 */

#ifndef LAB4_POPULATION_H_
#define LAB4_POPULATION_H_

# include <string>
# include <iomanip>
# include <sstream>

class Population
{

	double number;

	public : Population(double n)
	{
		this->number = n;
	}

	public : double birthRate(int birthNo)
	{
		if( birthNo <= 0 ) throw std :: invalid_argument("Negative value!");
		return birthNo / this->number;
	}

	public : double deathRate(int deathNo)
	{
		if( deathNo <= 0 ) throw std :: invalid_argument("Negative value!");
		return deathNo / this->number;
	}

	public : string toString()
	{
		std :: stringstream stream;
		stream << std :: fixed << std :: setprecision(2) << this->number;
		return "Population = " + stream.str();
	}

};



#endif /* LAB4_POPULATION_H_ */
