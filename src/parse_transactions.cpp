#include "io.hpp"
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <vector>

std::vector<std::vector<int>> parse_transactions(const std::string& filename) {
    std::vector<std::vector<int>> transactions;
    std::ifstream file(filename);

    if (!file.is_open()) return transactions;

    std::string line;
    while (std::getline(file, line)) {
        std::vector<int> transaction;
        std::stringstream ss(line);
        std::string word;

        while (ss >> word) {
            try {
                transaction.push_back(std::stoi(word));
            } catch (const std::invalid_argument& e) {
                throw std::runtime_error("Invalid transaction format: " + word);
            }
        }
        if (!transaction.empty()) {
            transactions.push_back(transaction);
        }
    }
    return transactions;
}
