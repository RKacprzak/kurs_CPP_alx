#include <iostream>

int main () {
    
    int N;
    int reszta;
    
    std::cout<<"Wprowadź liczbę całkowitą:\n";
    std::cin>>N;
   
    
    while (N>0){
        
           reszta=N%10; 
         
         if (N>10) {
           
        std::cout<<reszta<<",";

        }
            else  {
                
                std::cout<<N;
            }
        
        N=N/10;
        
        }
        
     std::cout<<"\n";
}
