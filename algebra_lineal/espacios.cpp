//dependencia lineal. 
#include <iostream> 
#include <algorithm>
#include <initializer_list>
#include <cmath> 
#include <vector>

template <typename T,int fil, int col>
class matrix{
    public: 
        matrix(): data(fil*col, T{}) {}
        //matrix(std::vector<T> 1, std::vector<T> 2, std::vector<T> 3): data(){for, asignando cada valor a cada posicion de la matrix.}
        matrix(std::initializer_lst<T> lst) : data(lst) {
            if(data.size() < col*fil){
                data.resize(fil*col,t{});
            }
        }

        int get_col()const{return col; }
        int get_fil()const{return fil; }
    private:
        std::vector<T> datos;
        
};



int main(){ 
    return 0; 
}