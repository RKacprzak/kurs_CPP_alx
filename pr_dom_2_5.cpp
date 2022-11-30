#include <iostream>

int ile_wsp(int* tab1, int k, int* tab2, int n){

          int l=0;
          for(int i=0; i<k; i+=1){
            for(int j=0; j<n; j+=1){
                if (tab1[i]==tab2[j]){
                    l=l+1;
                    }
                   }
              }
              return l; 
  }     
            
int main(){
    
    int k;
    int n;
    std::cout<<"Podaj wielkość tablicy 1-wymiarowej TAB1:\n";
    std::cin>>k;
    std::cout<<"Podaj wielkość tablicy 1-wymiarowej TAB2:\n";
    std::cin>>n;
    int tab1[k];
    int tab2[n];
    
    
    for(int i=0; i<k; i+=1){
            std::cout<<"Wprowadź liczbę dla elementu "<<i<<" tablicy TAB1: \n";
            std::cin>>tab1[i];
            }
     for(int i=0; i<n; i+=1){
            std::cout<<"Wprowadź liczbę dla elementu "<<i<<" tablicy TAB2: \n";
            std::cin>>tab2[i];
            }       
                 
     std::cout<<"Obie tabele mają "<<ile_wsp(tab1,k,tab2,n)<<" wspólnych elementów\n";
    } 
   
