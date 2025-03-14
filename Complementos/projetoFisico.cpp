//calculadora de m�dias (Manzano)
//este sistema ir� calcular a nota m�nima necess�ria que o usu�rio precisa na prova final

#include <iostream>
#include <iomanip>
#include <locale>
#include <windows.h>

using namespace std;

int main (void)
{
    double N1, N2, N3;
    char repetir;

    do {
    system("clear || cls");

    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    SetConsoleCP(1252);

    cout << setw(45) << right << "CALCULADORA DE NOTAS" << endl;
    cout << "Use este programa para calcular sua nota m�nima necess�ria na prova final (N3)" << endl << endl;

    cout << "Insira sua nota de pontualidade (N1): ";
    cin >> N1;
    cin.ignore(80, '\n');

    cout << "Insira sua nota de avalia��es (N2): ";
    cin >> N2;
    cin.ignore(80, '\n');

    N3 = (12 - N1 * 0.3) / 0.85 - N2;

    cout << endl << endl << setprecision(1) << fixed;

    if(N3 <= 10)
        cout << "Nota necess�ria para ficar com m�dia 6: " << N3;
    else
    {
        N3 = (10 - N1 * 0.3) / 0.85 - N2;
        if (N3 > 10)
            cout << "Reprovado.";
        else
            cout << "Voc� n�o conseguir� ficar com 6 de m�dia na prova final. Nota necess�ria para ficar de IFA: " << N3;
    }

    cout << endl << endl << "\nDeseja calcular novamente? (S/N): ";
    cin >> repetir;
    cin.ignore(80, '\n');
    } while (repetir == 'S' || repetir == 's');


    cout << endl << endl << "Tecle <ENTER> para encerrar...";
    cin.get();
    return 0;
}
