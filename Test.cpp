
#include <gtest/gtest.h>
#include "Fraction.hpp"

using namespace std;

TEST(striTest, Fraction){

	Fraction A(3,2);

	string aText= "3\2" ;
	string result;
	result = A.afficher();
	EXPECT_EQ(result,aText);

}

TEST(AdditionTest, Integer){

	Fraction A(3,2);

	string aText= "3\2" ;
	string result;
	result = A.afficher();
	EXPECT_EQ(result,aText);

}

TEST(AdditionTest, Fraction){

	Fraction A(3,2);

	string aText= "3\2" ;
	string result;
	result = A.afficher();
	EXPECT_EQ(result,aText);

}
