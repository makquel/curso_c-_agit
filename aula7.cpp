#include <iostream>
#include <cstring>
using namespace std;

struct MyException:std::exception
{
    int m_n;
    MyException(int n):m_n(n){}
    const char *what() const throw() override
    {
        if (m_n == 1)
            return "Erro disparado igual a 1";
        else
            return "smth else";

    }
};

class RelatPadrao //classe abstrata
{
    int m_nLinhasPorPagina;// = 10;
public:
//    RelatPadrao() = default;
    RelatPadrao(int nLinhasPorPagina=10)
        :m_nLinhasPorPagina(nLinhasPorPagina)
    {}

    virtual void cabec(){}
    virtual bool detalhe() = 0; //{return false;}
    virtual void rodape(){}

    void imprime();
};

void RelatPadrao::imprime()
{
    bool bOk;
    int nLinhaAtual;
    do{
        nLinhaAtual = 0;
        cabec();
        while ((bOk = detalhe()) &&
               ++nLinhaAtual < m_nLinhasPorPagina);
        rodape();
    }while(bOk);
}
class MeuRelat:public RelatPadrao
{
    int m_contador = 0;
public:
    MeuRelat()
    {
        memset(this,0,sizeof(MeuRelat));
    }
    void cabec() override
    {
        std::cout << "==> CABECALHO\n";
    }
    void rodape() override
    {
        std::cout << "<== RODAPE\n";
    }
    bool detalhe() override
    {
        std::cout << "Linha ="
                  << ++m_contador
                  << std::endl;
        return m_contador < 30;
    }
};

struct A
{
    virtual void f(){}
    int a;
};
struct B:A
{
    int b;
};
void f(A *pa)
{
    B *pb = dynamic_cast<B *>(pa);
    if(pb)
        std::cout << "Derivada\n";
    else
        std::cout << "Base\n";

}
int main()
{
//    try
//    {
//        throw MyException(1);
//    }
//    catch(std::exception &e)
//    {
//        std::cout << e.what() << '\n';
//    }
//    MeuRelat r1;
//    r1.imprime();
//    return 0;
    A meuA;
    B meuB;
    f(&meuA);
    f(&meuB);
    /*if(){
        std::cout << "objeto base" << std::endl;
    }else
        std::cout << "objeto derivado" << std::endl;*/

    return 0;


}
