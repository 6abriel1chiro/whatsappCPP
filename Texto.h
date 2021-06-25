#pragma once
#include "Mensaje.h"
class Texto :
    public Mensaje
{
private: 
    string text;
    string tipo = "texto";
public:
    Texto(long fono, string text);
    ~Texto();
    void mostrar();
    static void mostrarT(Texto* t);

    string toString();





};

