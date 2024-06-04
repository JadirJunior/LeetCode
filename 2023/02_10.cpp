#include <iostream>
#include <string>


using namespace std;

int main()
{
    string colors = "AAABBB";


    int movAlice = 0, movBob = 0, A = 0, B = 0;


    bool ret = false;

    for (int i = 0; i<colors.length();i++) {
        char c = colors[i];
        
        if (c == 'A') {
          
            if (B != 0) {
                //Começou uma nova cadeira de Letras "As", logo agora da pra contar os movimentos do Bob nesta cadeia!
                movBob += B-2 <= 0 ? 0 : B-2;
                B = 0;
                
            }

            A++;

            if (i == colors.length()-1) {
                movAlice += A-2 <= 0 ? 0 : A-2;
            }

        } else {

            if (A != 0) {
                movAlice += A-2 <= 0 ? 0 : A-2;
                A = 0;
            }

            B++;

            if (i == colors.length()-1) {
                movBob += B-2 <= 0 ? 0 : B-2;
            }

        }   

    }


    cout << movBob << " " << movAlice << endl;
    if (movBob >= movAlice || movAlice == 0) {
        ret = false;
    } else {
        ret = true;
    }

    cout << ret << endl;


    return 0;
}