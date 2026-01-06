#include "objeto.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <limits>

    contrucao::contrucao (int i, int vm, int vp, int na, int nae, int nm)
   : uni(i), valorMoeda(vm), valorPessoa(vp), nivelAtual(na), receber(nae), nivelMax(nm){}

    contrucao::contrucao ( int vm, int vp, int f, int na, int nm)
   :  valorMoeda(vm), valorPessoa(vp), fome(f), nivelAtual(na), nivelMax(nm){}

int contrucao::getUni(){
    return uni;
}

int contrucao::getFome(){
  return fome;
}

int contrucao::getReceber(){
    return receber * nivelAtual;
}

int contrucao::getNivelAtual(){
    return nivelAtual;
}

void contrucao::setUni(int x){
     uni = x;
}

void contrucao::setNivelAtual(int y){
     nivelAtual = y;
}


void contrucao::compra (int m) {
    
    char f;
    bool foda = true ;
    int a = receber * nivelAtual ;

    while(foda){
    int c;

    std::cout << "quanto voce quer comprar " << '\n';
    std::cin >> c;
    system ("cls");

      if (std::cin.fail()) { 
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada invalida! Digite apenas números inteiros" << '\n';
        Sleep(3000);
        system("cls");
        continue; 
        }

        if ( c <= 0) {
        std::cout << "Valor invalido" << '\n';
        Sleep(2000);
        system("cls");
        continue;
        }
        
        int  b = a * c;
        bool d = true;

        while(d){
       std::cout << "quanto voce quer comprar " << b << '\n';
       std::cout << "voce quer essa quantidade ? (S/n) " << '\n';
       std::cin >> f;
       system("cls");


        if(f == 's' || f == 'S'){
          if(moeda >= b){
            std::cout << "concluido .\n";
            Sleep (2000);
            system ("cls");
            uni += c;
            moeda -= b;
           
            foda = false;
            d = false;
          }
          else{
            std::cout << "moeda insuficiente .\n";
            Sleep (2000);
            system ("cls");
    
            foda = false;
            d = false;
          }
        }

        else if(f == 'n' || f == 'N'){
            std::cout << "retornando .\n";
            Sleep(2000);
            system("cls");
            d = false;
        }

        else {
            std::cout << "erro .\n";
            Sleep(2000);
            system("cls");
        }
        }
       }
    
    }

void contrucao::melhora(int m, int p){                                                       
if(nivelAtual == nivelMax){
    std::cout << "nivel maximo atingido " << '\n';
    Sleep (2000);
    system ("cls");
}

else{
    bool f =true;
    char c;
    std::cout << "o valor vai ser " << valorMoeda << " e o requesito de populacao " << valorPessoa << " vai querer ? " << '\n';
    std::cin >> c;
    system ("cls");

    while(f){
    if(c == 's' || c  == 'S'){
        if(m >= valorMoeda){
             if (p >= valorPessoa){
         
              moeda -= valorMoeda;
              nivelAtual += 1;
         
              valorMoeda = valorMoeda * nivelAtual;
              valorPessoa = valorMoeda * nivelAtual;


              if (receber > 0) { receber *= nivelAtual; }

              std::cout << "compra feita " << '\n';
              Sleep (2000);
              system ("cls");
              f = false;
            }
    
         else{
         std::cout << "voce nao tem populacao para isso " << '\n';
         Sleep (2000);
         system ("cls");
         f = false;
         }
    }
     
    else{
        std::cout << "voce nao tem dinheiro para isso " << '\n';
        Sleep (2000);
        system ("cls");
        f = false;
    } 
   }
   
   else if(c == 'n' || c == 'N'){
   std::cout << "saindo . . ." << '\n';
   Sleep (2000);
   system ("cls");
   f = false;

   } 
   else {
    std::cout<< "algo esta erado " << '\n';
    Sleep (2000);
    system ("cls");
   }
}
}
}

