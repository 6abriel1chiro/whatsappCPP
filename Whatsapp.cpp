#include "Whatsapp.h"

Whatsapp::Whatsapp()
{
}

Whatsapp::~Whatsapp()
{
}

void Whatsapp::registrarUsuario(long telf, string nombre)
{
	Usuario* aux = new Usuario(telf,nombre);
	usuarios.registrar(aux);

}

void Whatsapp::enviarMensaje(Mensaje* t, long telfReceptop)
{
	Usuario* aux = new Usuario(t->getTelf());
	usuarios.buscar(aux)->enviarMensaje(t,telfReceptop);



}

void Whatsapp::enviarMensaje(string nom, Mensaje* m)
{
	Grupo* aux = new Grupo(nom);
	grupos.buscar(aux)->enviarMensaje(m);



}

Usuario* Whatsapp::getUsuario(long telf)
{
	Usuario* aux = new Usuario(telf);
	if (usuarios.buscar(aux)!=NULL)
	{
		return aux;
	}
    return nullptr;
}

string Whatsapp::usuariosToString()
{
	int counter = 0;
	stringstream ss;
	Nodo<Usuario>* aux = usuarios.getFirst();
	ss << "{usuarios:[";
	while (counter>0)
	{
	

		ss << aux->getDato()->toString();
		counter--;
		if (usuarios.getLen()-1==counter)
		{
			ss << ",";
		}
		aux = aux->getNext();
	}
	ss << "]}";
	return ss.str();
}

void Whatsapp::crearGrupo(string nombre)
{
	Grupo* g = new Grupo(nombre);
	grupos.registrar(g);
}

void Whatsapp::agregarParticipante(long telf, string nomGrupo)
{

	Grupo* g = new Grupo(nomGrupo);
	if (grupos.buscar(g) != NULL)
		grupos.buscar(g)->agregarParticipante(telf);





}

string Whatsapp::gruposToString()
{
    return string();
}
