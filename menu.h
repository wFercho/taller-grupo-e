#include "Modulo_1.h"
#include "modulo_2.h"
#include "modulo_3.h"
#include <conio.h>
using namespace std;

void cartel(){
    cout <<"**************************************************************************"<<endl;
    cout <<"*                    TALLER GRUPAL MANEJO DE CADENAS                     *"<<endl;
    cout <<"**************************************************************************"<<endl;

}
void menu(){
    Modulo_1 obj;
    string menu_1 = "\n------------------------------------------------"
                    "\n1| Cadena a nombre propio "
                    "\n2| Numero de veces de palabra en una cadena"
                    "\n3| Encriptar cadena"
                    "\n4| Desencriptar cadena"
                    "\n5| Insertar caracteres por izquierda o por derecha"
                    "\n6| Borrar caracter de una cadena"
                    "\n7| Intersección entre cadenas"
                    "\n8| Diferencia entre dos cadenas"
                    "\n9| Borrar caracteres por izquierda o derecha"
                    "\n10| Validar correo electrónico"
                    "\n0| Salir"
                    "\n------------------------------------------------";

    unsigned int opc = 0;
    do {
        cout<< menu_1<<endl;
        scanf("%u", &opc);
        fflush(stdin);
        if(opc == 1){
            string text;
            cout<< "--------------------Cadena a nombre propio--------------------"<<endl;

            cout<< "Ingrese texto a comvertir: ";
            getline(cin,text);
            cout <<"Nombre propio: " << obj.ownName(text) << endl;
            getch();

        }else if (opc == 2){
            string text1,text2;
            cout<< "---------------Numero de veces de palabra en una cadena---------------"<<endl;
            cout<< "Ingrese palabra: ";
            getline(cin,text1);
            cout<< "Ingrese Texto: ";
            getline(cin,text2);
            cout <<"La palabra ["<< text1 << "] se repite " << obj.wordFrequency(text1,text2) << endl;
            getch();

        }else if (opc == 3){
            string text;
            cout<< "--------------------Encriptar cadena--------------------"<<endl;

            cout<< "Ingrese texto a encriptar: ";
            getline(cin,text);
            cout <<"Encriptado: " << obj.encrypt(text) << endl;
            getch();
        }else if (opc == 4){
            string text;
            cout<< "--------------------Desencriptar cadena--------------------"<<endl;

            cout<< "Ingrese texto a desencriptar: ";
            getline(cin,text);
            cout <<"Desencriptado: " << obj.decrypt(text) << endl;
            getch();

        }else if (opc == 5){
            insert_char_left_right();
        }else if (opc == 6){
            delete_char();
        }else if (opc == 7){
            interseccion_cadenas();
        }else if (opc == 8){
            programa8();
        }else if (opc == 9){
            programa9();
        }else if (opc == 10){
            programa10();
        }else if (opc == 0){
            printf("----Hasta pronto!!!----");
        }else{
            printf("****Ingrese una opción valida****\n");
        }

    } while (opc != 0);
}
