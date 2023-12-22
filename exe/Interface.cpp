#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Interface.h"

using std::string;
using std::istringstream;
using std::ifstream;
using std::getline;
using namespace term;

void Interface::startInt(){
    string comando;
    Terminal::instance();

    Window w = Window(0, 0, 30, 25,2);
    Window s = Window(30, 0, 90, 25,2);
    Window d = Window(0, 25, 120, 5,2);

    w << set_color(1) << "1";
    s << set_color(2) << "2";



    while(true){
        w.clear();
        s.clear();
        d.clear();



        d << move_to(0, 0) << " comando > ";
        d >> comando;

        if(comando == "sair"){
            break;
        }

        validaComando(comando, d);

    }
}


//For example, if comando is "avanca 10 20 30", after this line:
//
//com would be "avanca"
//x would be "10"
//y would be "20"
//z would be "30"
void Interface::validaComando(const string& comando, Window& d){

    string com,x,y,z;

    istringstream iss(comando);
    iss >> com >> x >> y >> z; //input string stream (iss)

    //comandos para o tempo simulado
    if(comando == "prox"){
        d << "comando valido";
    }
    else if(com == "avanca")
    {
        if (!x.empty() && y.empty() && z.empty()) {
            d << "comando valido";
        } else {
            d << "erro, comando invalido";
        }
    }
    //comandos para criacao de habitacao e zonas
    else if(com == "hnova")
    {
        if (!x.empty() && !y.empty() && z.empty()) {
            d << "comando valido";
        } else {
            d << "erro, comando invalido";
        }
    }
    else if(comando == "hrem")
    {
        d << "comando valido";
    }
    else if(com == "znova")
    {
        if (!x.empty() && !y.empty() && z.empty()) {
            d << "comando valido";
        } else {
            d << "erro, comando invalido";
        }
    }
    else if(com == "zrem")
    {
        if (!x.empty() && y.empty() && z.empty()) {
            d  << "comando valido";
        } else {
            d  << "erro, comando invalido";
        }
    }
    else if(comando == "zlista")
    {
        d  << "erro, comando invalido";
    }
    //comandos internos a zonas de habitacao
    else if(com == "zcomp")
    {
        if (!x.empty() && y.empty() && z.empty()) {
            d  << "comando valido";
        } else {
            d  << "erro, comando invalido";
        }
    }
    else if(com == "zprops")
    {
        if (!x.empty() && y.empty() && z.empty()) {
            d  << "comando valido";
        } else {
            d  << "erro, comando invalido";
        }
    }
    else if(com == "pmod")
    {
        if (!x.empty() && !y.empty() && !z.empty()) {
            d  << "comando valido";
        } else {
            d  << "erro, comando invalido";
        }
    }
    else if(com == "cnovo")
    {
        if (!x.empty() && !y.empty() && !z.empty()) {
            d  << "comando valido";
        } else {
            d  << "erro, comando invalido";
        }
    }
    else if(comando == "crem")
    {
        if (!x.empty() && !y.empty() && !z.empty()) {
            d  << "comando valido";
        } else {
            d  << "erro, comando invalido";
        }
    }
    //comandos para processadores de regras
    else if(comando == "rnova")
    {

    }
    else if(com == "pmuda")
    {
        if (!x.empty() && !y.empty() && !z.empty()) {
            d  << "comando valido";
        } else {
            d  << "erro, comando invalido";
        }
    }
    else if(com == "rlista")
    {
        if (!x.empty() && !y.empty() && z.empty()) {
            d <<  "comando valido";
        } else {
            d <<  "erro, comando invalido";
        }
    }
    else if(com == "rrem")
    {
        if (!x.empty() && !y.empty() && !z.empty()) {
            d << "comando valido";
        } else {
            d <<  "erro, comando invalido";
        }
    }
    else if(com == "asoc")
    {
        if (!x.empty() && !y.empty() && !z.empty()) {
            d  << "comando valido";
        } else {
            d  << "erro, comando invalido";
        }
    }
    else if(com == "ades")
    {
        if (!x.empty() && !y.empty() && !z.empty()) {
            d  << "comando valido";
        } else {
            d  << "erro, comando invalido";
        }
    }
        //comandos para interagir com aparelhos
    else if(com == "acom")
    {
        if (!x.empty() && !y.empty() && !z.empty()) {
            d  << "comando valido!!";
        } else {
            d  << "erro, comando invalido";
        }
    }
        //comandos para copia/recuperacao de processadores de regras
    else if(com == "psalva")
    {
        if (!x.empty() && !y.empty() && !z.empty()) {
            d  << "comando valido";
        } else {
            d  << "erro, comando invalido";
        }
    }
    else if(com == "prepoe")
    {
        if (!x.empty() && y.empty() && z.empty()) {
            d  << "comando valido";
        } else {
            d  << "erro, comando invalido";
        }
    }
    else if(com == "prem")
    {
        if (!x.empty() && y.empty() && z.empty()) {
            d  << "erro, comando invalido";
        } else {
            d  << "erro, comando invalido";
        }
    }
    else if(com == "plista")
    {
        d  << "comando valido";
    }
    //comandos adicionais de carater geral
    else if(com == "exec")
    {
        if (!x.empty() && y.empty() && z.empty()) {
            leFicheiro(x,d);
        } else {
            d  << "erro, comando invalido";
        }
    }
    else
    {
        d << "erro, comando invalido";
    }
    d.getchar();
}


bool Interface::leFicheiro(const string& nomeFicheiro, Window& d) {
    ifstream arquivo(nomeFicheiro);

    if (!arquivo) {
        d << "Erro ao abrir o ficheiro";
        return false;
    }

    for (string aux; getline(arquivo, aux);) {
        validaComando(aux, d);
    }

    arquivo.close();
    return true;
}



