#include <iostream>

int main () { 

    int N;
    int K;
    
    std::cin >> N >> K;
    
  
    
    while (K==0 || N==0) 
    {
        std::cout << "Wynik dzielenia to 0 lub występuje dzielenie przez 0. Wprowadź inną wartość N lub K \n";
        
         std::cin >> N >> K;
    } 
    
      int reszta = N%K;
    
    if (reszta==0)
    {
        std::cout << N <<"__podzielne przez__"<< K << "\n";
    }
        else 
        {
            std::cout << N <<"__niepodzielne przez__"<< K <<"\n";
        }

}
