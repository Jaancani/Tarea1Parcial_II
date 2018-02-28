//
// Created by Javier on 27/2/2018.
//

#include "Integer.h"
#include <iostream>
using namespace std;

Integer ::Integer(int n) {
    setValor(n);
}

int Integer::getValor(){
    return valor;
}

void Integer::setValor(int valor) {
    Integer::valor = valor;
}
virtual Tipo Integer::getTipo(){
    return T_int;
}
virtual void Integer ::imprimir() {
    cout<<"Valor: "<<getValor()<<endl<<"\nTipo: "<<getTipo()<<endl;
}
