//
// Created by Javier on 27/2/2018.
//

#include "Char.h"
#include <iostream>
using namespace std;

Char :: Char (char v){
    setValor(v);
}

char Char ::getValor(){
    return valor;
}

void Char ::setValor(char valor) {
    Char::valor = valor;
}
virtual Tipo Char::getTipo() {
    return T_char;
}
virtual void Char ::imprimir() {
    cout<<"Valor: "<<getValor()<<endl<<"\nTipo: "<<getTipo()<<endl;
}
