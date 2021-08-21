//
// Created by juanc on 20/08/2021.
//

#ifndef TRABAJOCOLABORATIVO2_MODULO_3_H
#define TRABAJOCOLABORATIVO2_MODULO_3_H

#endif //TRABAJOCOLABORATIVO2_MODULO_3_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <regex>
#include <cctype>

using namespace std;

void programa8();
void programa9();
void izquierdaPrograma9(string,string);
void derechaPrograma9(string,string);
void programa10();

void programa8(){

    cout<<"------------ Diferencia entre dos cadenas ------------"<<endl;
    string cadena1,cadena2,resultado;

    cout<<"Ingrese la cadena de texto 1 :";
    getline(cin,cadena1);

    cout<<"Ingrese la cadena de texto 2 :";
    getline(cin,cadena2);

    char caracter1,caracter2;
    for (int i=0; i < cadena2.size(); i++) {
        for (int j = 0; j<cadena1.size();j++){
            if(cadena1[j] != ' '){
                caracter1 = toupper(cadena1[j]);
                caracter2 = toupper(cadena2[i]);
                if (caracter2 == caracter1){
                    cadena1[j]=';';
                }
            }
        }
    }

    int aux=0;
    for (int i=0; i < cadena1.size(); i++){
        if(cadena1[i] != ';'){
            resultado += cadena1[i];
            aux++;
        }
    }

    cout<<"Cadena final : "<<resultado<<endl;
    cout<<"------------------------------------------------"<<endl;
}

void programa9(){

    cout<<"---------- Borrar caracteres por izquiera o por derecha ----------"<<endl;
    string cadena1,cadena2;

    cout<<"Ingrese la cadena de texto 1 :";
    getline(cin,cadena1);

    cout<<"Ingrese la cadena de texto 2 :";
    getline(cin,cadena2);

    bool continuar = true;
    unsigned int opc;
    while (continuar==true){
        cout<<"Desea borrar los caracteres por el lado : "<<endl;
        cout<<"1. Derecho"<<endl;
        cout<<"2. Izquierdo"<<endl;
        cin>>opc;
        cin.ignore();
        switch (opc) {
            case 1:
                derechaPrograma9(cadena1,cadena2);
                continuar=false;
                break;

                case 2:
                    izquierdaPrograma9(cadena1,cadena2);
                    continuar=false;
                    break;

                    default:
                        cout<<"Opcion no valida"<<endl;
                        break;
        }

    }

}

void izquierdaPrograma9(string cadena1,string cadena2){
    string resultado;

    char caracter1,caracter2;
    int indicador;
    for(int i=0; i < cadena1.size(); i++){
        indicador=0;
        for (int j=0; j < cadena2.size(); j++){
            if(cadena1[i] != ' '){
                caracter1 = toupper(cadena1[i]);
                caracter2 = toupper(cadena2[j]);
                if (caracter1 == caracter2){
                    cadena1[i]=';';
                    indicador++;
                }
            }else{
                indicador++;
            }
        }
        if(indicador==0){
            i=1000000;
        }
    }

    int aux=0;
    for (int i=0; i < cadena1.size(); i++){
        if(cadena1[i] != ';'){
            resultado += cadena1[i];
            aux++;
        }
    }

    cout<<"Cadena final : "<<resultado<<endl;
    cout<<"------------------------------------------------"<<endl;
}

void derechaPrograma9(string cadena1,string cadena2){
    string resultado;

    char caracter1,caracter2;
    int indicador;
    for(int i= cadena1.size()-1; i >=0; i--){
        indicador=0;
        for (int j=0; j < cadena2.size(); j++){
            if(cadena1[i] != ' '){
                caracter1 = toupper(cadena1[i]);
                caracter2 = toupper(cadena2[j]);
                if (caracter1 == caracter2){
                    cadena1[i]=';';
                    indicador++;
                }
            }else{
                indicador++;
            }
        }
        if(indicador==0){
            i=-1000000;
        }
    }

    int aux=0;
    for (int i=0; i < cadena1.size(); i++){
        if(cadena1[i] != ';'){
            resultado += cadena1[i];
            aux++;
        }
    }

    cout<<"Cadena final : "<<resultado<<endl;
    cout<<"------------------------------------------------"<<endl;
}

void programa10(){

    cout<<"---------- Validar correo electronico ----------"<<endl;
    string email;
    cout<<"Ingrese e-mail : ";
    getline(cin,email);

    if (regex_match(email, regex("([a-z]+)([_.a-z0-9]*)([a-z0-9]+)(@)([a-z]+)([.a-z]+)([a-z]+)"))){
        cout<<"El correo es correcto"<<endl;
    }else{
        cout<<"El correo es incorrecto"<<endl;
    }
    cout<<"------------------------------------------------"<<endl;
}
