/*
 * Vector.hpp
 *
 *  Created on: 9 de jan de 2022
 *      Author: t317542
 */

#ifndef VECTOR_HPP_
#define VECTOR_HPP_

class Vector {
private:
	double *mData; // data stored in vector
	int mSize; // size of vector
public:
	Vector(const Vector &otherVector);
	Vector(int size);
	~Vector();
	int GetSize() const;
	double& operator[](int i); // zero-based indexing
	// read-only zero-based indexing
	double Read(int i) const;
	double& operator()(int i); // one-based indexing
	// assignment
	Vector& operator=(const Vector &otherVector);
	Vector operator+() const; // unary +
	Vector operator-() const; // unary -
	Vector operator+(const Vector &v1) const; // binary +
	Vector operator-(const Vector &v1) const; // binary -
	// scalar multiplication
	Vector operator*(double a) const;
	// p-norm method
	double CalculateNorm(int p = 2) const;
	// declare length function as a friend
	friend int length(const Vector &v);
};

// Prototype signature of length() friend function
int length(const Vector &v);

#endif /* VECTOR_HPP_ */
