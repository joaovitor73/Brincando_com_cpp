#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;

int main() {
    string cadeia;
    cout << "Digite a mensagem: ";
    getline(cin, cadeia);
    short int tamanho = cadeia.size(), msb;
    int numeros[tamanho];
    for(int i = 0; i < tamanho; i++){
        numeros[i] =  (int) cadeia[i];
    }
    short int tamanhoBits = tamanho*8, cont = 0;
    int bits[tamanhoBits];
    for(int i = 0; i < tamanho; i++){
        msb = 128;
        for(int j = 0; j < 8; j++){
            if(numeros[i] >= msb){
                numeros[i]-=msb;
                bits[cont] = 1;
            }else bits[cont] = 0;
            msb/=2;   
            cont++;      
        }
    }

    for(int i = 0; i < tamanhoBits; i++){
        if(i % 8  == 0) cout << "\n\n";
        if(bits[i] == 1) cout << "_";
        else cout << "-";
    }
}
