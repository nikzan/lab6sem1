#include <iostream>
#include <cstdlib>
#include <ctime>
#include "functions.h"

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int num_questions;
    std::cout << "Введите количество вопросов: ";
    std::cin >> num_questions;

    int total_score = 0;

    for (int i = 0; i < num_questions; ++i) {
        int a, b;
        Gen(a, b);
        int answer = Question(a, b);
        int point = Proverka(a, b, answer);
        total_score = Ball(total_score, point);
    }

    char final_mark = Mark(total_score, num_questions);
    std::cout << "Ваша оценка: " << final_mark << std::endl;

    return 0;
}