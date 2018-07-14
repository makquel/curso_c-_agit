#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

int main(int argc, char **argv)
{
////     Check the number of parameters
//    if (argc < 2) {
//        // Tell the user how to run the program
//        std::cerr << "Usage: " << argv[0] << " SLEEP TIME" << std::endl;
//        /* "Usage messages" are a conventional way of telling the user
//         * how to run a program if they enter the command incorrectly.
//         */
//        return 1;
//    }
//    if ( std::cin.fail() ){
//        std::cout << "valores incorretos\n";
//        // Limpa erros:
//        std::cin.clear();
//        // Ignora "new-lines" pendentes no buffer:
//        std::cin.ignore( std::numeric_limits<int>::max() , '\n' );
//        return 1; // entrada inválida
//       }

//    int N = 16;
//    std::vector <int> bin;
//    while( N!=0 ){
//        int bin_swap = N%2;
////        std::cout << bin_swap << std::endl;
//        bin.push_back(bin_swap);
//        N /=2;
//    }
//    std::reverse(bin.begin(), bin.end());
////    std::cout << "binary number lenght: " << bin[0] << std::endl;
//    int gap_counter=0;
//    int biggest_gap = 0;
//    bool on_gap = false;
//    for( int k =0;k<bin.size()-1; ++k){
//        if (bin[k] ==1 && bin[k+1]==0)
//            on_gap =true;
//        if(bin[k] ==0 && bin[k+1]==1){
//            on_gap = false;
//            if ( gap_counter>biggest_gap )
//                biggest_gap = gap_counter;
//        }
//        if (on_gap){
////            if (bin[k] == 0)
//                ++gap_counter;
//        }

//    }
//    std::cout << "Biggest binary gap: " << biggest_gap << std::endl;

    int x = 5 ; // 'x' é o apelido de um endereço de memória
    // onde armazenei o número inteiro 5;
    int * p = &x ; // 'p' é o apelido de um outro endereço de memória
    // onde armazenei o endereço de 'x'
    int & r = x ; // 'r' é uma referência para 'x': ou seja, um novo apelido
    // (um sinônimo) para a mesma posição de memória
    // já apelidada anteriormente como 'x'
    std::cout << "conteudo de 'x' = " << x << '\n';
    std::cout << "endereço de 'x' = " << &x << '\n';
    std::cout << "conteudo de 'r' = " << r << '\n';
    std::cout << "endereço de 'r' = " << &r << '\n';
    std::cout << "conteudo de 'p' = " << p << '\n';
    std::cout << "endereço de 'p' = " << &p << '\n';

    std::cout << "conteudo APONTADO por 'p' = " << *p << '\n';

    return 0;
}
