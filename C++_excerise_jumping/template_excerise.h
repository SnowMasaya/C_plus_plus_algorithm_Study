/*
 * template_excerise.h
 *
 *  Created on: Nov 23, 2016
 *      Author: masayaogushi
 */

#ifndef TEMPLATE_EXCERISE_H_
#define TEMPLATE_EXCERISE_H_

template <typename Type> class template_excerise {
public:
	template_excerise();
	virtual ~template_excerise();
	Type multiply (Type x, Type y);
	Type add (Type x, Type y);
};

#endif /* TEMPLATE_EXCERISE_H_ */
