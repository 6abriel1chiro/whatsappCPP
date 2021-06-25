#pragma once
#include "ListaGenerica.h"
#include "Mensaje.h"
class Chat
{
private:
	long numContacto;
	ListaGenerica<Mensaje> mensajes;



public:
	Chat(long numContacto);
	ListaGenerica<Mensaje>& GetMsgs();
	void mostrar();
	static void mostrarT(Chat* c);
	string toString();
	~Chat();





};

