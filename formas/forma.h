#ifndef FORMA_H
#define FORMA_H

class forma{
private:
	int x, y;
public:
	forma(int=0,int=0);
	~forma();
	virtual void desenha() const = 0;
};
#endif