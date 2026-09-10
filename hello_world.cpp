#include "example.h"
#include "move_me_out.h" // Добавили подключение нового заголовка

#include <iostream>

int main() {
	std::cout << "Hello, World!" << std::endl;

	example_function();
	todo_move_me_out(); // Вызов остался без изменений
	
	return 0;
}