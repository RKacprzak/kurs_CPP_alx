#include <iostream>

int main () {
    
    int N;
    int i;  //liczba kolumn
    int k; // liczba wierszy
    
    std::cout<<"Podaj liczbę całkowitą: \n";
    
    std::cin>>N;
    
    for (k=1; k<=N; k+=1){
    
       for (i=1; i<=N; i+=1) {
        
            if (i%2==0 && k%2!=0){
                
                std::cout<<"1";
            }
            
            if (i%2!=0 && k%2==0) {
                
                    std::cout<<"1";
                
                      }  
                      
            if (i%2==0 && k%2==0) {
                
                    std::cout<<"0";
                
                            } 
                            
            if (i%2!=0 && k%2!=0){
                
                    std::cout<<"0";
            }
                
                       }
        std::cout<<"\n";
                            }
}
