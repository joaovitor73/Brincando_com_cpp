#include <iostream>
using namespace std;

int main() {
    
    int  aux = 128, dec = 0;
    bool valor[8], value;
    
    cout << "\n----Paridade par----\n";
    //Achando a paridade
    for (int i = 0; i < 8; i++){
        cin >> valor[i];
    }
    value = valor[0];
    for(int i = 0; i < 7; i++){
        value ^=  valor[i+1];
    }
    
    cout << "Bit de paridade: " <<  value;  
    //Convertendo os bits para decimal e achando seu simbolo na tabela ascii
    for(int i = 0; i < 8; i++){
        dec += aux*valor[i];
        aux /= 2;
    }
    cout << "\nletra equivalente: " << char(dec);

}