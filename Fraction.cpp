/*
 * Fraction.cpp
 *
 *  Created on: 16 mai 2014
 *      Author: charles
 */

#include "Fraction.hpp"

Fraction::Fraction() {
	// TODO Auto-generated constructor stub

}

Fraction::Fraction(int n, int d) :
		numerateur(n),
	    denominateur(d)
{
}

const string& Fraction::afficher(){

	tmp = patch::to_string(numerateur);
	tmp += "/";
	tmp += patch::to_string(denominateur);


	return tmp;
}

void Fraction::addition(int add){

}

void Fraction::addition(const Fraction&){


}

void Fraction::operator+(const Fraction&){


}

Fraction::~Fraction() {
	// TODO Auto-generated destructor stub
}

