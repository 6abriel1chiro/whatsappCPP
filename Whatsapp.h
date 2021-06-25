#pragma once
#include "ArrayGenerico.h"
#include "Texto.h"
#include "Usuario.h"
#include "Grupo.h"
class Whatsapp
{
private:
	//listaUsuarios
	//listaGrupos
	ListaGenerica<Usuario> usuarios;
	ListaGenerica<Grupo> grupos;

public:
	Whatsapp();
	~Whatsapp();

	void registrarUsuario(long telf, string nombre);
	void enviarMensaje(Mensaje* t, long telfReceptop);
	void enviarMensaje(string nom,Mensaje* m);

	

	Usuario* getUsuario(long telf);
	string usuariosToString();

	void crearGrupo(string nombre);
	void agregarParticipante(long telf, string nomGrupo);
	string gruposToString();




};

