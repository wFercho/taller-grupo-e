//
// Created by yeiso on 20/08/2021.
//

#include "Modulo_1.h"

#include <iostream>

using namespace std;

Modulo_1::Modulo_1() {}

std::string Modulo_1::ownName(std::string name) {
    string aux = "";
    for (int i = 0; i < name.length(); i++) {
        if (i == 0) {
            name[0] = toupper(name[0]);
            if (name.substr(i, 1) == " ")name[i + 1] = toupper(name[i + 1]);
        } else if (name.substr(i, 1) == " ") {
            name[i + 1] = toupper(name[i + 1]);
        }

    }

    return name;
}

int Modulo_1::wordFrequency(std::string wordSearch, std::string stringText) {
    int cont = 0;
    string aux = "";
    stringText += " ";
    if (wordSearch.length() > stringText.length()) {
        return cont;
    } else if (wordSearch.length() == stringText.length()) {
        if (wordSearch == stringText) { return cont; }
    } else {

        for (int i = 0; i < (stringText.length()); i++) {
            if (stringText.substr(i, 1) != " ") {
                aux += stringText.substr(i, 1);
            } else {
                if (wordSearch == aux) { cont++; }
                aux = "";
            }

        }

        return cont;
    }


}

std::string Modulo_1::encrypt(std::string _encrypt) {
    for (int i = 0; i < _encrypt.length(); ++i) {
        _encrypt[i] = _encrypt[i] + 2;
    }
    return _encrypt;
}

std::string Modulo_1::decrypt(std::string _decrypt) {
    for (int i = 0; i < _decrypt.length(); ++i) {
        _decrypt[i] = _decrypt[i] - 2;
    }
    return _decrypt;
}









