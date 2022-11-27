#include <iostream>

int main (){
    
    int i; 
    int liczby [10]; 
    
        for (i=0; i<10; i+=1) {
            
            std::cout<<"Podaj liczbę "<<i+1<<":\n";
            std::cin>>liczby[i];
            
        }
        
        std::cout<<"\n";
        std::cout<<"Parzyste:\n";
        for (i=0; i<10; i+=1) {
           
            if (liczby[i]%2==0){
                
            std::cout<<liczby[i]<<"\n";
            }
        
            }
            
         std::cout<<"\n";
         
        std::cout<<"Nieparzyste:\n";     
        for (i=0; i<10; i+=1){
            
                
         if (liczby[i]%2!=0){
           
            std::cout<<liczby[i]<<"\n";
            }
            
        }
        
          std::cout<<"\n";
}
                
            
