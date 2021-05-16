#include <iostream>
#include <cmath>
using namespace std;

double roundToPlaces(double value, int decimal_places) {
    const double multiplier = std::pow(10.0, decimal_places);
    return std::round(value * multiplier+0.0000001) / multiplier;
}

/*##SOLUTION##*/
// Ide kerul a valasz!
class Alak{
public:
    virtual unsigned csucsSzam() const=0;
    virtual double kerulet() const=0;
    virtual double teruletSzamit() const=0;

    void adatokKiir(){
        cout<<"Kerulet: "<< roundToPlaces(kerulet(),2)<<
              ", terulet: "<< roundToPlaces(teruletSzamit(),2)<<endl;
    }

};
/*##SOLUTION##*/

class Tarolo{
private:
    unsigned meret;
    Alak **tomb;
public:
    Tarolo(unsigned alapmeret=10);
    ~Tarolo();
    unsigned getmeret() const;
    void beallit(Alak *adat, unsigned index);
    void mindentListaz() const;
};

Tarolo::Tarolo(unsigned alapmeret):
        meret(alapmeret)
{
    if (alapmeret==0) tomb=nullptr;
    else tomb=new Alak*[alapmeret];
    for (unsigned i=0; i<meret; i++)
        tomb[i]=nullptr;
}

Tarolo::~Tarolo(){
    for (unsigned i=0; i<meret; i++)
        delete tomb[i];
    delete [] tomb;
}

unsigned Tarolo::getmeret() const{
    return meret;
}

void Tarolo::beallit(Alak *adat, unsigned index){
    if (index>=meret){
        delete adat;
        return;
    }
    if (tomb[index]) delete tomb[index];
    tomb[index]=adat;
}

void Tarolo::mindentListaz() const{
    for (unsigned i=0; i<meret; i++){
        cout << "Csucsok szama: " << tomb[i]->csucsSzam() << endl;
        tomb[i]->adatokKiir();
    }
}

class Teglalap : public Alak{
    double szelesseg, magassag;
public:
    Teglalap(double _szelesseg, double _magassag):
            szelesseg(_szelesseg),
            magassag(_magassag)
    {}
    ~Teglalap(){
        cout << "Teglalap deleted" << endl;
    }
    double kerulet() const override{
        return 2*(szelesseg+magassag);
    }
    double teruletSzamit() const override{
        return szelesseg*magassag;
    }
    unsigned csucsSzam() const override{
        return 4;
    }
};

class KorCikk : public Alak{
    double sugar, szog;
public:
    KorCikk(double _sugar, double _szog):
            sugar(_sugar),
            szog(_szog)
    {}
    ~KorCikk(){
        cout << "KorCikk deleted" << endl;
    }
    double kerulet() const override{
        return sugar*szog+2*sugar;
    }
    double teruletSzamit() const override{
        return sugar*sugar*szog/2;
    }
    unsigned csucsSzam() const override{
        return 2;
    }
};



int main()
{
    cout << "Alak osztaly absztrakt? " << (is_abstract<Alak>::value?"IGEN":"NEM") << endl;

    cout << "Feltoltes" << endl;
    Tarolo tarolo(8);
    tarolo.beallit(new KorCikk(4.97, 3.73), 0);
    tarolo.beallit(new Teglalap(1.2, 4.63), 1);
    tarolo.beallit(new Teglalap(3.08, 3.33), 2);
    tarolo.beallit(new Teglalap(4.58, 4.49), 3);
    tarolo.beallit(new KorCikk(2.25, 3.43), 4);
    tarolo.beallit(new Teglalap(1.19, 3.1), 5);
    tarolo.beallit(new Teglalap(2.66, 2.05), 6);
    tarolo.beallit(new KorCikk(4.92, 4.59), 7);

    cout << endl << "Listazas" << endl;
    tarolo.mindentListaz();

    cout << endl << "Felszabaditas" << endl;
    return 0;
}
