#include "Archivo.h"

Archivo::Archivo(long telfAutor , string name , string ext): Mensaje(telfAutor)
{
	this->name = name;
	this->ext = ext;
}

void Archivo::mostrar()
{
	Mensaje::mostrar();
	cout << tipo;
	cout << name;
	cout << ext;
}

void Archivo::mostrarT(Archivo* m)
{
	m->mostrar();
}

string Archivo::toString()
{

	stringstream ss;
	ss << Mensaje::toString() << ",tipo:" << tipo << ",nombre:" << name << ",ext:" << ext;
	return ss.str();
}



Archivo::~Archivo()
{
}
