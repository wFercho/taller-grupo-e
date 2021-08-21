//
// Created by yeiso on 20/08/2021.
//

#ifndef CLASESPRUEBA_MODULO_1_H
#define CLASESPRUEBA_MODULO_1_H

#include <string>
#include <algorithm>

using std::transform; using std::toupper;

class Modulo_1 {
public:
    Modulo_1();

    //nombre propio
    std::string ownName(std::string);

    //numero de veces que se repite la palabra
    int wordFrequency(std::string, std::string);

    //encriptar
    std::string encrypt(std::string);

    //desencriptar
    std::string decrypt(std::string);
};


#endif //CLASESPRUEBA_MODULO_1_H
