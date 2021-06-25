#include "Grupo.h"

Grupo::Grupo(string nombre)
{
	this->nombre = nombre;
}

string Grupo::toString()
{

	int counter = 0;
	stringstream ss;
	Nodo<Mensaje>* aux = msgs.getFirst();
	ss << "{nombre:" << nombre << ",chats:[{";
	while (aux != NULL)
	{
		ss << aux->getDato()->toString();
		counter++;
		if (counter < msgs.getLen())
		{
			ss << ",";
		}
		aux = aux->getNext();
	}
	ss << "]}";
	return ss.str();
}

Grupo::~Grupo()
{
}

void Grupo::enviarMensaje(Mensaje* m)
{
msgs.registrar(m);

}

void Grupo::agregarParticipante(long telf)
{
	Usuario* usr = new Usuario(telf);
	users.registrar(usr);

}
