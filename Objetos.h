//
// Created by Javier on 27/2/2018.
//

#ifndef ARREGLOOBJETOS_OBJETOS_H
#define ARREGLOOBJETOS_OBJETOS_H

enum Tipo{T_char ,T_string, T_int};

class Objetos {
public:
    virtual Tipo getTipo()=0;
    virtual void imprimir()=0;

};


#endif //ARREGLOOBJETOS_OBJETOS_H
