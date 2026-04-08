#include <iostream>
#include "read_file.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <file_path>" << std::endl;
        return 1;
    }

    try {
        std::string file_path = argv[1];
        std::string file_content = read_file(file_path);
        std::cout << "File content:\n" << file_content << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
