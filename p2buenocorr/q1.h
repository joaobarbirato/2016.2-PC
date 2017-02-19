#ifndef Q1_H
#define Q1_H

using namespace std;

class Complexo {
	public:
		Complexo(double R, double I):real(R), imag(I){/*vazio*/};
		Complexo():real(0), imag(0){/*vazio*/};
		~Complexo(){};

		double getr() const;
		double geti() const;
		void setr(double);
		void seti(double);

		Complexo operator+(const int &);
		Complexo & operator++();
		Complexo operator++(int fantasma);

		bool operator!=(const Complexo &);
		bool operator==(const Complexo &);

		friend ostream & operator<<(ostream &, const Complexo &);
		friend Complexo operator+(const double &, const Complexo &);
	private:

		double real, imag;
};

#endif