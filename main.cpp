/* Parasykite klase, turincia funkcijas ivedimui, isvedimui ir sukimosi
nupjautines piramides turio V bei pavirsiaus ploto S skaiciavimui. Sukurti du
objektus ir suskaiciuoti cilindru parametrus.*/

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//formules skaicivimui http://www.mat.lt/matematikos-formules/erdvines-figuros.html
class nupjautinePiramide {
private:
    double turis;
    double plotas;
    double r1, r2, h;
public:
    void ivestiParametrus();
    void skaiciuotiPlota();
    void skaiciuotiTuri();
    void spausdinti();
};

int main() {

    nupjautinePiramide pirmas, antras;

    pirmas.ivestiParametrus();
    pirmas.skaiciuotiPlota();
    pirmas.skaiciuotiTuri();
    pirmas.spausdinti();

    antras.ivestiParametrus();
    antras.skaiciuotiPlota();
    antras.skaiciuotiTuri();
    antras.spausdinti();


    system("pause");
    return EXIT_SUCCESS;
}

void nupjautinePiramide::ivestiParametrus()
{
    cout << "Iveskite nupjautines piramides ausktine: ";
    cin >> h;
    cout << "Iveskite nupjautines piramides mazesniojo pagrindo ilgi: ";
    cin >> r1;
    cout << "Iveskite nupjautines piramides didesniojo pagrindo ilgi: ";
    cin >> r2;
}

void nupjautinePiramide::skaiciuotiPlota()
{
    double s1 = r1 * r1;
    double s2 = r2 * r2;
    double p1 = 4 * r1;
    double p2 = 4 * r2;

    plotas = h / 2 * (p1 + p2) + s1 + s2;
}

void nupjautinePiramide::skaiciuotiTuri()
{

    double s1 = r1 * r1;
    double s2 = r2 * r2;

    turis = (sqrt(s1*s2) + s1 + s2) * h / 3;
}

void nupjautinePiramide::spausdinti()
{
    cout << "Staciakampio plotas yra lygus " << plotas << endl;
    cout << "Staciakampio turis yra lygus " << turis << endl;
}
