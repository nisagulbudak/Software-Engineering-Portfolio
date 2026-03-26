#include <iostream>

int main() {
    // Stack: Statik bellek alani (Otomatik yonetilir)
    int stack_var = 42;
  
    // Heap: Dinamik bellek alani (Manuel yonetilir)
    int* heap_ptr = new int(10);

    std::cout << "--- Bellek Adreslerini Gozlemleme ---" << std::endl;
    
    // Adreslerin fiziksel olarak farkli bolgelerde oldugunu gorelim
    std::cout << "Stack Adresi : " << &stack_var << std::endl;
    std::cout << "Heap Adresi  : " << heap_ptr << std::endl;

    // ONEMLI: Heap'te acilan yer manuel kapatilmali (Memory Leak onlemi)
    delete heap_ptr;
    heap_ptr = nullptr; // Guvenlik icin pointer'i sifirla

    return 0;
}
