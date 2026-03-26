#include <iostream>
#include <vector>

// Listedeki her elemana sirayla bakiyor.
// Karmasiklik: O(n) -> Veri 100 katina cikarsa arama suresi de o kadar uzar.
int linearSearch(const std::vector<int>& arr, int target) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == target) return i;
    }
    return -1;
}

int main() {
    std::vector<int> numbers = {10, 25, 45, 70, 95}; 
    int target = 70;

    int result = linearSearch(numbers, target);
    
    if(result != -1)
        std::cout << "Deger bulundu, indeks: " << result << std::endl;
    else
        std::cout << "Deger listede yok." << std::endl;

    return 0;
}
