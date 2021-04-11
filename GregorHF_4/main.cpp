#include <iostream>
using namespace std;

class Munkas{
    int eletkor;
    int fizetes;
public:
    Munkas();
    Munkas(int _eletkor, int _fizetes);
    int getEletkor() const;
    int getFizetes() const;
};

Munkas::Munkas():
        eletkor(0),
        fizetes(0)
{}

Munkas::Munkas(int _eletkor, int _fizetes):
        eletkor(_eletkor),
        fizetes(_fizetes)
{}

int Munkas::getEletkor() const{
    return eletkor;
}
int Munkas::getFizetes() const{
    return fizetes;
}

class Ceg{
private:
    unsigned darab;
    Munkas *alkalmazottak;
protected:
    void kibovit(unsigned mennyivel);
public:
    Ceg(unsigned alapmeret=10);
    ~Ceg();
    unsigned aktualisdarab() const;
    Munkas leker(unsigned index) const;
    void beallit(const Munkas &adat, unsigned index);
};

Ceg::Ceg(unsigned alapmeret):
        darab(alapmeret)
{
    cout << "Ceg letrejott " << alapmeret << " merettel" << endl;
    if (alapmeret==0) alkalmazottak=nullptr;
    else alkalmazottak=new Munkas[alapmeret];
}

Ceg::~Ceg(){
    delete [] alkalmazottak;
}

unsigned Ceg::aktualisdarab() const{
    return darab;
}

void Ceg::kibovit(unsigned mennyivel){
    cout << "Hozzaadunk " << mennyivel << " uj elemet (" << darab;
    Munkas *ujtomb=new Munkas[darab+mennyivel];
    for (unsigned i=0; i<darab; i++)
        ujtomb[i]=alkalmazottak[i];
    delete [] alkalmazottak;
    alkalmazottak=ujtomb;
    darab+=mennyivel;
    cout << "->" << darab << ")" << endl;
}

Munkas Ceg::leker(unsigned index) const{
    if (index>=darab) return Munkas();
    else return alkalmazottak[index];
}

void Ceg::beallit(const Munkas &adat, unsigned index){
    if (index<darab) alkalmazottak[index]=adat;
}

/*##SOLUTION##*/
// Ide kerul a valasz!
class SajatCeg:public Ceg{
public:
    void beallit(const Munkas &adat, unsigned index);
    int mennyiIdosebb(int _kor) const;
    void tobbetKeresoketListaz(int _fizu) const;
};

int SajatCeg::mennyiIdosebb(int _kor) const {
    int darab=0;
    for (int i = 0; i < aktualisdarab(); ++i) {
        if (leker(i).getEletkor()>_kor){
            darab++;
        }
    }
    return darab;
}

void SajatCeg::tobbetKeresoketListaz(int _fizu) const {
    for (int i = 0; i < aktualisdarab(); ++i) {
        if (leker(i).getFizetes()>_fizu){
            cout<<leker(i).getEletkor()<<" "<<leker(i).getFizetes()<<endl;
        }
    }
}

void SajatCeg::beallit(const Munkas &adat, unsigned int index) {
    if(index<aktualisdarab()){Ceg::beallit(adat,index);}
    else{
        kibovit(index-aktualisdarab()+1);
        Ceg::beallit(adat,index);
    }

}
/*##SOLUTION##*/


int main()
{
    cout << "Feltoltes" << endl;
    SajatCeg sajatceg;
    sajatceg.beallit(Munkas(45, 327916), 7);
    sajatceg.beallit(Munkas(46, 292848), 5);
    sajatceg.beallit(Munkas(39, 163722), 9);
    sajatceg.beallit(Munkas(49, 293442), 10);
    sajatceg.beallit(Munkas(46, 314602), 4);
    sajatceg.beallit(Munkas(22, 199067), 2);
    sajatceg.beallit(Munkas(32, 293654), 0);
    sajatceg.beallit(Munkas(53, 277814), 6);
    sajatceg.beallit(Munkas(25, 232557), 3);
    sajatceg.beallit(Munkas(45, 243786), 1);
    sajatceg.beallit(Munkas(48, 284284), 8);

    cout << endl << "Listazas" << endl;
    for (unsigned i=0; i<sajatceg.aktualisdarab(); i++)
    {
        Munkas aktualis=sajatceg.leker(i);
        cout << aktualis.getEletkor()<< " " << aktualis.getFizetes() << endl;
    }

    cout << endl << "Statisztikak" << endl;
    cout << "mennyiIdosebb" << endl;
    cout << sajatceg.mennyiIdosebb(47) << endl;
    cout << endl;
    cout << "tobbetKeresoketListaz" << endl;
    sajatceg.tobbetKeresoketListaz(249611);
    cout << endl;

    cout << "Vege" << endl;
    return 0;
}
