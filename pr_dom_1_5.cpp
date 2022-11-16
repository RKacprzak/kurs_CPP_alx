#include <iostream> 

int main () {
    
   
    int i=1;
    
   while (i<=100) {
      
           
                      
        if (i%3==0 && i%5==0 ) {
            
            std::cout<<"HopsasaTralala \n" ;
            i+=1;
            continue ;
            
            }
              
        if (i%3==0 ) {
            
            std::cout<<"Hopsasa \n";
            i+=1;
            continue ;
            }
                 
        if (i%5==0) {
            
            std::cout<<"Tralala \n" ;
          
            i+=1; 
            continue;
             } 
             
             else {
            std::cout<<i<<"\n";  
             i+=1;
             } 
               
        
            
      
    }
}
