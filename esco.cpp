#include <iostream>
#include <cstdlib> 
#include <windows.h>
#include "global.h"
#include "objeto.h"


void esco (){
  char v; 
  std::cout << "melhorar construcao --> (m) "<< '\n';
  std::cout << "compra construcao --> (c) " << '\n';
  std::cin >> v;
  system ("cls");

  if (v =='c' || v == 'C'){
    char j; 
    
    std::cout << "fazenda --> (f) "<< '\n';
    std::cout << "minas --> (m) " << '\n';
    std::cin >> j;
     system("cls");

     if(j == 'F' || j == 'f'){fazenda.compra(moeda); }
     else if(j == 'M' || j == 'm'){minas.compra(moeda);}
     }
    

    else if (v == 'm' || v == 'M'){
      char h; 
    
    std::cout << "fazenda --> (f) " << '\n';
    std::cout << "minas --> (m) " << '\n';
    std::cout << "quartel --> (q) " << '\n';
    std::cin >> h;
     system("cls");

     if(h == 'F' || h == 'f'){fazenda.melhora(moeda, pessoas);}
     else if(h == 'M' || h == 'm'){minas.melhora(moeda, pessoas);}
     else if(h == 'q' || h == 'Q'){quartel.melhora(moeda, pessoas);}
    
  }
}


void soldado(){
  ini:
  char c;
  std::cout << "guerreiro --> (g)" << '\n';
  std::cout << "arqueiro --> (a)" << '\n';
  std::cout << "mago --> (m)" << '\n';
  std::cout << "cavaleiro --> (c)" << '\n';
  
  std::cin >> c;
  system ("cls");

  if((c == 'g'|| c == 'G') && quartel.getNivelAtual() >= 1){ guerreiro.compra(moeda);}
  else if((c == 'a'|| c == 'A') && quartel.getNivelAtual() >= 2){ arqueiro.compra(moeda);}
  else if((c == 'm'|| c == 'M') && quartel.getNivelAtual()  >= 3){ mago.compra(moeda);}
  else if((c == 'c'|| c == 'C') && quartel.getNivelAtual()  >= 4){ cavaleiro.compra(moeda);}

  else{
    std::cout << "erro  entrada invalida ou seu nivel de guartel e muito baixo" << '\n';
    Sleep(2000);
  system ("cls");
  goto ini;
  }
}
