#include <iostream>
#include <algorithm>


int main() {
    std::cout << "enter 3 integers";

    int x, y, z;

    std::cin >> x >> y >> z;

    int input[3] = {x,y,z};

    std::sort(input, input + 3);
    

    for (int i = 0; i < 3; i++) {
        std::cout << input[i] << " ";
    }

    return 0;
}