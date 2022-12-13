#include <iostream>
#include <cmath>

int rownanie_kwadratowe(double a, double b, double c, double* rozw1, double* rozw2){
    
        
    double delta = b*b - 4*a*c;
    if (a==0){
        *rozw1 = -c/b;
        return 1;
    }
     else if (delta>0) {
            *rozw1 = (-b-sqrt(delta));
            *rozw2 = (-b+sqrt(delta));
            return 2;
        }
        else if (delta==0){
            *rozw1 = -b/(2*a);
            return 1; 
        }
        else {
            return 0;
        }
}

int main(){
    
    double a = 0.0;
    double b = 0.0; 
    double c = 0.0;
    double r1 = 0.0;
    double r2 = 0.0;
    
    std::cout<<"Podaj a: \n";
    std::cin>>a;
    std::cout<<"Podaj b: \n";
    std::cin>>b;
    std::cout<<"Podaj c: \n";
    std::cin>>c;
    
   if (a==0){
       std::cout<<"Równanie jest liniowe \n";
       
    }
    
    int ile = rownanie_kwadratowe(a,b,c,&r1,&r2);
        if (ile==2){
            std::cout<<"Równanie ma "<<ile<<" rozwiązania:\n";
            std::cout<<"x1="<<r1<<" i x2="<<r2<<"\n";
        }
        else if(ile==1){
            std::cout<<"Równanie ma "<<ile<<" rozwiązanie:\n";
            std::cout<<"x0="<<r1<<"\n"; 
        }
        else {
            std::cout<<"Brak rozwiązań\n";
        }
}
            
