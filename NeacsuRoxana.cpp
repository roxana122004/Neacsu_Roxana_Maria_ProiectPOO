#include <iostream>
#include <string>

using namespace std;

class Nectarine {
public:
    string culoare;
    double greutate;
    static int numarNectarine;
    const string aroma = "dulce";

    Nectarine() : culoare("Necunoscuta"), greutate(0.0) {
        numarNectarine++;
    }

    Nectarine(string culoare) : culoare(culoare), greutate(0.0) {
        numarNectarine++;
    }

    Nectarine(string culoare, double greutate) : culoare(culoare), greutate(greutate) {
        numarNectarine++;
    }

    static void AfiseazaInformatii() {
        cout << "Nectarine create: " << numarNectarine << endl;
    }
};

int Nectarine::numarNectarine = 0;

class Rodie {
public:
    string culoare;
    double greutate;
    static int numarRodii;
    const string aroma = "acrisoara";

    Rodie() : culoare("Necunoscuta"), greutate(0.0) {
        numarRodii++;
    }

    Rodie(string culoare) : culoare(culoare), greutate(0.0) {
        numarRodii++;
    }

    Rodie(string culoare, double greutate) : culoare(culoare), greutate(greutate) {
        numarRodii++;
    }

    static void AfiseazaInformatii() {
        cout << "Rodii create: " << numarRodii << endl;
    }
};

int Rodie::numarRodii = 0;

class Mango {
public:
    string culoare;
    double greutate;
    static int numarMango;
    const string aroma = "dulce";

    Mango() : culoare("Necunoscuta"), greutate(0.0) {
        numarMango++;
    }

    Mango(string culoare) : culoare(culoare), greutate(0.0) {
        numarMango++;
    }

    Mango(string culoare, double greutate) : culoare(culoare), greutate(greutate) {
        numarMango++;
    }

    static void AfiseazaInformatii() {
        cout << "Mango create: " << numarMango << endl;
    }
};

int Mango::numarMango = 0;

int main() {
    Nectarine nectarine1;
    Nectarine nectarine2("Portocalie");
    Nectarine nectarine3("Galbena", 150.0);

    Rodie rodie1;
    Rodie rodie2("Rosie");
    Rodie rodie3("Portocalie", 80.0);

    Mango mango1;
    Mango mango2("Galben");
    Mango mango3("Verde", 200.0);

    Nectarine::AfiseazaInformatii();
    Rodie::AfiseazaInformatii();
    Mango::AfiseazaInformatii();

    return 0;
}