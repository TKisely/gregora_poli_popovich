#include <iostream>
using namespace std;

class Szamok{
private:
    int ertek,azonosito;
public:
    Szamok(int _ertek=2912, int _azonosito=1998){
        this->ertek=_ertek;
        this->azonosito=_azonosito;
    }

    int getErtek(){
        return ertek;
    }

    int getAzonosito(){
        return azonosito;
    }

    int melyik(){
        return ertek>azonosito?ertek:azonosito;
    }
};

int main() {

    int x1,x2;
    cin>>x1>>x2;
    Szamok elso(x1,x2);
    cout<<elso.getErtek()<<endl;
    cout<<elso.getAzonosito()<<endl;
    cout<<elso.melyik()<<endl;
    Szamok masodik;
    cout<<masodik.getErtek()<<endl;
    cout<<masodik.getAzonosito()<<endl;
    cout<<masodik.melyik()<<endl;


    std::cout << "DONE!" << std::endl;
    return 0;
}
