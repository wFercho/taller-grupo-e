#include <sstream>
#include <ctype.h>

using namespace std;

void verCadena(string newCadena[], int veces, string cadena, char side){
    if(side=='I'){
        for (int i=0; i<veces; i++) {
            cout<<newCadena[i];
        }

        cout<<cadena;
    } else {
        cout << cadena;
        for (int i = 0; i < veces; i++) {
            cout << newCadena[i];
        }
    }
    cout<<endl;

}

string tolowercase(string cadena){
    //[65,122] diferencia 32 entre min y may, 164->ñ, 165->Ñ

    string newCadena;
    for(int i=0; i<cadena.size(); i++) {
        if(cadena[i]>=65 & cadena[i]<=122){
            if(cadena[i]<=90){
                newCadena +=cadena[i]+32;
            }else{
                newCadena += cadena[i];
            }
        } /*else if(cadena[i]==164){

        }*/else if(cadena[i]==165){
            newCadena += cadena[i]-1;
        }else{
            newCadena += cadena[i];
        }
    }
    return newCadena;
}

//Insertar caracteres por izquierda o por derecha
void insert_char_left_right(){
    //char c, string cadena, int veces, char side
    string new_cadena = "bla";
    char c;
    int veces;
    char side;
    string cadena;


    cout << "Ingrese la cadena" << endl;
    cin >> cadena;

    cout << "Ingrese el caracter" << endl;
    cin >> c;

    do{
        fflush(stdin);
        cout<<"Ingrese el lado por el que se insertará el caracter\nI|Izquierda   D|Derecha"<<endl;
        cin>>side;
        if(side !='I' && side !='D'){
            cout<<"****Ingrese una opción valida***"<<"\nI o D"<<endl;
        }else{
            do {
                cout<<"Ingrese el número de veces que se repetirá el caracter"<<endl;
                cin>>veces;
                if(isdigit(veces)){
                    cout<<"****Debe ingresar un número****"<<endl;
                }
            } while (isdigit(veces));
        }
    }while(side !='I' && side !='D');

    string newCadena[veces];
    for(int i=0; i<veces; i++) {
        newCadena[i] = c;
    }
    verCadena(newCadena,veces, cadena, side);


};

//Borar caracateres de una cadena
void delete_char(){
    char c;
    string cadena;
    string newCadena;

    cout << "Ingrese la cadena" << endl;
    cin >> cadena;

    cout << "Ingrese el caracter que desea eliminar" << endl;
    fflush(stdin);
    cin >> c;

    for(int i=0; i<cadena.size(); i++){
        if(cadena[i]!=c){
            newCadena += cadena[i];
        }
    }
    cout<<newCadena<<endl;
}

//Interseccion entre cadenas
void interseccion_cadenas() {


    string cadena1;
    string cadena2;
    string cadenaFiltrada;

    cout<<"Ingrese la cadena 1"<<endl;
    getline(cin,cadena1);
//    cin>>cadena1;
    cout<<"Ingrese la cadena 2"<<endl;
    fflush(stdin);
//    cin>>cadena2;
    getline(cin,cadena2);

    string newCadena1 = tolowercase(cadena1);
    string newCadena2 = tolowercase(cadena2);

    int k = 0;
    for (int i = 0; i <newCadena1.size(); ++i) {
        for (int j = 0; j < newCadena2.size(); ++j) {
            if (newCadena1[i] == newCadena2[j] & cadenaFiltrada.size()!= 0) {
                for (k; k < cadenaFiltrada.size(); ++k) {
                    if (newCadena1[i] == cadenaFiltrada[k]) {
                        break;
                    } else{
                        cadenaFiltrada += newCadena1[i];
                    }
                }
                break;
            }else if(newCadena1[i] == newCadena2[j] & cadenaFiltrada.size() == 0){
                cadenaFiltrada += newCadena1[i];
                break;
            }
        }
    }
    cout<<"Resultado de la intersección: "<<cadenaFiltrada<<endl;

}

