#include <iostream>
#include <windows.h>
#include <cstdlib>   
#include "objeto.h"
#include "global.h"
#include "salvar.h"
#include "esco.h"
#include "proximo.h"


int main() {
    char i;
    while (true) {
        std::cout << "iniciar --> (i)\n";
        std::cout << "continuar --> (c)\n";
        std::cin >> i;
        system("cls");

        if (i == 'i' || i == 'I') {
            std::cout << "iniciando . . .\n";
            Sleep(3000);
            system("cls");
            break;
        } else if (i == 'c' || i == 'C') {
            std::cout << "iniciando . . .\n";
            Sleep(3000);
            system("cls");

            if (abrir() == 0) break;
            else {
                std::cout << "nao foi possível carregar\n";
                Sleep(3000);
                system("cls");
            }
        } else {
            std::cout << "erro\n";
            Sleep(3000);
            system("cls");
        }
    }

    while (vidasPlayer) {
        char b;
        std::cout << "dia/s " << dias << '\n';
        std::cout << "moeda " << moeda << " pessoa " << pessoas << " comida " << comida <<"\n";
        std::cout << "unidade de fazenda " << fazenda.getUni() << " unidade de minas " << minas.getUni() << "\n \n"; 
        std::cout << "melhorar construcao ou comprar --> (m)\n";
        std::cout << "comprar soldado --> (c)\n";
        std::cout << "salvar --> (s)\n";
        std::cout << "proximo dia --> (p)\n";
        std::cin >> b;
        system("cls");

        if (b == 'c' || b == 'C') { soldado(); }
        else if (b == 's' || b == 'S') { manuel(); }
        else if (b == 'm' || b == 'M') { esco(); }
        else if (b == 'p' || b == 'P'){ proximo(); }
    }
}

