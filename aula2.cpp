#include <iostream>
#include <chrono>
#include <thread>
#include <vector>
#include <string>
#include "funcoes.h"

//#define ST_IDLE 0
//#define ST_STOP 1
//#define ST_START 2



int main(int argc, char **argv)
{
//    using namespace std::this_thread;     // sleep_for, sleep_until
//    using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
//    using std::chrono::system_clock;

//    std::cout << "You have entered " << argc << " arguments:" << "\n";
//    for (int i = 0; i < argc; ++i)
//           std::cout << argv[i] << "\n";

//    // Check the number of parameters
//       if (argc < 2) {
//           // Tell the user how to run the program
//           std::cerr << "Usage: " << argv[0] << " SLEEP TIME" << std::endl;
//           /* "Usage messages" are a conventional way of telling the user
//            * how to run a program if they enter the command incorrectly.
//            */
//           return 1;
//       }
//    enum States
//       {
//           ST_IDLE,
//           ST_STOP,
//           ST_START,
//           ST_CHANGE_SPEED,
//           ST_MAX_STATES
//       };
//    int currentState;
//    currentState = ST_START;
//    int counter = 0;
//    int FSM_control = 1;
//    std::vector<int> index;
//    index.resize(10);
//    index[0] = 10;
//    while (FSM_control){
//        switch (currentState) {
//            case ST_IDLE:
//                (counter%2==0)?std::cout << "Tic \n":std::cout << "Toc \n";
//                counter += 1;
//                if (counter > 5){
//                    currentState = 1;
//                }
////                char sec = argv[1];
//                std::this_thread::sleep_for (std::chrono::seconds(1));
//            // do something in the idle state
//            break;
//            case ST_STOP:
//                std::cout << "BooM \n";
//                FSM_control = 0;
////                std::this_thread::sleep_for (std::chrono::seconds(2));
//            // do something in the stop state
//            break;
//        case ST_START:
//            std::cout << "Bomb's been planted\n";
//            std::this_thread::sleep_for (std::chrono::seconds(2));
//            currentState = 0;
//        break;
//        default:
//        break;
//    }
//    }
//    enum class Frutas : int{
//        BANANA,
//        ABACAXI,
//        MACA
//    };

//    Frutas fu = Frutas::BANANA;
//    std::cout.precision(10);
//    int i = 10;
//    float point = 0.2;


    std::cout << "Testa Fatorial: \n";
    std::cout << "Fatorial de 0 = " << factorial(0) <<std::endl;
    std::cout << "Fatorial de 1 = " << factorial(1) <<std::endl;
    std::cout << "Fatorial de 2 = " << factorial(2) <<std::endl;
    std::cout << "Fatorial de 3 = " << factorial(3) <<std::endl;
    std::cout << "Fatorial de 4 = " << factorial(4) <<std::endl;

    std::cout << "Testa Potencia: \n";
    std::cout << "10 elevado a 0 = " << expo(10,0) <<std::endl;
    std::cout << "10 elevado a 1 = " << expo(10,1) <<std::endl;
    std::cout << "10 elevado a 2 = " << expo(10,2) <<std::endl;
    std::cout << "10 elevado a 3 = " << expo(10,3) <<std::endl;
    std::cout << "10 elevado a 4 = " << expo(10,4) <<std::endl;
//    std::cout << "Fatorial: " << factorial(5) << '\n'<<std::endl;

    std::cout << "PA_TotalTermos: \n";
    std::cout << "Total termos entre 1 e 10, razao 0 = " << PA_TotalTermos(1,10,0) <<std::endl;
    std::cout << "Total termos entre 1 e 10, razao 0 = " << PA_TotalTermos(1,10,1) <<std::endl;
    std::cout << "Total termos entre 1 e 10, razao 0 = " << PA_TotalTermos(1,10,2) <<std::endl;
    std::cout << "Total termos entre 1 e 10, razao 0 = " << PA_TotalTermos(1,10,3) <<std::endl;
    std::cout << "Total termos entre 1 e 10, razao -1 = " << PA_TotalTermos(10,1,-1) <<std::endl;
    std::cout << "Total termos entre 1 e 10, razao -2 = " << PA_TotalTermos(10,1,-2) <<std::endl;
    std::cout << "Total termos entre 1 e 10, razao -3 = " << PA_TotalTermos(10,1,-3) <<std::endl;

    std::cout << "Testa imprime pares: \n";
    return 0;
}


