#include<iostream>

class Metronomo{ //velocidad del compas
public:
    //constructor
    Metronomo(): bpm{50} {}
    //return
    int sbpm() const{return bpm;}
private:
    int bpm;
};

class Compas: public Metronomo{ //compas musical
public:
    //constructores
    Compas(): num{3}, div{2} {}
    Compas(int i,int j,int k): num{i}, div{j} {}
    //return numbers (show/use)
    int snum() const{return num;}
    int sdiv() const{return div;}
private:
    int num;
    int div;
};


bool numprimo(int a) { //numero primo?
    bool num = true;
    for (int i = 2; i<a; i++) {
        if (a%i == 0) {
            num = false;
            return false;;
        }
    }
    return num;
}

int maximocd(const int& a, const int& b) { //maximo comun divisor
    int corto,largo;
    int division_mapa = 1;
    if (a>b) {largo = a;corto = b;}
    else if (a<b){largo = b; corto = a;}
    else {return a;}
    for (int i = 2; i<=corto; i++) {
        if (numprimo(i)==true) {
            if (corto%i== 0 && largo%i == 0) {
                corto/=i;
                largo/=i;
                division_mapa *= i;
                i--;
            }
        }
        if (corto==1) break;
    }
    return division_mapa;
}

int minimocm(int a, int b) { //minimo comun multiplo
        return a*b/maximocd(a,b);
}


int main(){
    Compas hola;
    std::cout << "Minimo comun multiplo de " << hola.snum() << " y de " << hola.sdiv() << " = " << minimocm(hola.snum(), hola.sdiv()) << std::endl;

    return 0;
}