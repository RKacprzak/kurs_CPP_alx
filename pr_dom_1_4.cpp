#include <iostream>

int main () {
    
    int A;
    int B;
    int i;
    
    std::cout<<"Podaj liczbę A \n";
    std::cin >> A;
    std::cout<<"Podaj liczbę B \n";
    std::cin >> B;
    
    for (i=A ; i<B ; i+=1) {
        
        if (i==0) {
            continue;
        }
        
            if (i%3==0) {
                std::cout<< i <<"__jest podzielne przez 3 \n";
        }
            else if (i%5==0) {
                std::cout<< i <<"__jest podzielne przez 5 \n";
            }
        }
    }
