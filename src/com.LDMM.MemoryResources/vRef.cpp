/*
 * vRef.cpp
 *
 *  Created on: Mar 18, 2015
 *      Author: fabian
 */

#include "vRef.h"

vRef::vRef(int pID) {
	_ID = pID;
//	_xReference = pRef;

}
vRef::vRef(){

}

vRef::~vRef() {}

void vRef::setID(int pID){ _ID = pID; }
int vRef::getID(){ return _ID;}
int* vRef::getMemPos(){}

