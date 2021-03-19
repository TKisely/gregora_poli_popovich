using namespace std;
#include <iostream>

class MyClass{
private:
    int tarolt;
public:
    int beker(){
        int be;
        cin>>be;
        return be;
    }

    void tarol(int szam){
        this->tarolt=szam;
    }

    void mutat(){
        cout<<"A tarolt ertek : "<<tarolt<<endl;
    }
};

int main() {

    MyClass var;
    int i=var.beker();
    cout<<i<<endl;
    cin>>i;
    var.tarol(i);
    var.mutat();

    std::cout << "Lefutottam." << std::endl;
    return 0;
}
