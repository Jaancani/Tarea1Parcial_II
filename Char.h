//
// Created by Javier on 27/2/2018.
//

#ifndef ARREGLOOBJETOS_CHAR_H
#define ARREGLOOBJETOS_CHAR_H

#include "Objetos.h"

class Char : public Objetos {
private:
    char valor;
public:

    Char(char );
    ~Char();

    char getValor();
    void setValor(char valor);

    virtual Tipo getTipo();
    virtual void imprimir();
};



#endif //ARREGLOOBJETOS_CHAR_H
