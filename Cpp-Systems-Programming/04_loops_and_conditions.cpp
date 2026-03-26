#include <iostream>

// Karar yapilari (if-else) ve donguler (for-while).
// Programin akisini kontrol etmek icin temel mantik.
int main() {
    int stokMiktari = 15;
    int limit = 10;

    // Kosul yapisi: Stok kontrolu
    if (stokMiktari > limit) {
        std::cout << "Stok yeterli, uretim devam edebilir." << std::endl;
    } else {
        std::cout << "Uyari: Dusuk stok seviyesi!" << std::endl;
    }

    // Dongu yapisi: 5 adet seri numara uretme simulasyonu
    std::cout << "Seri numaralari olusturuluyor:" << std::endl;
    for (int i = 1; i <= 5; i++) {
        std::cout << "SN-2026-" << i << std::endl;
    }

    return 0;
}
