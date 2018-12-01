#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

int main(void) {
    std::ifstream file("input.txt");
    std::string line;

    int frequency = 0;

    while (getline(file, line)) {
        int temp_int;
        std::stringstream(line) >> temp_int;
        frequency += temp_int;
    }

    std::cout << "Frequency result: " << frequency << std::endl;

    return 0;
}