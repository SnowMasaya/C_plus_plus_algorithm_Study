/*
 * template_practice.h
 *
 *  Created on: Oct 24, 2016
 *      Author: masayaogushi
 */

#ifndef TEMPLATE_PRACTICE_H_
#define TEMPLATE_PRACTICE_H_

enum template_direction {template_up = 1, template_down = 2, template_right = 3, template_left = 4};

template <class A_Type> class template_practice {
public:
	A_Type multiply(A_Type x, A_Type y);
	A_Type add(A_Type x, A_Type y);
};

#endif /* TEMPLATE_PRACTICE_H_ */
