#pragma once
#include <string>


extern bool vidasPlayer;
extern int dias;
extern int dayf;
extern int dayp;

extern int moeda;
extern int pessoas;
extern int comida;

extern bool fome;
extern bool praga;

extern int cDI, cDP, cDF;

class tropas {
private:
double porce;
 std::string nome; 
 int vida;  
 int ataque; 
 int custo; 
 int quantidade; 
 int limite;

public:
tropas(std::string n, double p, int v, int a, int c, int q, int l); 
int getQuantidade(); 
int getPorce();
void setQuantidade(int x);
void compra(int &moeda);

};


class contrucao{
    private:
    int uni;
    int valorMoeda;
    int valorPessoa;
    int fome;
    int nivelAtual;
    int nivelMax;
    int receber;
    
    public:
   contrucao (int i, int vm, int vp, int na, int nae, int nm);
   contrucao ( int vm, int vp, int f, int na, int nm);

   int getUni();
   int getNivelAtual();
   int getReceber();
   int getFome();
   
   void setUni(int x);
   void setNivelAtual(int y);

   void compra (int moeda);
   void melhora(int moeda, int pessoa);
};
