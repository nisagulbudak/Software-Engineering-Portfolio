#include <iostream>

int main() {
    int sayilar[3] = {10, 20, 30};

    std::cout << "--- Dizi Eleman Adresleri ---" << std::endl;

    for(int i = 0; i < 3; i++) {
        // Her elemanin RAM adresini yazdirip aradaki farki gorelim
        std::cout << "Eleman [" << i << "] Adresi: " << &sayilar[i] << std::endl;
    }
    
    // NOT: Adreslerin 4'er byte artmasi, int tipinin bellek boyutudur.
    // Verilerin pes pese (ardisik) dizilmesi erisim hizini artirir.

    return 0;
}
