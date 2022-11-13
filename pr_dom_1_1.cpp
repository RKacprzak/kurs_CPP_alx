#include <iostream> 

int main () {
    
    int A; //pole trójkąta
    int a; // przyprostokątna
    int b; // przyprostokątna
    int iloczyn;
    
    std::cout <<"Podaj długości przyprostokątnych a i b \n";
    std::cin >> a >> b;
    
    iloczyn=a*b;
     
    A=iloczyn/2;
    int reszta = iloczyn%2;
    
   
    
    if (reszta==0)
        {   
    std::cout << "Pole trójkąta:"<< A <<"\n" ;
        }
        else
        {  
            std::cout << "Pole trójkąta:"<< A <<" i "<< reszta<<"/2 \n" ;
        }
}
