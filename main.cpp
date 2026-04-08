#include <iostream>
#include "io.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <file_path>" << std::endl;
        return 1;
    }

    try {
        std::string file_path = argv[1];
        std::vector<std::vector<int>> file_content = parse_transactions(file_path);

        for (auto line : file_content) {
            for (auto item : line) {
                std::cout << item << " ";
            }
            std::cout << std::endl;
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
