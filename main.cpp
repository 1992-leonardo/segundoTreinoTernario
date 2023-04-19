#include <iostream> 

int main(){
    float digiteSuaNota;

    std::cout << "Nos informe sua nota por favor! " << std::endl;
    std::cin >> digiteSuaNota; 

    digiteSuaNota>=7 ? (std::cout << "Aprovado ") : (std::cout << "Reprovado ");

    return 0;
}