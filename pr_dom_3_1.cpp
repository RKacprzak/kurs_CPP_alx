#include <iostream>

bool czy_tylko_cyfry ( char* napis){
    
   for(int i=0; napis[i]!=0; i++){
        
       if(napis[i]>='0' && napis[i]<='9'){
            
            return true; 
        }
       else {
          return false;
       }
             
    }
  return false;
}

int main (){
     
    
     char napis [20]; 
     std::cout<<"Wprowadź napis: \n";
     std::cin>>napis;
     
     
     std::cout<<"Czy napis zawiera tylko cyfry? TAK-1, NIE-0 \n";
     std::cout<<czy_tylko_cyfry(napis)<<"\n";
     
}
     
     
       
