/*
 * ComplexNumber.hpp
 *
 *  Created on: 8 de jan de 2022
 *      Author: t317542
 */

#ifndef COMPLEXNUMBER_HPP_
#define COMPLEXNUMBER_HPP_

#include <iostream>

class ComplexNumber {
private:
	double mRealPart;
	double mImaginaryPart;
public:
	ComplexNumber();
	ComplexNumber(double x, double y);
	double CalculateModulus() const;
	double CalculateArgument() const;
	ComplexNumber CalculatePower(double n) const;

	ComplexNumber& operator=(const ComplexNumber &z);
	ComplexNumber operator-() const;
	ComplexNumber operator+(const ComplexNumber &z) const;
	ComplexNumber operator-(const ComplexNumber &z) const;
	friend std::ostream& operator<<(std::ostream &output,
			const ComplexNumber &z);
};

#endif /* COMPLEXNUMBER_HPP_ */
