#include "Professor.h"
#include <iostream>
using std::cout;
using std::endl;
Professor::Professor(string a): Pessoa(a){};
Professor::~Professor(){};
void Professor::oqFaz() const { cout << "leciona!!"<< endl; };
void Professor::leciona() const {cout<< "writes gibberish at the blackboard" << endl;};