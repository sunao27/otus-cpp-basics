#include "game.h"

int main() {
    const int target_value = generate_target_value(kMaxValue);
    const std::string user_name = ask_user_name();
    const int attempts_count = play_game(target_value);

    if (!append_high_score(user_name, attempts_count)) {
        return -1;
    }
    if (!print_high_scores()) {
        return -1;
    }

    return 0;
}