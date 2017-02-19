#pragma once
class Figura
{

private:
	int x, y;

public:
	virtual char desenhar() const = 0;

	Figura(int, int);
	~Figura();

	void setPosicao(int, int);
	int getX() const;
	int getY() const;
};

