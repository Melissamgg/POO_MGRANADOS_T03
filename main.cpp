#include <iostream>
#include "Fracción.h"
int main() {

    Fracción frac1(9,2);
    Fracción frac2(4,7);
    Fracción add= frac1+frac2;
    Fracción sub= frac1-frac2;
    Fracción mult=frac1*frac2;
    Fracción div= frac1/frac2;

    bool compare_a;
    frac1<frac2? compare_a= true : compare_a= false;
    bool compare_b;
    frac1>frac2? compare_b= false : compare_b= true;
    bool  compare_c;
    frac1<=frac2? compare_c= true : compare_c= false;
    bool  compare_d;
    frac1>=frac2? compare_d= false : compare_d= true;
    bool  compare_e;
    frac1==frac2? compare_e= true : compare_e= true;
    bool compare_f;
    frac1!=frac2? compare_f= true : compare_f= false;

    std::cout<<"\n";
    std::cout << "Total add:"<< add.To_String()<<std::endl;
    std::cout<<"\n";
    std::cout <<  "Total subst:"<< sub.To_String()<<"\n";
    std::cout<<"\n";
    std::cout<< "Total Mult:"<<mult.To_String()<<"\n";
    std::cout<<"\n";
    std::cout<< "Total Div"<<div.To_String()<<"\n";
    //Comparadores
    std::cout<<"FRAC 1 smaller than FRAC 2? "<<"\n";
    std::cout<< frac1.To_String()<<"<"<<frac2.To_String()<<"\n";
    if(compare_a == true){
        std::cout<<"This is True";
    }else{std::cout<<"This is False";}
    std::cout<<"\n";

    std::cout<<"FRAC 1 bigger than FRAC 2? "<<"\n";
    std::cout<< frac1.To_String()<<">"<<frac2.To_String()<<"\n";
    if(compare_b == true){
        std::cout<<"This is True";
    }else{std::cout<<"This is False";}
    std::cout<<"\n";

    std::cout<<"FRAC 1 smaller or equal than FRAC 2? "<<"\n";
    std::cout<< frac1.To_String()<<"<="<<frac2.To_String()<<"\n";
    if(compare_c == true){
        std::cout<<"This is: True";
    }else{std::cout<<"This is False";}
    std::cout<<"\n";

    std::cout<<"FRAC 1 bigger or equal than FRAC 2? "<<"\n";
    std::cout<< frac1.To_String()<<">="<<frac2.To_String()<<"\n";
    if(compare_d == true){
        std::cout<<"This is True";
    }else{std::cout<<"This is False";}
    std::cout<<"\n";

    std::cout<<"FRAC 1 the same as than FRAC 2? "<<"\n";
    std::cout<< frac1.To_String()<<"=="<<frac2.To_String()<<"\n";
    if(compare_e == true){
        std::cout<<"This is True";
    }else{std::cout<< "This is False";}
    std::cout<<"\n";

    std::cout<<"FRAC 1 different of FRAC 2? "<<"\n";
    std::cout<< frac1.To_String()<<"!="<<frac2.To_String()<<"\n";
    if(compare_f == true){
        std::cout<<"This is: True";
    }else{std::cout<<"This is False";}
    std::cout<<"\n";
}