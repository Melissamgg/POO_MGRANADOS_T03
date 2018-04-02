//
// Created by Melissa Marián Granados Gómez on 01/04/18.
//

#include <iostream>
#ifndef POO_MGRANADOS_T03_FRACCIÓN_H
#define POO_MGRANADOS_T03_FRACCIÓN_H


class Fracción {
    friend Fracción operator + (const Fracción &N1, const Fracción &N2);
    friend Fracción operator - (const Fracción &N1, const Fracción &N2);
    friend Fracción operator * (const Fracción &N1, const Fracción &N2);
    friend Fracción operator / (const Fracción &N1, const Fracción &N2);
    friend bool operator < (const Fracción &N1, const Fracción &N2);
    friend bool operator > (const Fracción &N1, const Fracción &N2);
    friend bool operator <= (const Fracción &N1, const Fracción &N2);
    friend bool operator >= (const Fracción &N1, const Fracción &N2);
    friend bool operator == (const Fracción &N1, const Fracción &N2);
    friend bool operator != (const Fracción &N1, const Fracción &N2);

public:
    int numerador, denomidador;
//Construtor
    Fracción();
    Fracción(int numerador, int denominador);
    std::string To_String();

};


#endif //POO_MGRANADOS_T03_FRACCIÓN_H
