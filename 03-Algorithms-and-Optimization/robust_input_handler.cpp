#include <iostream>
#include <limits>

// Sayi beklerken harf girilirse program sonsuz donguye girmesin diye.
// Hatali girisi temizleyip dogru veri gelene kadar tekrar sorar.
int getValidInt() {
    int input;
    while (true) {
        if (std::cin >> input) {
            return input; // Gecerli tamsayi alindi, fonksiyondan cik.
        } else {
            std::cout << "Hatali giris! Lutfen bir sayi girin: ";
            std::cin.clear(); // std::cin uzerindeki hata bayragini temizler.
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Tamponu (buffer) bosaltir.
        }
    }
}

int main() {
    std::cout << "Uretim miktari giriniz: ";
    int miktar = getValidInt();
    
    std::cout << "Islem onaylandi, girilen miktar: " << miktar << std::endl;
    return 0;
}
