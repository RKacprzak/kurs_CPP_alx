#include <iostream>

void swap(int *a, int *b){
     
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

int main(){
    
    int a;
    int b;
    
    std::cout<<"Wprowadź liczbę całkowitą a:\n";
    std::cin>>a;
    std::cout<<"Wprowadź liczbę całkowitą b:\n";
    std::cin>>b; 
    
    swap(&a,&b);
    
    std::cout<<"a = "<<a<<"\n";
    std::cout<<"b = "<<b<<"\n";
    
}
    
