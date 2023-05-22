#include <iostream>
using std::cin;
using std::cout;

int main() {
    char tabuleiro[10][10], jogo[10][10];
    short int cont, linha, coluna, vidas = 3;
    bool naoGanhou = true;
    for(int i = 0; i < 10;i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = ' ';   
            if(i != j)
            jogo[i][j] = '*';
            else jogo[i][j] = '-';
        }
    }
    do{
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\tBATALHA NAVAL      VIDAS:" << vidas << "\n\n";
        for(int i =1; i <= 10; i++){ //linha de 1 a 10
            cout << "\t" << i;
        }
        for(int i = 0; i < 10;i++){
            cout << "\n" <<"\t-------------------------------------\n" << " "<<i+1 ;      
             for(int j = 0; j < 10; j++){             
                 cout << "\t| "<< tabuleiro[i][j];    
             }
        }
         cout << "\n\t--------------------------------------\n";
        do{
            cout << "\nDigite a linha e coluna desejada: ";
            cin >> linha >> coluna;
        }while(tabuleiro[linha-1][coluna-1] != ' ');
        tabuleiro[linha-1][coluna-1] = jogo[linha][coluna];
        if(tabuleiro[linha-1][coluna-1] == '*') vidas --;
        else naoGanhou = false;
    }while(vidas > 0 && naoGanhou);
    if(naoGanhou) cout << "\nGAME OVER";
    else cout << "\nVoce ganhou!";
}
