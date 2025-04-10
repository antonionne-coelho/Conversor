#include <iostream>
#include "conversor.h"

int main(){
    
    int opcao;

    std::cout << " Conversor de temperatura" << std::endl;
    std::cout << "(1) Celsius -> Fahrenheit" << std::endl;
    std::cout << "(2)Fahrenheit -> Celsius" << std::endl;
    std::cout << "Digite sua opção: ";
    std::cin >> opcao;    

        switch(opcao){
            
            float conv;
            float temp;  
            
            case 1:
     
                std::cout << "Digite a temperatura: ";
                std:: cin >> temp;
                conv = celcius2fahreheit(temp);
                std::cout << temp <<"Cº = " << conv << "Fº" << std::endl;
                break; 
            case 2:
                std::cout << "Digite a temperatura: ";
                std:: cin >> temp;
                conv = fahrenheit2celcius(temp);
                std::cout << temp <<"Fº = " << conv << "Cº" << std::endl;
                break;
            default:
                std::cout << "opcao invalida" << std::endl;     
        }

        return 0;
 }
