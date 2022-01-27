/*
 * Point2d.hpp
 *
 *  Created on: 2 de jan de 2022
 *      Author: t317542
 */

#ifndef POINT2D_HPP_
#define POINT2D_HPP_

#include <iostream>
#include <string>
#include <set>
#include <cmath>

class Point2d {
public:
	int x, y;
	Point2d(int a, int b) {
		x = a;
		y = b;
	}
	bool operator<(const Point2d& other) const {
		if (x < other.x) {
			return true;
		} else if (x > other.x) {
			return false;
		} else if (y < other.y) {
			// x == other.x
			return true;
		} else {
			// x == other.x and
			// y >= other.y
			return false;
		}
	}
};

struct Point { double x, y; };
struct PointCmp {
    bool operator()(const Point& lhs, const Point& rhs) const {
        return std::hypot(lhs.x, lhs.y) < std::hypot(rhs.x, rhs.y);
    }
};



#endif /* POINT2D_HPP_ */
