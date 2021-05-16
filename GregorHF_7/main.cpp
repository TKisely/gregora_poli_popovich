#include <iostream>
using namespace std;

class IntVektor{
    int tomb[3];
public:
    IntVektor(){
        tomb[0]=0;
        tomb[1]=0;
        tomb[2]=0;
    }
    IntVektor(int a, int b, int c){
        tomb[0]=a;
        tomb[1]=b;
        tomb[2]=c;
    }
    int &operator[](unsigned index){
        return tomb[index];
    }
    const int &operator[](unsigned index) const{
        return tomb[index];
    }
    void print() const{
        cout << "(" << tomb[0] << ";" << tomb[1] << ";" << tomb[2] << ")" << endl;
    }
};

/*##SOLUTION##*/
// Ide kerul a valasz!
IntVektor operator+(const IntVektor eredeti,int szam){
    IntVektor ret(eredeti[0]+szam,eredeti[1]+szam,eredeti[2]+szam);
    return ret;
}
IntVektor operator-(const IntVektor eredeti,int szam){
    IntVektor ret(eredeti[0]-szam,eredeti[1]-szam,eredeti[2]-szam);
    return ret;
}
IntVektor operator-(const IntVektor eredeti,const IntVektor eredeti_masik){
    IntVektor ret(eredeti[0]-eredeti_masik[0],eredeti[1]-eredeti_masik[1],eredeti[2]-eredeti_masik[2]);
    return ret;
}
int operator!(const IntVektor eredeti){
    int ret=eredeti[0]*eredeti[0]+eredeti[1]*eredeti[1]+eredeti[2]*eredeti[2];
    return ret;
}
IntVektor& operator-=(IntVektor& eredeti,int szam){
    eredeti[0]-=szam;
    eredeti[1]-=szam;
    eredeti[2]-=szam;
    return eredeti;
}
IntVektor& operator-=(IntVektor& eredeti,IntVektor eredeti_masik){
    eredeti[0]-=eredeti_masik[0];
    eredeti[1]-=eredeti_masik[1];
    eredeti[2]-=eredeti_masik[2];
    return eredeti;
}

/*##SOLUTION##*/


int main()
{
    IntVektor vec0(63, 17, 38);
    IntVektor vec1(11, 26, 59);
    IntVektor vec2(54, 15, 9);
    IntVektor vec3(61, 63, 29);
    IntVektor vec4(10, 29, 61);
    IntVektor vec5(42, 63, 11);
    IntVektor vec6(37, 67, 11);
    IntVektor vec7(17, 68, 50);


    {
        IntVektor tmp=vec4+30;
        tmp.print();
    }
    {
        IntVektor tmp=vec5-46;
        tmp.print();
    }
    {
        int tmp=!vec1;
        cout << tmp << endl;
    }
    {
        IntVektor tmp=vec6-vec0;
        tmp.print();
    }
    {
        vec7-=41;
        vec7.print();
    }
    {
        vec3-=vec2;
        vec3.print();
    }

    return 0;
}
