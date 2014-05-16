/*
 * Fraction.hpp
 *
 *  Created on: 16 mai 2014
 *      Author: charles
 */

#ifndef FRACTION_HPP_
#define FRACTION_HPP_


#include <iostream>
#include <string>
#include <sstream>


using namespace std;

namespace patch
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

class Fraction {
public:
	//Constructors :
	Fraction();
	Fraction(int n,int d);

	//Setters :
	void SetNumerateur(int iNumerateur);
	void SetDenominateur(int iDenominateur);

	//Getters :
	int GetNumerateur();
	int GetDenominateur();

	//Functions :
	const string& afficher();
	void addition(int);
	void addition(const Fraction& fract);
	void operator+(const Fraction& fract);

	//Destructor :
	virtual ~Fraction();

private:
	int numerateur;
	int denominateur;
	string tmp;
};

#endif /* FRACTION_HPP_ */
