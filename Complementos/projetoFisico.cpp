//calculadora de médias (Manzano)
//este sistema irá calcular a nota mínima necessária que o usuário precisa na prova final

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main (void)
{
    double N1, N2, N3;
    char repetir;

    do {
    system("clear || cls");
    setlocale(LC_ALL, "pt-br");

    cout << setw(45) << right << "CALCULADORA DE NOTAS" << endl;
    cout << "Use este programa para calcular sua nota mínima necessária na prova final (N3)" << endl << endl;

    cout << "Insira sua nota de pontualidade (N1): ";
    cin >> N1;

    cout << "Insira sua nota de avaliações (N2): ";
    cin >> N2;

    N3 = (12 - N1 * 0.3) / 0.85 - N2;

    cout << endl << endl << setprecision(1) << fixed;

    if(N3 <= 10)
        cout << "Nota necessária para ficar com média 6: " << N3;
    else
    {
        N3 = (10 - N1 * 0.3) / 0.85 - N2;
        cout << "Você não conseguirá ficar com 6 de média na prova final. Nota necessária para ficar de IFA: " << N3;
    }

    cout << endl << endl << "\nDeseja calcular novamente? (S/N): ";
    cin >> repetir;

    } while (repetir == 'S' || repetir == 's');


    cout << endl << endl << "Tecle <ENTER> para encerrar...";
    cin.get();
    return 0;
}
