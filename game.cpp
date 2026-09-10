#include "game.h"

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>

int generate_target_value(int max_value) {
    std::srand(std::time(nullptr));
    return std::rand() % max_value;
}

std::string ask_user_name() {
    std::cout << "Hi! Enter your name, please:" << std::endl;
    std::string user_name;
    std::cin >> user_name;
    return user_name;
}

int play_game(int target_value) {
    int attempts_count = 0;
    int current_value = 0;

    std::cout << "Enter your guess:" << std::endl;

    while (true) {
        std::cin >> current_value;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please enter an integer value." << std::endl;
            continue;
        }

        ++attempts_count;

        if (current_value < target_value) {
            std::cout << "Target is greater than " << current_value << std::endl;
        }
        else if (current_value > target_value) {
            std::cout << "Target is less than " << current_value << std::endl;
        }
        else {
            std::cout << "you win! attempts = " << attempts_count << std::endl;
            return attempts_count;
        }
    }
}