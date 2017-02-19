#include <iostream>
#include "hora.h"

hora::hora(int vh, int vm, int vs): h(vh), m(vm), s(vs){};
hora::~hora(){};

int hora::getH() const{ return h; };
int hora::getM() const{ return m; };
int hora::getS() const{ return s; };

bool hora::setH(int vh){
	if( vh >= 0 && vh < 24 ){
		h = vh;
		return true;
	}
	return false;
};
bool hora::setM(int vm){
	if( vm >= 0 && vm < 60){
		m = vm;
		return true;
	}
	return false;
};
bool hora::setS(int vs){
	if( vs >= 0 && vs < 60){
		s = vs;
		return true;
	}
	return false;
};
/*
hora hora::operator+(hora){
	asdasd;
};
*/