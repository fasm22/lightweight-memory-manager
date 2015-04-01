/*
 * vFloat.h
 *
 *  Created on: 24/3/2015
 *      Author: tvlenin
 */

#ifndef COM_LDMM_VOBJECTS_VFLOAT_H_
#define COM_LDMM_VOBJECTS_VFLOAT_H_

#include "../Constants.h"
#include "vObject.h"
#include <iostream>
#include "../com.LDMM.MemoryResources/vRef.h"
#include "../com.LDMM.MemoryManager/vHeap.h"
using namespace std;
class vFloat: public vRef {
public:
	vFloat();
	vRef * operator = (const float& s);
	float vFloatData;
	void* operator new(size_t sz, void *pvObject){
		return pvObject;
	}
};



#endif /* COM_LDMM_VOBJECTS_VFLOAT_H_ */
