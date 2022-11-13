#include <iostream>

int main() {

    int A=0;
    int B=0;
    int C=0;
    int max;
    int suma_2_bokow;
    
    std::cout<<" Wprowadź długości 3 boków trójkąta \n";
    std::cin>>A>>B>>C; 
    
    //szukanie najdłuższego boku
    max=A;
    suma_2_bokow=B+C;
    
    if (B>max)
    {
        max=B;
        suma_2_bokow=A+C;
    }
    if (C>max)
    {
        max=C;
        suma_2_bokow=A+B;
    }
    
   
     // warunek zbudowania trójkąta
     
    if (max<suma_2_bokow)
    {
        std::cout<<"Można zbudować trójkąt\n";
    }
        else 
        {
            std::cout<<"Nie można zbudować trójkąta\n";
        }
    
    
}
