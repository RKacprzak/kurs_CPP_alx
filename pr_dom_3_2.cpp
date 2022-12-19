#include <iostream>

void szyfruj(char* napis,int p,int k){

    char alfabet [26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W', 'X','Y','Z'};
    
 for(int i=0;i<k;i++){ 
    for(int j=0; j<27;j++){
        
        if(alfabet[j]==napis[i]){
            napis[i]=alfabet[j+p];
            break;
        }
    }
       std::cout<<napis[i];    
 }
    std::cout<<"\n";
    
}

int main(){
    
    int p;
    int k;
    std::cout<<"Podaj długość szyfrowanego napisu (liczbę liter):\n";
    std::cin>>k;
    char napis[k-1];
    std::cout<<"Podaj przesunięcie szyfrujące:\n";
    std::cin>>p;
    std::cout<<"Wprowadź szyfrowany napis: \n";
    std::cin>>napis;
    std::cout<<"Zaszyfrowany napis:\n";
    szyfruj(napis,p,k);

}
