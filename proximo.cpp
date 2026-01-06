#include "objeto.h"
#include "global.h"
#include <cstdlib>   
#include <ctime> 
#include <iostream>
#include <windows.h>

void proximo(){
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    dias +=1;

    int numero = std::rand() % 20;
    int val = std::rand() % 4;

    int f = pessoas / 100;
    int j = pessoas / 50;

    pessoas += f;

    int v = dias % 3;
    int h = dias % 7;

    if (fome == true){
     dayf += 1;
    }
    if (praga == true){
     dayp += 1;
    }
    

    if(fome == false){
    comida -= f;
    comida -= quartel.getFome() * quartel.getNivelAtual();
    }
    
    else if(fome == true){
    comida -= j;
    comida -= quartel.getFome() * quartel.getNivelAtual();
    }

    

    if (v == 0){
      moeda += minas.getReceber() * minas.getUni();

        if(praga == false){
            comida += fazenda.getReceber() * fazenda.getUni();
        }
        else if (praga == true){
            comida += (fazenda.getReceber() * fazenda.getUni()) / 3;
        }   
    }

    if(h == 0){
        if (!(cDI == 7) && val == 0){cDI += 1; }
        else if (!(cDP == 7) && val == 1){ cDP += 1;}
        else if (!(cDF == 7) && val == 2){cDF += 1;}
    }


    if ( cDI % 7 >= 0 && numero == 5){
    int moedaR = 2*moeda /3;
    int pessoasM = 2*pessoas /3;
    int comidaR = 2*comida /3;

    int resulG =  guerreiro.getPorce() * guerreiro.getQuantidade();
    int resulA =  arqueiro.getPorce() * arqueiro.getQuantidade();
    int resulM = mago.getPorce() * mago.getQuantidade() ;
    int resuC = cavaleiro.getPorce() * cavaleiro.getQuantidade() ;

    int resul = resuC + resulA + resulM + resulG;
    
    int somaR = moedaR - ((moedaR / 100) * resul);
    int somaP = pessoasM - ((pessoasM / 100) * resul);
    int somaC = comidaR - ((comidaR / 100) * resul);

    moeda -= somaR;
    pessoas -= somaP;
    comida -= somaC;

    std::cout << "sua aldeia foi invadida " << '\n';
    std::cout << "eles roubaram " << somaR << " de moeda e " << somaC << '\n';
    std::cout << "e mataram " << somaP  << '\n';
    Sleep(5000);
    system("cls");

    
   }
    else if ( cDP % 7 >= 0 && numero == 16){
        praga = true;
        std::cout << "iniciou-se uma praga severa nas colheitas " << '\n';
        Sleep(4000);
        system("cls");
    }
    else if ( cDF % 7 >= 0 && numero == 9){
        fome = true;
        std::cout << "iniciou-se uma fome severa " << '\n';
        Sleep(4000);
        system("cls");
    }

     
    if (dayf == 14){
        fome = false;
        dayf = 0;
        std::cout << "acabou fome severa " << '\n';
        Sleep(4000);
        system("cls");
    }
    if(dayp == 21){
        praga = false;
        dayp = 0;
        std::cout << "acabou a praga severa nas colheitas " << '\n';
        Sleep(4000);
        system("cls");
    }
}
