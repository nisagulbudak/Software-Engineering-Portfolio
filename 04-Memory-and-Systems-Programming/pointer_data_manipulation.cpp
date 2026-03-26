#include <iostream>

int main() {
    int ana_sayi = 100;
    int* ptr = &ana_sayi;

    std::cout << "Ilk Deger: " << ana_sayi << std::endl;

    // Pointer uzerinden ana degiskenin degerini güncelliyoruz
    *ptr = 500;

    std::cout << "Pointer ile Guncellenen Deger: " << ana_sayi << std::endl;
    std::cout << "Degiskenin RAM Adresi: " << ptr << std::endl;

    return 0;
}
