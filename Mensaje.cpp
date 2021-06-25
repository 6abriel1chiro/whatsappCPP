#include "Mensaje.h"

Mensaje::Mensaje(long telfAutor)
{
	this->telfAutor = telfAutor;
}

Mensaje::~Mensaje()
{
}

void Mensaje::mostrar()
{
	cout << telfAutor;
}

string Mensaje::toString()
{


	stringstream ss;
	ss << "autor:" << telfAutor;
	return ss.str();
}

int Mensaje::getTelf()
{
	return telfAutor;
}




