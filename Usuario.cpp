#include "Usuario.h"


Usuario::Usuario(long telf, string nombre) : chats()
{
	this->nombre = nombre;
	this->telf = telf;

}

Usuario::Usuario(long telf)
{
	this->telf = telf;

}

Usuario::~Usuario()
{


}

void Usuario::enviarMensaje(Mensaje* m, long telf)
{
	Chat* aux;
	aux = new Chat(telf);

	if (!(chats.isEmpty()))
	{
		if (chats.buscar(aux) != NULL)
		{
			chats.buscar(aux)->GetMsgs().registrar(m);
			return;
		}
	}
	chats.registrar(aux);
	chats.buscar(aux)->GetMsgs().registrar(m);

}

void Usuario::recibirMensaje(Mensaje* m)
{
	Chat* aux;
	aux = new Chat(telf);

	if (!(chats.isEmpty()))
	{
		if (chats.buscar(aux) != NULL)
		{
			chats.buscar(aux)->GetMsgs().registrar(m);
			return;
		}
	}
	chats.registrar(aux);
	chats.buscar(aux)->GetMsgs().registrar(m);



}

void Usuario::mostrar()
{
	cout << "nombre : " << endl;
	cout << nombre << endl;
	cout << "telf  : " << telf << endl;
}

void Usuario::mostrarT(Usuario* p)
{
	if (p != NULL)
	{
		p->mostrar();
	}
	else { cout << " vacio " << endl; }

}

int Usuario::getTelf()
{
	return telf;
}

bool Usuario::operator==(Usuario* Usuario)
{
	return telf == Usuario->telf;
}

bool Usuario::compTelfAsc(Usuario* p1, Usuario* p2)
{
	return p1->getTelf() > p2->getTelf();
}

bool Usuario::compTelfDesc(Usuario* p1, Usuario* p2)
{
	return p1->getTelf() < p2->getTelf();
}

string Usuario::toString()
{
	int counter = 0;
	stringstream ss;
	Nodo<Chat>* aux = chats.getFirst();
	ss << "{telefono:" << telf << ",nombre:" << nombre << ",chats:[{";
	while (aux != NULL)
	{
		ss << aux->getDato()->toString();
		counter++;
		if (counter < chats.getLen())
		{
			ss << "},";
		}
		aux = aux->getNext();
	}
	ss << "]}";
	return ss.str();
	/*
		stringstream ss;
	ss << "{clientes:[";

	for (int i = 0; i < clientes.getSize(); i++)
	{
		ss << clientes[i]->toString();
		if (i<clientes.getSize()-1)
			ss << ",";
	}

	ss << "]}";
	return ss.str();*/
}




ListaGenerica<Chat>& Usuario::getChats()
{
	return chats;
}


