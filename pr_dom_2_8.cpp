#include <iostream>   


void sortuj(int*tab, int k){
    
    int a=0;
        
     for(int j=0;j<k;j++){  
         
         int minimum=tab[j];
         
        for(int i=j+1; i<k;i++) {
            if (minimum>tab[i]){
                minimum=tab[i];
            }
        }
        for(int i=j;i<k;i++){
            if (tab[i]==minimum){
              a=i;
               
            }
        }
        
        int b = tab[j];
        tab[j]=tab[a];
        tab[a]=b;
       
        std::cout<<tab[j]<<"\n";
     }

}


int main(){
    int k;
    std::cout<<"Podaj wymiar tablicy: \n";
    std::cin>>k;
    
    int tab[k];
    
    for(int i=0; i<k; i+=1){
    std::cout<<"Podaj element "<<i<<" tablicy :\n";
    std::cin>>tab[i];
  
    }
    std::cout<<"Tablica nieposortowana: \n";
   for(int i=0; i<k; i+=1){
    std::cout<<tab[i]<<"\n";
   }
   
    std::cout<<"Tablica posortowana: \n";
    sortuj(tab,k);
   
  
} 
    

