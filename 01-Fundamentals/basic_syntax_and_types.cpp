#include <iostream>
#include <string>

// Degisken turleri ve bellek kullanimlari.
// int, double, char gibi temel tiplerin yaninda 'const' kullanimina dikkat.
int main() {
    // Sabit degerler (Degistirilmemesi gerekenler icin)
    const double PI = 3.14159; 
    
    // Temel veri tipleri
    int uretimAdedi = 150;
    double sicaklik = 24.5;
    char grupKodu = 'A';
    bool sistemCalisiyor mu = true;
    std::string modelAdi = "Ford Focus";

    std::cout << "Model: " << modelAdi << std::endl;
    std::cout << "Uretim: " << uretimAdedi << " Adet" << std::endl;

    // Not: Veri tipine gore bellekte kapladigi alan degisir (sizeof).
    return 0;
}
