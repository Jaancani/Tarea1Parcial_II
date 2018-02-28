//
// Created by Javier on 27/2/2018.
//

#ifndef ARREGLOOBJETOS_INTEGER_H
#define ARREGLOOBJETOS_INTEGER_H
#include "Objetos.h"

class Integer : public Objetos {
private:
    int valor;
public:
    Integer(int);
    ~Integer();

    int getValor();
    void setValor(int valor);

    virtual Tipo getTipo();
    virtual void imprimir();

};


#endif //ARREGLOOBJETOS_INTEGER_H
