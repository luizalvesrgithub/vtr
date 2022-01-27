/*
 * Exception.hpp
 *
 *  Created on: 6 de jan de 2022
 *      Author: t317542
 */

#ifndef EXCEPTION_HPP_
#define EXCEPTION_HPP_

#include <string>

class Exception {
private:
	std::string mTag, mProblem;
public:
	Exception(std::string tagString, std::string probString);
	void PrintDebug() const;
};

#endif /* EXCEPTION_HPP_ */
