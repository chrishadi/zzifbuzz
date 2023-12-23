#include <iostream>
#include <string>

int main() {
    std::string w[] = {"", "fizz", "buzz", "fizzbuzz"};
    for (int i = 1; i < 101; i++) {
        int wi = (i % 3 == 0) | (i % 5 == 0) << 1;
        (wi || (w[0] = std::to_string(i))[0]);
        std::cout << w[wi] << ' ';
    }
    return 0;
}
