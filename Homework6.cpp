#include <iostream>

//Functie ce face conversia in dependenta de optinea aleasa
void Conversion(double temperature, short optiune) {
    switch (optiune) {
    case 1: {
        //Din grade Celsius transforma in grade Fahrenheit
        double C_to_F = (temperature * 9 / 5) + 32;
        std::cout << "Temperatura in grade Fahreheit: " << C_to_F << " F."; 
    }break;
    case 2: {
        //Din grade Fahrenheit transforma in grade Celsius
        double F_to_C = (temperature - 32) * 5 / 9;
        std::cout << "Temperaura in grade Celsius: " << F_to_C << " C."; 
    }break;
    default: {
        //Cazul in care este introdusa o optiune diferita de 1 sau 2
        std::cout << "Optiune incorecta!" << std::endl;
    }
    }
}


int main()
{
    std::cout << "\tTemperature Conversion" << std::endl;
    std::cout << std::endl;
    //Afisarea optiunilor
    std::cout << "Optiuni:" << std::endl << "1.Celsius to Fahrenheit" << std::endl
              << "2.Fahrenheit to Celsius" << std::endl;
    std::cout << std::endl;
    
    //Citirea optiunii necesare
    short optiune{}; 
    std::cout << "Optiunea aleasa: "; 
    std::cin >> optiune; 
    
    //Citirea temperaturii dupa scara corespunzatoare optiunii alese
    double temperature{}; 
    std::cout << "Introduce-ti temperatura: "; 
    std::cin >> temperature; 

    //Afisarea rezultatului
    Conversion(temperature, optiune); 

    return 0;
}

