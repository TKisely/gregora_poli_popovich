#include <iostream>
using namespace std;

class Szemelyauto
{
    string gyarto;
    int vetelar;
    int evjarat;
public:
    Szemelyauto(const string & _gyarto, int _vetelar, int _evjarat);
    ~Szemelyauto();
    string getGyarto() const;
    int getVetelar() const;
    int getEvjarat() const;
};

Szemelyauto::Szemelyauto(const string & _gyarto, int _vetelar, int _evjarat):
        gyarto(_gyarto),
        vetelar(_vetelar),
        evjarat(_evjarat)
{}

Szemelyauto::~Szemelyauto(){
    cout << "Deleted Szemelyauto:" << " " << gyarto << " " << vetelar << " " << evjarat << endl;
}

string Szemelyauto::getGyarto() const{
    return gyarto;
}
int Szemelyauto::getVetelar() const{
    return vetelar;
}
int Szemelyauto::getEvjarat() const{
    return evjarat;
}


class Tarolo
{
    Szemelyauto **kocsitomb;
    unsigned int meret;
public:
    Tarolo(unsigned int _meret);
    ~Tarolo();
    void ujkocsi(Szemelyauto *mutato, unsigned int index);
    void dragabbMint(int ar) const;
    int tipusSzamol(const string & keresett) const;
};



/*##SOLUTION##*/
// Ide kerul a valasz!
Tarolo::Tarolo(unsigned int _meret):meret(_meret) {
    kocsitomb=(Szemelyauto**) malloc(meret*sizeof (Szemelyauto));
}

Tarolo::~Tarolo() {
    for (int i = 0; i < meret; ++i) {
        delete(kocsitomb[i]);
    }
}

void Tarolo::ujkocsi(Szemelyauto *mutato, unsigned int index) {
    kocsitomb[index]=mutato;
}

void Tarolo::dragabbMint(int ar) const {
    for (int i = 0; i < meret; ++i) {
        if (kocsitomb[i]->getVetelar()>ar){
            cout<<kocsitomb[i]->getGyarto()<<" "<<kocsitomb[i]->getVetelar()<<" "<<kocsitomb[i]->getEvjarat()<<endl;
        }
    }
}

int Tarolo::tipusSzamol(const string &keresett) const {
    int darab = 0;
    for (int i = 0; i < meret; ++i) {
        if (kocsitomb[i]->getGyarto()==keresett){
            darab++;
        }
    }
    return darab;
}
/*##SOLUTION##*/

int main()
{
    Tarolo autotar(13);
    autotar.ujkocsi(new Szemelyauto("Fiat", 10822430, 1992), 0);
    autotar.ujkocsi(new Szemelyauto("Skoda", 3236756, 2006), 1);
    autotar.ujkocsi(new Szemelyauto("Seat", 28577980, 1994), 2);
    autotar.ujkocsi(new Szemelyauto("Suzuki", 21586538, 2017), 3);
    autotar.ujkocsi(new Szemelyauto("Mercedes", 6872172, 2017), 4);
    autotar.ujkocsi(new Szemelyauto("BMW", 18330447, 2003), 5);
    autotar.ujkocsi(new Szemelyauto("BMW", 5423150, 1994), 6);
    autotar.ujkocsi(new Szemelyauto("BMW", 16135718, 2003), 7);
    autotar.ujkocsi(new Szemelyauto("Ford", 4460446, 2009), 8);
    autotar.ujkocsi(new Szemelyauto("Audi", 28206156, 1997), 9);
    autotar.ujkocsi(new Szemelyauto("BMW", 1739178, 1999), 10);
    autotar.ujkocsi(new Szemelyauto("Skoda", 15620613, 2007), 11);
    autotar.ujkocsi(new Szemelyauto("BMW", 22518097, 2008), 12);

    cout << "dragabbMint" << endl;
    autotar.dragabbMint(22117053);
    cout << endl;
    cout << "tipusSzamol" << endl;
    cout << autotar.tipusSzamol("BMW") << endl;
    cout << endl;

    cout << "Vege" << endl;
    return 0;
}
