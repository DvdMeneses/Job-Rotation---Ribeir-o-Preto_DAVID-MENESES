
#include <iostream>

using namespace std;

int main()
{
    
    // questao 1 
    
    /*
    int INDICE = 13, SOMA = 0, K =0;
    
    while(K<INDICE){
        K=K+1;
        SOMA = SOMA +K;
    }
    
    cout << SOMA;
    */
    
    // questao 2 
    /*
    int NUMERO, a = 0, b = 1, c = 1;
    bool pertence = false;

    cout << "Digite um numero: ";
    cin >> NUMERO;

    while (c < NUMERO) {
        a = b;
        b = c;
        c = a + b;

        if (c == NUMERO) {
            pertence = true;
            break;
        }
    }

    if (pertence) {
        cout << "O numero " << NUMERO << " pertence a sequencia de Fibonacci." << endl;
    } else {
        cout << "O numero " << NUMERO << " nao pertence a sequencia de Fibonacci." << endl;
    }
    */
    
    //questao 3
    
    /*
    3) Descubra a lógica e complete o próximo elemento:



    a) 1, 3, 5, 7, 2 // SOMA 2
    
    b) 2, 4, 8, 16, 32, 64, 128 // MULTIPLICA POR 2 
    
    c) 0, 1, 4, 9, 16, 25, 36, 49 // ELEVA AO QUADRADO
    
    d) 4, 16, 36, 64, 100 // ADICIONA 12
    
    e) 1, 1, 2, 3, 5, 8, 13 // Fibonacci
    
    f) 2,10, 12, 16, 17, 18, 19, // NUMEROS COM D

    */
    
    // questao 4
    
    /*
    Para determinar o local em que o carro e o caminhão se cruzam podemos colocar o ponto de referência em Ribeirão Preto, então, a equação horária do carro é:

    CARRO = v_1.t
    
    Como o caminhão sai de um local 100 km distante do ponto de referência e se aproxima dele, sua equação horária é:

    CAMINHAO = 100km-v_2.t
    
    1,25h// tempo do caminhao sem obstaculos
    1,25h+0,17h=1,42h// acresentando 10 minutos
    
    Podemos colocar o ponto de referência em Ribeirão Preto, então a equação horária do carro é:

    CARRO = v1 * t
    
    Como o caminhão sai de um local 100 km distante do ponto de referência e se aproxima dele, sua equação horária é:
    
    CAMINHAO = 100 km - v2 * t
    
    Igualando as equações horárias e resolvendo para x, obtemos:
    
    x1 = x2
    
    v1 * t = 100 km - v2 * t
    
    x = v1 * t = (v1 * 100 km) / (v1 + v2)
    
    Substituindo as velocidades dadas, obtemos:
    
    x = (110 km/h * 100 km) / (110 km/h + 70.6 km/h) = 60.9 km
    
    Portanto, o ponto de cruzamento fica a 60.9 km de Ribeirão Preto e tanto o carro quanto o caminhão estão a essa distância da cidade no momento do cruzamento.
    */
    
    
    // questao 5
    /*
    char str[100]; // definindo um vetor de char 
    int tam = 0;
    
    cout << "Digite uma string: ";// consumindo a string digitada pelo usuario
    cin.getline(str, 100);

    // Obter o tamanho da string (percorrendo o vetor até a marcação de fim)
    for (int i = 0; str[i] != '\0'; i++) {
        tam++;
    }

    // Inverter a string ( dividido por 2e para nao inverter e desinverter
    
    for (int i = 0; i < tam/2; i++) {
        char temp = str[i];
        str[i] = str[tam-i-1];
        str[tam-i-1] = temp;
    }

    cout << "String invertida: " << str << endl;
    */
    
    
    return 0;
}