#include <iostream> 

int main () {
    
   
    int i;
    
    for (i=1;i<=100;i+=1) {
        
        if (i%3==0 && i%5==0 && i!=0) {
            
            std::cout<<"HopsasaTralala \n" ;
            
            i=i+1;
        }
        
        
        if (i%3==0 && i!=0) {
            
            std::cout<<"Hopsasa \n";
            i=i+1;
        }
        
        if (i%5==0 && i!=0) {
            
            std::cout<<"Tralala \n" ;
            
            if (i<100){
            i=i+1;
            }
            else {
                continue;
            }
        }
        
     
        
        std::cout<<i<<"\n";
        
      
    }
}
