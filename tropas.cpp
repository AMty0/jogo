#include "objeto.h"
#include <iostream>
#include <windows.h>
#include <limits>

tropas::tropas(std::string n, double p, int v, int a, int c, int q, int l)
    : porce(p), nome(n), vida(v), ataque(a), custo(c), quantidade(q), limite(l) {}


int tropas::getQuantidade()  { 
    return quantidade; 
}


int tropas::getPorce(){
    return porce;
}

void tropas::setQuantidade(int x) {
     quantidade = x;
     }

void tropas::compra(int &moeda) {
 if (quantidade >= limite) {
 std::cout << "Voce ja comprou todas as tropas de " << nome << ".\n";
 Sleep(2000);
 system("cls");
 return;
 }

 int valor = 0;
char c;
bool repetir = true;
    
while (repetir) { 
    int disponivel = limite - quantidade;
    std::cout << "Quantidade disponivel para compra: " << disponivel << '\n';
    std::cout << "Quantos deseja comprar? ";
    std::cin >> valor;
    system("cls");
     
    if (std::cin.fail()) { 
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada invalida! Digite apenas números inteiros.\n";
        Sleep(3000);
        system("cls");
        continue; 
        }
    
    if (valor > disponivel || valor <= 0) {
        std::cout << "Valor invalido.\n";
        Sleep(2000);
        system("cls");
        continue;
     } 
     
     int vMult = valor * custo; 
     bool confirmar = true;
     
     while (confirmar) {
        std::cout << "O valor total deu " << vMult << '\n';
        std::cout << "Esta satifeito com o valor ? (s/n): ";
        std::cin >> c;
        system("cls");
        
        if (c == 'S' || c == 's') { 
        if (vMult <= moeda) {
            std::cout << "Compra feita!\n";
           quantidade += valor;
           moeda -= vMult;
         }
                 
         else { std::cout << "Compra recusada: dinheiro insuficiente.\n";}
                
         Sleep(2000);
         system("cls");
         repetir = false;
         confirmar = false; 
        } 

    else if (c == 'n' || c == 'S') {
    confirmar = false; 
    } 

    else { 
        std::cout << "Resposta inválida. Digite apenas 's' ou 'n'.\n";
        Sleep(2000); 
    system("cls");
 }
 }
 }
 };
      