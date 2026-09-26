#include <iostream>

class Color{
    public:
        Color() : c{0,0,0} {}
        Color(double a, double b, double d) : c{a,b,d} {} 
        double c[3];
};

void escribirColor(std::ostream& out, const Color& c){
    auto r = c.c[0];
    auto g = c.c[1];
    auto b = c.c[2];

    int rb = int(255.99*r);
    int gb = int(255.99*g);
    int bb = int(255.99*b);

    out << rb << ' ' << gb << ' ' << bb << '\n';
}


int main(){

    //medidas imagen 
    int imgAncho = 250; 
    int imgAlto = 250;
    
    //render 
    std::cout << "P3\n" << imgAncho << ' ' << imgAlto << "\n255\n";
    /*j = ancho 
      i = altura */
    for(int j = 0; j < imgAlto; j++){
        for(int i = 0; i <imgAncho; i++){
            auto pixel=Color(double(i)/(imgAncho-1),double(j)/(imgAlto-1),0);
            escribirColor(std::cout, pixel);
        }
    }
    return 0; 
}