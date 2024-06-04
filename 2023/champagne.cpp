#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	
	int poured = 1000000009;
	
    vector<double> linhaAtual(1, poured);

    int query_row = 33;
    int query_glass = 17;
    
    for (int i = 0; i < query_row; i++) {
        
        //Percorrendo as linhas
        vector<double> prox(linhaAtual.size() + 1);

        for (int j = 0; j < linhaAtual.size(); j++) {

            //Percorrendo a linha atual
            if (linhaAtual[j] >= 1) {

                double overflow = (linhaAtual[j] - 1.0) / 2.0;

                prox[j] += overflow;
                prox[j+1] += overflow;

                linhaAtual[j] = 1;

            } 

        }

        linhaAtual = prox;
    }

    if (linhaAtual[query_glass] > 1) {
        linhaAtual[query_glass] = 1;
    }

    cout << linhaAtual[query_glass] << endl;
	
	
	
	
    return 0;
}