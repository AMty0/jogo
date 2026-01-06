#include <fstream>
#include <iostream>
#include <cstdlib> 
#include <windows.h>
#include "objeto.h"
#include "global.h"

void manuel (){




    std::ofstream arquivo("salve.txt");

    if (!arquivo.is_open()) {
        std::cerr << "Erro: não foi possivel abrir o save" << "'\n";
                  Sleep(1000);
                  system("cls");
    }

    arquivo << dias << " " << moeda << " " << pessoas << " " 
    << comida << " " << cDI << " " << cDP << " " << cDF  << " "
    << fazenda.getUni() << " " << minas.getUni() << " "
    << quartel.getNivelAtual() << " " << fazenda.getNivelAtual() << " " 
    << minas.getNivelAtual()  <<  " " << guerreiro.getQuantidade()<< " " 
    << arqueiro.getQuantidade() << " " << mago.getQuantidade() << " " 
    << cavaleiro.getQuantidade() << '\n';
 
    arquivo.close();
        std::cout << "o salve foi concluido " << '\n';
        Sleep(1000);
        system("cls");
}


int abrir(){

std::ifstream arquivoEntrada("salve.txt");

 if (arquivoEntrada.is_open()) {

    int qG, qA, qM, qC, nCA, nFA, nMA, sM, sF;

     arquivoEntrada >> dias >> moeda >> pessoas >> 
     comida >> cDI >> cDP >> sF >> sM >> nCA >> nFA >> nMA 
     >> qG >> qA >> qM >>qC;
     arquivoEntrada.close();

        quartel.setNivelAtual(nCA);
        fazenda.setNivelAtual(nFA);
        minas.setNivelAtual(nMA);

        fazenda.setUni(sF);
        minas.setUni(sM);

        guerreiro.setQuantidade(qG);
        arqueiro.setQuantidade(qA);
        mago.setQuantidade(qM);
        cavaleiro.setQuantidade(qC);
             
        std::cout << "deu certo " << '\n';
        Sleep(2000);
        system("cls");
        
        return 0;
 }
  else {
       return 1;
  }
}
