#include <iostream>
#include <vector>

// Verileri tek tek kontrol eden en temel arama mantigi.
// Karmaşıklık: O(n) -> Veri seti ne kadar buyurse arama suresi o kadar uzar.
int linearSearch(const std::vector<int>& arr, int target) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == target) return i;
    }
    return -1;
}

int main() {
    // Ornek veri seti
    std::vector<int> numbers = {10, 25, 45, 70, 95}; 
    int target = 70;

    int result = linearSearch(numbers, target);
    
    if(result != -1)
        std::cout << "Bulundu, indeks: " << result << std::endl;
    else
        std::cout << "Listede yok." << std::endl;

    return 0;
}
