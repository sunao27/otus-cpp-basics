#pragma once

#include <string>

// ---------- Общие константы ----------

inline const std::string kHighScoresFilename = "high_scores.txt";
inline constexpr int kMaxValue = 100;

// ---------- Игровая логика ----------

// Сгенерировать случайное число в диапазоне [0, max_value).
int generate_target_value(int max_value);

// Запросить у пользователя имя.
std::string ask_user_name();

// Основной игровой цикл. Возвращает количество попыток,
// затраченных пользователем на угадывание числа target_value.
int play_game(int target_value);

// ---------- Таблица рекордов ----------

// Дозаписать результат в таблицу рекордов.
// Возвращает true при успехе.
bool append_high_score(const std::string& user_name, int attempts_count);

// Вывести таблицу рекордов на экран.
// Возвращает true при успехе.
bool print_high_scores();