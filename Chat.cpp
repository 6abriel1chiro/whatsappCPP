#include "Chat.h"


Chat::Chat(long numContacto)
{
	this->numContacto = numContacto;

}

ListaGenerica<Mensaje>& Chat::GetMsgs()
{
	return mensajes;
}

void Chat::mostrar()
{
	cout << numContacto;
	
}

void Chat::mostrarT(Chat* c)
{
	c->mostrar();
}

string Chat::toString()
{
	/*
if (paola->toString() == "{telefono:70700001,nombre:Paola,chats:
[{telefono:70700002,mensajes:[{autor:70700001,tipo:texto,contenido:Mandame la foto},{autor:70700002,tipo:archivo,nombre:Familia,ext:jpg}]},{telefono:70700003,mensajes:[{autor:70700001,tipo:texto,contenido:Como estas?}]}]}")
	*/
	int counter = 0;
	Nodo<Mensaje>* aux;
	aux = mensajes.getFirst();
	stringstream ss;
	ss << "{telefono:" << numContacto << ",mensajes:[{";
	while (aux != NULL)
	{
		ss << aux->getDato()->toString();
		counter++;
		if (counter < mensajes.getLen())
		{
			ss << "},";
		}
		ss << "}";
		aux = aux->getNext();
	}
ss << "]}";
	return ss.str();
}

Chat::~Chat()
{
}
