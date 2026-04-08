#include "read_file.hpp"
#include <fstream>

std::string read_file(const std::string &file_path) {
    std::string file_content;
    std::ifstream file(file_path);

    if (file.is_open()) {
        std::string line;

        while (std::getline(file, line)) {
            file_content += line + "\n";
        }
        file.close();
    } else {
        throw std::runtime_error("Could not open file: " + file_path);
    }
    return file_content;
}
