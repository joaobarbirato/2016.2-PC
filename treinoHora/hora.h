#ifndef HORA_H
#define HORA_H

#include <iostream>

using std::ostream;
using std::istream;

class hora{
private:
	int h;
	int m;
	int s;
public:
	hora(int=0, int=0, int=0);
	~hora();

	int getH() const;
	int getM() const;
	int getS() const;

	bool setH(int);
	bool setM(int);
	bool setS(int);

	hora operator+(hora);

	friend ostream & operator<<(ostream & , const hora);
	friend istream & operator>>(istream &, hora &);
};

#endif