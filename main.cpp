#include <iostream>
# include "Objetos.h"
#include"Integer.h"
#include "String.h"
#include "Char.h"

using namespace std;

int main() {

    Objetos *array[5];
    int cont=0 , in=0,c=0,s=0, op=0;
    while(cont <5){
        cout<<endl<<"1.INTEGER \n2.CHAR \n3.STRING \nIngrese tipo: ";
        cin>>op;

        switch (op){
            case 1:
                int valor;
                cout<<"Ingrese el valor: ";
                cin>>valor;
                array[cont]=new Integer(valor);
                cont++;
                in ++;
                break;
            case 2:
                char valor_c;
                cout<<"Ingrese el valor: ";
                cin>>valor_c;
                array[cont]=new Char(valor_c);
                cont++;
                c ++;
                break;
            case 3:
                string valor_s;
                cout<<"Ingrese el valor: ";
                cin>>valor_s;
                array[cont]=new String(valor_s);
                cont++;
                s ++;
                break;
        }
    }



    for(int i=0;i<5;i++){
        array[i]->imprimir();
    }

    cout<<endl;
    cout<<"Integers: "<<in<<endl;
    cout<<"Strings: "<<s<<endl;
    cout<<"Chars: "<<c<<endl;


    return 0;
}