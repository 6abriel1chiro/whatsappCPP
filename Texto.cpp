#include "Texto.h"

Texto::Texto(long fono ,string text):Mensaje(fono)
{
	this->text = text;
}

Texto::~Texto()
{
}

void Texto::mostrar()
{
	cout << tipo;
	Mensaje::mostrar();
	cout << text;
}

void Texto::mostrarT(Texto* t)
{
	t->mostrar();
}

string Texto::toString()
{
	/*
if (paola->toString() == "{telefono:70700001,nombre:Paola,chats:
[{telefono:70700002,mensajes:
[{autor:70700001,tipo:texto,contenido:Mandame la foto},{autor:70700002,tipo:archivo,nombre:Familia,ext:jpg}]},{telefono:70700003,mensajes:[{autor:70700001,tipo:texto,contenido:Como estas?}]}]}")
	*/
	stringstream ss;
	ss << Mensaje::toString() << ",tipo:" << tipo << ",contenido:" << text;
	return ss.str();
}



