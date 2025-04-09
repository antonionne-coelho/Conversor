#include <iostream>
#include "conversor.h"

int main(){
    
    int opcao;

    std::cout << " Conversor de temperatura" << std::endl;
    std::cout << "(1) Celsius -> Fahrenheit" << std::endl;
    std::cout << "(2)Fahrenheit -> Celsius" << std::endl;
    std::cout << "Digite sua opção: ";
    std::cin >> opcao;

    float temp;
    std::cout << "Digite a temperatura: ";
    std:: cin >> temp;
    
    float conv;

        switch(opcao){
            case 1:
                conv = celcius2fahreheit(temp);
                std::cout << temp <<"Cº = " << conv << "Fº" << std::endl;
                break; 
            case 2:
                conv = fahrenheit2celcius(temp);
                std::cout << temp <<"Fº = " << conv << "Cº" << std::endl;
                break;
            default:
                std::cout << "opcao invalida" << std::endl;     
        }

        return 0;
 }
