//calculadora de médias (Manzano)
//este sistema irá calcular a nota mínima necessária que o usuário precisa na prova final

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
    cout << "Use este programa para calcular sua nota mínima necessária na prova final (N3)" << endl << endl;

    cout << "Insira sua nota de pontualidade (N1): ";
    cin >> N1;
    cin.ignore(80, '\n');

    cout << "Insira sua nota de avaliações (N2): ";
    cin >> N2;
    cin.ignore(80, '\n');

    N3 = (12 - N1 * 0.3) / 0.85 - N2;

    cout << endl << endl << setprecision(1) << fixed;

    if(N3 <= 10)
        cout << "Nota necessária para ficar com média 6: " << N3;
    else
    {
        N3 = (10 - N1 * 0.3) / 0.85 - N2;
        if (N3 > 10)
            cout << "Reprovado.";
        else
            cout << "Você não conseguirá ficar com 6 de média na prova final. Nota necessária para ficar de IFA: " << N3;
    }

    cout << endl << endl << "\nDeseja calcular novamente? (S/N): ";
    cin >> repetir;
    cin.ignore(80, '\n');
    } while (repetir == 'S' || repetir == 's');


    cout << endl << endl << "Tecle <ENTER> para encerrar...";
    cin.get();
    return 0;
}
