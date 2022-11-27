#include <iostream>


  float srednia (int *liczby,int k) 
       {
        float suma= 0;
        for (int i=0; i<k; i+=1){
             
            suma = suma + liczby[i];
        }
           float sr=suma/k;
           return sr; 
       }


int main (){

    int k;
  
    std::cout<<"Podaj wymiar tablicy:\n";
    std::cin>>k;
    int liczby[k]; 
    
   for(int i=0; i<k; i+=1){
        std::cout<<"Podaj liczbę nr "<<i+1<<"\n";
        std::cin>>liczby[i];
     
    }
        
    std::cout<<"Srednia arytmetyczna:"<<srednia(liczby,k)<<"\n";
        
            
}
                
            
