#include <iostream>

std::string wielkie_litery(std::string &wyraz){ 
    
      int n = wyraz.size();  
        for (int i=0; i<n; i++){
           wyraz[i]=toupper(wyraz[i]);
        }
     return wyraz;   
}


bool czy_litera (std::string &wyraz){  
    bool y=true;
    bool x;
    int n = wyraz.size();
 
    for(int i=0; i<n; i++){
       
        if ((wyraz[i] >='a'&& wyraz[i]<='z')||(wyraz[i]>='A' && wyraz[i]<='Z')){
            x=true;
        }
        else{
            x=false;
        }
    y=y*x;     
   }
   return y;
}

void szyfruj(std::string &wyraz,int &p){ 

    std::cout<<"Liczba znaków :"<<wyraz.size()<<"\n"; 
    int n = wyraz.size();
    char wyr_tab[n+1];
       
       for(int i=0; i<n+1; i++){
            
            wyr_tab[i] = wyraz[i];
       }
       
    char alfabet [52]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W', 'X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W', 'X','Y','Z'};  
 
    
        for(int i=0;i<n;i++){ 
            for(int j=0; j<27;j++){
        
                if(alfabet[j]==wyr_tab[i]){
                    wyr_tab[i]=alfabet[j+p];
                    break;                  
                    }
                }
       std::cout<<wyr_tab[i];   
    }
    std::cout<<"\n";
    
}

int main(){
    
    int p;
    std::string wyraz;
    int odp;
   do {
        Restart_1:   
        std::cout<<"Podaj szyfrowany wyraz: \n";
        std::cin>>wyraz;
           
            if (czy_litera(wyraz)!=1){       
                std::cout<<"Nie wszystkie znaki są literami. Wprowadź poprawnie napis:\n";
                goto Restart_1;
                }
                
        wyraz=wielkie_litery(wyraz);
        std::cout<<"Podaj przesunięcie szyfrujące:\n";
        std::cin>>p;
        std::cout<<"Zaszyfrowany napis:\n";
        szyfruj(wyraz,p);
        odp=0;
   
            Restart_2:   
            std::cout<<"Czy chcesz szyfrować kolejny wyraz? (1-TAK;2-NIE)\n";
        
            std::cin>>odp;
            if(odp!=1 && odp!=2 ) {
                std::cout<<"Wprowadź poprawną odpowiedź \n";
                std::cin.clear();      
                std::cin.ignore(1000,'\n');
                goto Restart_2;
            }
            
   }  while (odp==1);
       

}
