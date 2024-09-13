#include <iostream>
#include <string>

using namespace std;

int main() {
    string class1, class2, class3;
    cin >> class1 >> class2 >> class3;

    if (class1 == "vertebrado") {
        if (class2 == "ave") {
            if (class3 == "carnivoro") {
                cout << "aguia" << endl;
            } else if (class3 == "onivoro") {
                cout << "pomba" << endl;
            }
        } else if (class2 == "mamifero") {
            if (class3 == "onivoro") {
                cout << "homem" << endl;
            } else if (class3 == "herbivoro") {
                cout << "vaca" << endl;
            }
        }
    } else if (class1 == "invertebrado") {
        if (class2 == "inseto") {
            if (class3 == "hematofago") {
                cout << "pulga" << endl;
            } else if (class3 == "herbivoro") {
                cout << "lagarta" << endl;
            }
        } else if (class2 == "anelideo") {
            if (class3 == "hematofago") {
                cout << "sanguessuga" << endl;
            } else if (class3 == "onivoro") {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}
