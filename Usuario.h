#pragma once
#include "Mensaje.h"
#include "Chat.h"
#include "ListaGenerica.h"
#include <sstream>
using namespace std;
class Usuario
{


private:
	string nombre;
	long telf;
	ListaGenerica<Chat> chats;




public:
	Usuario(long telf,string nombre);
	Usuario(long telf);
	~Usuario();
	void enviarMensaje(Mensaje* m, long telf);

	void recibirMensaje(Mensaje* m);

	void mostrar();
	static void mostrarT(Usuario* p);
	int getTelf();
	bool operator==(Usuario* Usuario);


	static bool compTelfAsc(Usuario* p1, Usuario* p2);
	static bool compTelfDesc(Usuario* p1, Usuario* p2);

	string toString();



	ListaGenerica<Chat>& getChats();









};

