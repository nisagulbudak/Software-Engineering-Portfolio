#include <iostream>

int main() {
    // Heap uzerinde bir int'lik yer kiraladim
    int* heap_ptr = new int(50);
    std::cout << "Heap uzerindeki ilk deger: " << *heap_ptr << std::endl;

    // Adresteki veriyi pointer ile degistiriyorum
    *heap_ptr = 100;
    std::cout << "Guncellenen yeni deger: " << *heap_ptr << std::endl;

    // Isi bitince iade etmek sart (Memory Leak onlemi)
    delete heap_ptr;
    heap_ptr = nullptr; 

    std::cout << "Bellek basariyla iade edildi." << std::endl;

    return 0;
}
