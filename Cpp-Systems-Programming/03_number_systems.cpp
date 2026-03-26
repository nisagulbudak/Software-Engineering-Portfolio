#include <iostream>
#include <vector>

// Sayisal Elektronik dersinde gordugumuz onluktan ikiliye (Binary) donusum.
// Sayiyi surekli 2'ye bolup kalanlari tersten okuma mantigi.
void toBinary(int n) {
    if (n == 0) {
        std::cout << "0";
        return;
    }

    std::vector<int> binaryNum;
    while (n > 0) {
        binaryNum.push_back(n % 2); // Kalani sakla
        n = n / 2;                  // Bolumu bir sonraki adima gecir
    }

    // Kalanlari tersten yazdirinca binary karsiligini buluyoruz.
    for (int i = binaryNum.size() - 1; i >= 0; i--) {
        std::cout << binaryNum[i];
    }
}

int main() {
    int sayi = 13; // Binary karsiligi 1101 olmali
    std::cout << sayi << " sayisinin binary karsiligi: ";
    toBinary(sayi);
    std::cout << std::endl;

    return 0;
}
