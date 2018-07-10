#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define BUF_SIZE 33
// FunÃ§Ã£o sugerida pelo usuario Adam Markowitz no site stackoerflow
// http://stackoverflow.com/questions/1024389/print-an-int-in-binary-representation-using-c
char *int2bin(int a, char *buffer, int buf_size) {
    buffer += (buf_size - 1);
    for (int i = 31; i >= 0; i--) {
        *buffer-- = (a & 1) + '0';
        a >>= 1;
    }
    return buffer;
}


int agrofun_1( int numero ){
	int tamanho = sizeof(numero)*8; //32 bits
	int quantidade_bits = 0;
    
    for (int it = 0; it < tamanho; it++){
    	if ((numero >> it)& 1)
    		quantidade_bits += 1;
    }
    
    return quantidade_bits;
}

const char * agrofun_2( int numero ){
	bool pot2;
	pot2 = numero && !(numero & (numero - 1));
	if (pot2 == 0)
		return "False";
	else
		return "True";
}		

void agrofun_3( void ){
	int lim = pow(2,7); //Deve ser setado para (32-1) 
	int adjacente_counter;
	int tamanho = sizeof(lim)*8; //32 bits
	
	for ( int num = 0; num < lim; num++ ){
		int LSB = 0;
		adjacente_counter = 0;
		for (int it = 0; it < tamanho; it++){
			if ( ((num >> LSB)& 3) == 3 ){
				adjacente_counter = 1;
			}else
				LSB += 1;
		}
		if ( adjacente_counter == 0 ){
			//printf("%u\n",num);
			char buffer[BUF_SIZE];
    		buffer[BUF_SIZE - 1] = '\0';
    		int2bin(num, buffer, BUF_SIZE - 1);
    		printf("0b%s\n", buffer);			
		}
	}
	//printf("%u\n",adjacente_counter);
	//int numero = 50;
	//int temp;
	//adjacente_counter = 0;
	//for (int it = 0; it < tamanho; it++){
	//	temp = (numero >> it)& 3;
	//	printf("%u\n",temp);
	//}
}




int main()
{
    int x = 9; 
    printf("%u\n", agrofun_1(x));
    printf("%s\n",agrofun_2(x));
    agrofun_3();
}

