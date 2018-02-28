//
// Created by Javier on 27/2/2018.
//

#ifndef ARREGLOOBJETOS_STRING_H
#define ARREGLOOBJETOS_STRING_H

#include "Objetos.h"
#include <iostream>
using namespace std;


class String : public Objetos {
private:
    string valor;
public:
    String ();
    String(string);
    ~String();

    string getValor();
    void setValor(string valor);

    virtual Tipo getTipo();
    virtual void imprimir();
};


#endif //ARREGLOOBJETOS_STRING_H
