/*
 * formularioFuncional.hpp
 *
 *  Created on: 4 de jan de 2022
 *      Author: t317542
 */

#ifndef FORMULARIOFUNCIONAL_HPP_
#define FORMULARIOFUNCIONAL_HPP_

void RenderAnnulus(double innerRadius, double outerRadius, int slices,
		int segments) {
	//A "helpful" implementation fixes the input
	//so RenderAnnulus(1.0, 0.0, 30, 3); will work
	if (innerRadius > outerRadius) {
		//The arguments are the wrong way round
		//Swap them
		double temp = innerRadius;
		innerRadius = outerRadius;
		outerRadius = temp;
	}
	assert (innerRadius < outerRadius);
}

#endif /* FORMULARIOFUNCIONAL_HPP_ */
