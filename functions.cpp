#include "functions.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void Gen(int &a, int &b) {
    a = rand() % 9 + 2;
    b = rand() % 9 + 2;
}

int Question(int a, int b) {
    int answer;
    std::cout << "Сколько будет " << a << " * " << b << "? ";
    std::cin >> answer;
    return answer;
}

int Proverka(int a, int b, int answer) {
    return (a * b == answer) ? 1 : 0;
}

int Ball(int current_score, int point) {
    return current_score + point;
}

char Mark(int total_score, int total_questions) {
    double percentage = (static_cast<double>(total_score) / total_questions) * 100;
    if (percentage >= 80) return '5';
    if (percentage >= 60) return '4';
    if (percentage >= 40) return '3';
    return '2';
}//
// Created by Nikita Zanadvornykh on 10/28/24.
//
