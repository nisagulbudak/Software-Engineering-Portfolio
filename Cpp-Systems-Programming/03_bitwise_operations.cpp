#include <iostream>

// Donanim seviyesinde (low-level) veri kontrolu icin bitlerle islem.
// Ozellikle gomulu sistemlerde (arac beyinleri gibi) cok kullanilir.
int main() {
    int x = 5;  // Binary karsiligi: 0101
    int y = 3;  // Binary karsiligi: 0011

    // VE (AND) islemi: Iki bit de 1 ise sonuc 1.
    // 0101 & 0011 = 0001 (Yani 1)
    std::cout << "AND islemi (x & y): " << (x & y) << std::endl;

    // VEYA (OR) islemi: En az bir bit 1 ise sonuc 1.
    // 0101 | 0011 = 0111 (Yani 7)
    std::cout << "OR islemi (x | y): " << (x | y) << std::endl;

    // Not: Bit kaydirma (Shift) islemleri hizli carpma/bolme icin birebir.
    return 0;
}
