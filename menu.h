
using namespace std;
void menu(){
    string menu_1 = "------------------------------------------------"
                    "\n1| Cadena a nombre propio "
                    "\n2| Numero de veces de palabra en una cadena"
                    "\n3| Encriptar cadena"
                    "\n4| Desencriptar cadena"
                    "\n5| Insertar caracteres por izquierda o por derecha"
                    "\n6| Borrar caracteres de una cadena"
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

        }else if (opc == 2){

        }else if (opc == 3){

        }else if (opc == 4){

        }else if (opc == 5){

        }else if (opc == 6){

        }else if (opc == 7){

        }else if (opc == 8){

        }else if (opc == 9){

        }else if (opc == 10){

        }else if (opc == 0){
            printf("----Hasta pronto!!!----");
        }else{
            printf("****Ingrese una opción valida****\n");
        }

    } while (opc != 0);
}