#include <iostream>

int ile_wiekszych(int *tab, int k, int n){
    
        int j=0;
        
        for (int i=0; i<k; i+=1){
            if (n<tab[i]){
                j=j+1;
            }
                 }
                   return j;
    }
    
int main(){
    int k;
    int n;
    std::cout<<"Podaj rozmiar tablicy 1-wymiarowej:\n";
    std::cin>>k;
     int tab[k];
        
        for(int i=0; i<k; i+=1){
            std::cout<<"Wprowadź liczbę całkowitą w elemencie "<<i<<" tablicy: \n";
            std::cin>>tab[i];
        }
        std::cout<<"Podaj liczbę n:\n";
        std::cin>> n;
        
        std::cout<<"Tablica zawiera "<<ile_wiekszych(tab,k,n)<<" liczb/ę/y  większych/ą/e od liczby "<<n<<"\n";

}
