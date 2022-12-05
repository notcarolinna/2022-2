#include <iostream>

class Imovel
{
protected:
    int endereco;
    int preco;

public:
    Imovel(int e, int p)
    {
        endereco = e;
        preco = p;
    }
};

class Novo : public Imovel
{
public:
    Novo(int e, int p, int a) : Imovel(e, p)
    {
        adicional = a;
    }
    int getPrecoFinal()
    {
        int pf = (preco + adicional);
        return pf;
    }

private:
    int adicional;
};

class Velho : public Imovel
{
public:
    Velho(int e, int p, int d) : Imovel(e, p)
    {
        desconto = d;
    }
    int getPrecoFinal()
    {
        int pf = (preco - desconto);
        return pf;
    }

private:
    int desconto;
};
