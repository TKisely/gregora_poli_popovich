#include <iostream>
#include <cmath>
using namespace std;

/*##SOLUTION##*/
// Ide kerul a valasz!
template <typename T1, typename T2>
class AdatHalmaz {
public:
    T1* egyik_tomb;
    T2* masik_tomb;
    unsigned egyik_merete;
    unsigned masik_merete;

    AdatHalmaz();
    ~AdatHalmaz();
    void uj(T1 adat);
    void uj(T2 adat);
    unsigned elsomeret(){return egyik_merete;}
    unsigned meret2(){return masik_merete;}
    T1 leker1(unsigned i);
    T2 masodikleker(unsigned i);
};

template <typename T1, typename T2>
AdatHalmaz<T1,T2>::AdatHalmaz(){
    egyik_tomb= new T1[0];
    masik_tomb= new T2[0];
    egyik_merete=0;
    masik_merete=0;
}

template <typename T1, typename T2>
AdatHalmaz<T1,T2>::~AdatHalmaz(){
    if(egyik_merete==0&&masik_merete==0){
        return;
    }
    if (egyik_merete==1){
        delete egyik_tomb;
    }
    if(masik_merete==1){
        delete masik_tomb;
    }
    delete [] egyik_tomb;
    delete [] masik_tomb;
}

template <typename T1, typename T2>
T1 AdatHalmaz<T1,T2>::leker1(unsigned i) {
    return egyik_tomb[i];
}

template <typename T1, typename T2>
T2 AdatHalmaz<T1,T2>::masodikleker(unsigned i) {
    return masik_tomb[i];
}

template <typename T1, typename T2>
void AdatHalmaz<T1,T2>::uj(T1 adat) {
    T1* temp;
    unsigned uj_meret=egyik_merete+1;
    temp=new T1[uj_meret];
    for (unsigned i = 0; i < egyik_merete; ++i) {
        temp[i]=egyik_tomb[i];
    }
    temp[egyik_merete]=adat;
    delete [] egyik_tomb;
    egyik_tomb=temp;
    egyik_merete=uj_meret;
}

template <typename T1, typename T2>
void AdatHalmaz<T1,T2>::uj(T2 adat) {
    T2* temp;
    unsigned uj_meret=masik_merete+1;
    temp=new T2[uj_meret];
    for (unsigned i = 0; i < masik_merete; ++i) {
        temp[i]=masik_tomb[i];
    }
    temp[masik_merete]=adat;
    delete [] masik_tomb;
    masik_tomb=temp;
    masik_merete= uj_meret;
}


/*##SOLUTION##*/

int main()
{
    cout << "Feltoltes" << endl;
    AdatHalmaz<double, int> tarolo;
    tarolo.uj(60);
    tarolo.uj(26.3);
    tarolo.uj(8.9);
    tarolo.uj(34.9);
    tarolo.uj(44.7);
    tarolo.uj(71);
    tarolo.uj(22.3);
    tarolo.uj(26.9);
    tarolo.uj(28);
    tarolo.uj(85);
    tarolo.uj(51);

    cout << endl << "Listazas" << endl;
    for (unsigned i=0; i<tarolo.elsomeret(); i++)
        cout << i << " " << tarolo.leker1(i) << endl;
    for (unsigned i=0; i<tarolo.meret2(); i++)
        cout << i << " " << tarolo.masodikleker(i) << endl;

    cout << endl << "Felszabaditas" << endl;
    return 0;
}
