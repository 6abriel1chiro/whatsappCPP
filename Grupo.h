#pragma once
#include "Usuario.h"
#include "ListaGenerica.h"
class Grupo
{


private: 
	ListaGenerica<Mensaje> msgs;
	ListaGenerica<Usuario> users;
	string nombre;


public:
	Grupo(string nombre);
	string toString();

	~Grupo();

	void enviarMensaje(Mensaje* m);
	void agregarParticipante(long telf);






};

