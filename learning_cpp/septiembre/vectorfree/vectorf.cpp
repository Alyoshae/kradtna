#include <iostream> 
#include<initializer_list> 
#include<algorithm>

class Vector{
    public:  
        //constructores
        Vector(int s) :sz{s}, elem{new double[s]} {
            for(int i=0; i<s; ++i){
                elem[i]=0;
            }
        }
        ~Vector() {delete[] elem;}

        Vector(std::initializer_list<double> lst) :sz{static_cast<int>(lst.size())}, elem{new double[sz]}{ //constructor de lista hola = {10,20,30}; posible 
            std::copy(lst.begin(),lst.end(),elem); //itearador desde el inicio hasta el final como while
        }
        Vector(const Vector&);

        //operadores
        double& operator[](int n){return elem[n];} //regresa la direccion de la casilla y no crea una variable temporal. 
        const double& operator[](int n) const{return(elem[n]);}
        Vector& operator=(std::initializer_list<double>); //poder asignar una lista a un vector ya creado. 
        //funciones
        int size() const{return sz;}

        

    private:
        int sz;
        double* elem;
};

Vector::Vector(const Vector& arg) : sz(arg.sz), elem(new double[arg.sz]){ //constructor copia. regresa otro vector pero lee el primero y copia todos los mismos datos en el. 
        std::copy(arg.elem,arg.elem+sz,elem);
    }


int main(){
    Vector hola(5);
    Vector adios = {10,20,30};
    std::cout << hola[1];
    std::cout << std::endl << adios[1];
    return 0;
}