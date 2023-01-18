#include <iostream>


void szyfruj(std::string &wyraz,int &p){ //argumenty są przekazywane funkcji przez referencę

        // tutaj przypisuję znaki stringa tabeli char (dla przykładu metody 
        //- przesunięcie można zrobić od razu na pozycjach liter w stringach);
    std::cout<<"Liczba znaków :"<<wyraz.size()<<"\n"; 
        
    int n = wyraz.size();
        
    char wyr_tab[n+1]; //n+1 jest podyktowane tym, że zmienna char jest tablicą większą o 1 
                       //niż liczba znaków, gdyż na końcu ciągu znaków jest zawsze niewidzialne "0", 
                       //np. napis "Ola" w zapisie char będzie wyglądał jako tabela znaków {O,l,a,0}
       
       for(int i=0; i<n+1; i++){
            
            wyr_tab[i] = wyraz[i];
       }
       
    char alfabet [52]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W', 'X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W', 'X','Y','Z'};  
    //najprostszy sposób na zapewnienie ciągłości przesunięć szyfrujących w przypadku ostatnich liter alfabetu 
    //to drugi zestaw liter alfabetu we wzorcowej tabeli szyfrowej
    
        for(int i=0;i<n;i++){ 
            for(int j=0; j<27;j++){
        
                if(alfabet[j]==wyr_tab[i]){
                    wyr_tab[i]=alfabet[j+p];
                    break;                    //musimy przerwać działanie tej wewn. pętli w przypadku równości 
                                             //i przypisania przesuniętej litery alfabetu, gdyż w przeciwnym przypadku równości 
                                             //i przypisania będą się powtarzały, 
                                             //bo alfabet[j+p] będzie w następnym kroku pętli literą alfabet [j];
                    }
                }
       std::cout<<wyr_tab[i];   
    }
    std::cout<<"\n";
    
}

int main(){
    
    int p;
    std::string wyraz;
    std::cout<<"Podaj szyfrowany wyraz(wielkimi literami): \n";
    std::cin>>wyraz;
    std::cout<<"Podaj przesunięcie szyfrujące:\n";
    std::cin>>p;
    std::cout<<"Zaszyfrowany napis:\n";
    szyfruj(wyraz,p);

}
