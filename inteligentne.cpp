#include <iostream>
#include <memory>

std::shared_ptr<int> calculateProduct(int num, int num2) {
    return std::make_shared<int>(num*num2);
}

int main() {
    auto number = calculateProduct(10, 20);
    std::cout << "num: " << *number << " | owners: " << number.use_count() << "\n";

    return 0;
}