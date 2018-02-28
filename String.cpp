//
// Created by Javier on 27/2/2018.
//

#include "String.h"
#include <iostream>
using namespace std;
String :: String(){
    this->valor="";
}
String:: String(string v){
    setValor(v);
}

string String:: getValor() {
    return valor;
}

void String:: setValor(string valor) {
    this->valor = valor;
}
virtual Tipo String:: getTipo() {
    return T_string;
}
 virtual void String:: imprimir() {
    cout<<"Valor: "<<getValor()<<endl<<"\nTipo: "<<getTipo()<<endl;
}
