//
// Created by Melissa Marián Granados Gómez on 01/04/18.
//

#include "Fracción.h"


Fracción::Fracción(){
    this->denomidador=denomidador;
    this->numerador=numerador;
}
Fracción::Fracción(int numerador, int denominador){
    this->numerador=numerador;
    this->denomidador=denominador;
}
Fracción operator + (const Fracción &N1, const Fracción &N2) {
    Fracción Fr;
    Fr.denomidador= N1.denomidador * N2.denomidador;
    Fr.numerador= N1.numerador * N2.denomidador + N2.numerador * N1.denomidador;
    return Fr;
}
Fracción operator - (const Fracción &N1, const Fracción &N2){
    Fracción Fr;
    Fr.denomidador= N1.denomidador * N2.denomidador;
    Fr.numerador= N1.numerador * N2.denomidador - N2.numerador * N1.denomidador;
    return Fr;
}
Fracción operator * (const Fracción &N1, const Fracción &N2){
    Fracción Fr;
    Fr.denomidador= N1.denomidador * N2.denomidador;
    Fr.numerador= N1.numerador * N2.numerador;
    return Fr;
}
Fracción operator / (const Fracción &N1, const Fracción &N2) {
    Fracción Fr;
    Fr.denomidador = N1.denomidador * N2.numerador;
    Fr.numerador = N1.numerador * N2.denomidador;
    return Fr;
}
//Comparadores logicos <,>,<=,>=, ==,!=
bool operator < (const Fracción &N1, const Fracción &N2){
    float a,b;
    a = N1.numerador / N1.denomidador;
    b = N2.numerador / N2.denomidador;

    return a<b;
}
bool operator > (const Fracción &N1, const Fracción &N2){
    float a,b;
    a= N1.numerador / N1.denomidador;
    b= N2.numerador / N2.denomidador;

    return a>b;
}
bool operator  <= (const Fracción &N1, const Fracción &N2){
    float a,b;
    a= N1.numerador / N1.denomidador;
    b= N2.numerador / N2.denomidador;

    return a<=b;
}
bool operator >=  (const Fracción &N1, const Fracción &N2){
    float a,b;
    a= N1.numerador / N1.denomidador;
    b= N2.numerador / N2.denomidador;

    return a>=b;
}
bool operator == (const Fracción &N1, const Fracción &N2){
    float  a,b;
    a= N1.numerador / N1.denomidador;
    b= N2.numerador / N2.denomidador;
    return a==b;
}
bool operator != (const Fracción &N1, const Fracción &N2){
    float a,b;
    a= N1.numerador / N1.denomidador;
    b= N2.numerador / N2.denomidador;
    return a!=b;
}
std:: string Fracción::To_String() {
    return std::to_string(numerador)+"/"+ std::to_string(denomidador);
}

