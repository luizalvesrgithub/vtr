/*
 * Exception.cpp
 *
 *  Created on: 6 de jan de 2022
 *      Author: t317542
 */

#include <iostream>
#include "Exception.hpp"
//Constructor
Exception::Exception(std::string tagString, std::string probString) {
	mTag = tagString;
	mProblem = probString;
}

void Exception::PrintDebug() const {
	std::cerr << "** Error (" << mTag << ") **\n";
	std::cerr << "Problem: " << mProblem << "\n\n";
}
