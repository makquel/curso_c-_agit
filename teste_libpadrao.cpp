#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

typedef vector<int> vector_int;

// type alias (C++11)
using list_int = list<int>;
using map_int_string = map<int,string>;

void testaString();
void testaVector();
void testaList();
void testaMap();
void testaOutros();

int main()
{
//    testaString();
//    testaVector();
//    testaList();
//    testaMap();
    testaOutros();

    return 0;
}

/*
 * |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|
 * |      n      |   a   |
 * 1000          1010
 *
 * char n[10];
 * int a;
 *
 */

void testaString()
{
    string texto;
    texto.reserve(40);

    texto = "agit";
    texto += " informatica";
    cout << texto << '\n';
    cout << texto.length() << '\n';

    string subtexto = texto.substr(5,3);
    cout << subtexto << '\n';

    auto posic = texto.find('i');
    cout << posic << '\n';

    posic = texto.find("inf");
    cout << posic << '\n';

    texto.erase();
    cout << texto.length() << '\n';
    if( texto.empty() )
        cout << "texto vazio\n";

    texto = "ARI";
    texto[0] = 'E';
    cout << texto << '\n';

    if( texto == subtexto )
        std::cout << "iguais\n";

    texto = R"!!!(agit\ninformatica)!!!";
    cout << texto << '\n';

    texto = "10";
    int val = stoi(texto);
    cout << val << '\n';

    const char *s1 = "agit";
    const char *s2 = "informatica";

    texto = "agit";
    cout << s1 << " - " << s2 << '\n';

    cout << "agit"s + " informatica" << '\n';
}

void testaVector()
{
    vector<int> vecInt;
    cout << vecInt.capacity() << '\n';

    vecInt.reserve(40);
    cout << vecInt.size() << '\n';
    cout << vecInt.capacity() << '\n';

    vecInt.resize(40);
    cout << vecInt.size() << '\n';
    cout << vecInt.capacity() << '\n';

    vecInt.push_back(10);
    cout << vecInt.size() << '\n';
    cout << vecInt.capacity() << '\n';
    cout << vecInt.max_size() << '\n';

    vecInt.assign(5,11);
    cout << vecInt.size() << '\n';
    cout << vecInt.capacity() << '\n';

    for( unsigned n=0; n<vecInt.size(); ++n )
        cout << vecInt[n] << '\n';

    // iterator
    vector<int>::iterator itvi;
    list<int>::iterator itli;
    map<int,string>::iterator itmap;

    for( itvi = vecInt.begin();
         itvi != vecInt.end();
         ++itvi )
    {
        cout << "for = " << *itvi << '\n';
    }

    vecInt[2] = 12;

    for( int i : vecInt )
    {
        std::cout << i << '\n';
    }
}

/*
 * |_|    |_|    |_|
 * 1000          1020
*/

void testaList()
{
    list<int> li;
    li.push_back(10);

    cout << li.size() << '\n';

    li.push_back(15);
    cout << li.size() << '\n';

//    list<int>::iterator itli;
    for( auto itli = li.begin();
         itli != li.end();
         ++itli )
    {
        cout << "for = " << *itli << '\n';
    }

    for( int i : li )
    {
        std::cout << i << '\n';
    }

    li.push_front(18);
    li.insert(li.begin(),20);

    auto itli = li.begin();
    ++itli;
    li.insert(itli,30);

    cout << "Novo:\n";
    for( int i : li )
    {
        std::cout << i << '\n';
    }

    struct Teste
    {
        int a;
        int b;
    };

    list<Teste> lt;
    Teste t;
    t.a = 1;
    t.b = 5;
    lt.push_back(t);
    t.a = 10;
    t.b = 9;
    lt.push_back(t);

    cout << "Novo 2:\n";
    for( auto itT = lt.begin();
         itT != lt.end();
         ++itT )
    {
        cout << "for = " << itT->a
             << " - " << itT->b << '\n';
    }
    for( Teste &t : lt )
    {
        std::cout << t.a
                  << " - " << t.b << '\n';
    }
}

/*
 * 1 jose
 * 5 pedro
 * 3 maria
 * 2 joao
*/
void testaMap()
{
    struct Teste
    {
      int a;
      int b;
      bool operator < (const Teste &t) const
      {
          return a < t.a;
      }
    };
    map<int, Teste> ite;
    Teste t;
    t.a = 7;
    t.b = 5;
    ite.insert( make_pair(20,t) );

    auto itite = ite.find(20);
    cout << itite->second.a << '\n';

    map<Teste,int> ti;
    ti.insert( make_pair(t,20) );

    map<int,string> mis;
    map<string,int> msi;

    pair<int,string> pis;
    pis.first = 1;
    pis.second = "jose";
    mis.insert(pis);

    mis.insert(make_pair(5,"pedro"));

    mis[2] = "joao";
    msi["joao"] = 2;

    auto it = mis.find(3);
    if( it == mis.end() )
    {

    }

    mis.erase(2);

    std::cout << it->second << '\n';

    for( auto it = mis.begin();
         it != mis.end();
         ++it )
    {
        cout << it->first
             << " - " << it->second << '\n';
    }
    for( auto &it : mis )
    {
        cout << it.first
             << " - " << it.second << '\n';
    }

    std::vector<int> vi({18,10,3,9,7});
    sort(vi.begin(),vi.end());

    for( auto &i : vi )
    {
        std::cout << i << '\n';
    }

    std::list<int> li({18,10,3,9,7});
    li.sort();

    for( auto &i : li )
    {
        std::cout << i << '\n';
    }



}

int soma(int a, int b)
{
    return a+b;
}

int media(int a, int b)
{
    return (a+b)/2;
}

void imprimeInt(int a)
{
    std::cout << a << '\n';
}

void imprimeIntMais2(int a)
{
    std::cout << a+2 << '\n';
}

struct Teste
{
    int a,b,c;
    void operator()(int a)
    {
        std::cout << "functor() " << a << '\n';
    }
};

void testaOutros()
{
    Teste t;
    t(10);

    int x = 1;
    vector<int> vi({10,16,3,9,21});

    for_each(vi.begin(),vi.end(),t);
    return;


//    for_each(vi.begin(),vi.end(),imprimeIntMais2);
    for_each(vi.begin(),vi.end(),
        [](int a)
        {
            std::cout << a << '\n';
        });

    std::cout << "x = " << x << '\n';
}

