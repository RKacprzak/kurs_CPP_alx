#include <iostream> 


int idx(int* tab, int k){
    
    int j=0;
    int minimum=tab[0];   
    for (int i=1; i<k; i+=1){
      
       if (minimum>tab[i]){
           minimum=tab[i];            
           j=i;
        }
            }
             return j;
        }
   

int main(){

    int k;
    std::cout<<"Podaj rozmiar tablicy:\n";
    std::cin>>k;
    
    int tab[k];
    
    for(int i=0; i<k; i+=1){
        std::cout<<"Podaj liczbę elementu "<<i<<" tablicy\n";
        std::cin>>tab[i];
       
    }
    
    std::cout<<"Najmniejsza liczba występuje w elemencie "<<idx(tab,k)<<"\n";

}
