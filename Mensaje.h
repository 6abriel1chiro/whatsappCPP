#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Mensaje
{
protected:
	long telfAutor;

public:
	Mensaje(long telfAutor);
	~Mensaje();
	virtual void mostrar();
	virtual string toString();
	int getTelf();

};

