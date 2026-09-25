#include <iostream> 
class Metronomo{
    public: 
        //constructores 
        Metronomo(): num{4}, div{4}, bpm{80} {}
        Metronomo(int i,int j,int k): num{i}, div{j}, bpm{k} {}
        //return numbers (show)
        int snum() const{return num;}
        int sbpm() const{return bpm;}
        int sdiv() const{return div;}
    private: 
        int num;
        int div;
        int bpm; 
};

int main(){
    Metronomo hola; 
    std::cout << hola.snum()*hola.sdiv() << std::endl; 
    
    return 0; 
}