#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    /*
    
        Elabore um programa em C que leia uma sequencia de números finalizando o processamento quando o numero lido for 99 ou zero ou 14 e que calcule:

        a) a soma dos números lidos menores do que 150 e maiores do que 50
        b) o produto de números lidos que sejam concomitantemente diferentes de 10, maiores do que 5 e menores do que 70
        c) a media dos números lidos
        d) o produto dos números lidos maiores do que 20 e menores do que 30
        e) a soma dos quadrados dos números lidos maiores do que 16
    
    */

   int n, somaTotal = 0, soma = 0, produto = 1, produtoEntre = 1, somaQuadrados = 0, qtde = 0;
   float media = 0;

   do {

    cin >> n;

    if (n != 99 && n != 14) {
        somaTotal += n;
        qtde++;

        if (n <= 150 && n >= 50) {
            soma += n;
        }

        if (n != 10 && n > 5 && n < 70) {
            produto *= n;
        }

        if (n > 20 && n < 30) {
            produtoEntre *= n;
        }

        if (n > 16) {
            somaQuadrados += pow(n, 2);
        }

    }
    

   } while (n != 99 && n != 14);

   media = somaTotal / qtde;


    cout << "a) " << soma << endl;
    cout << "b) " << produto << endl;
    cout << "c) " << media << endl;
    cout << "d) " << produtoEntre << endl;
    cout << "e) " << somaQuadrados << endl;



    return 0;
}