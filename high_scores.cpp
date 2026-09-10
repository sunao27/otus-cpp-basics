#include "game.h"

#include <fstream>
#include <iostream>

bool append_high_score(const std::string& user_name, int attempts_count) {
    std::ofstream out_file{kHighScoresFilename, std::ios_base::app};
    if (!out_file.is_open()) {
        std::cout << "Failed to open file for write: "
                  << kHighScoresFilename << "!" << std::endl;
        return false;
    }

    out_file << user_name << ' ' << attempts_count << std::endl;
    return true;
}

bool print_high_scores() {
    std::ifstream in_file{kHighScoresFilename};
    if (!in_file.is_open()) {
        std::cout << "Failed to open file for read: "
                  << kHighScoresFilename << "!" << std::endl;
        return false;
    }

    std::cout << "High scores table:" << std::endl;

    std::string username;
    int high_score = 0;
    while (in_file >> username >> high_score) {
        std::cout << username << '\t' << high_score << std::endl;
    }
    return true;
}