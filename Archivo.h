#pragma once
#include "Mensaje.h"
class Archivo :
    public Mensaje
{


private: 
    string name;
    string tipo = "Archivo";
    string ext;

public:

    Archivo(long telfAutor , string name, string ext);
    void mostrar();
    static void mostrarT(Archivo* m);
    string toString();

    ~Archivo();


};

