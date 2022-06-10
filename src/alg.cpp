// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double osnov = value;
    for (int i = 1; i < n; i++) {
        osnov = osnov * value;
    }
    return osnov;
}

uint64_t fact(uint16_t n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 1;
    }
    uint64_t osnov = 1;
    for (int i = 2; i <= n; i++) {
        osnov = osnov * i;
    }
    return osnov;
}

double calcItem(double x, uint16_t n) {
    return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
    double osnov = 0;
    for (uint16_t i = 0; i <= count; i++) {
        osnov += calcItem(x, i);
    }
    return osnov;
}

double sinn(double x, uint16_t count) {
    double osnov = x;
    for (uint16_t i = 3; i <= 2 * count - 1; i += 4) {
        osnov -= calcItem(x, i);
    }
    for (uint16_t i = 5; i <= 2 * count - 1; i += 4) {
        osnov += calcItem(x, i);
    }
    return osnov;
}

double cosn(double x, uint16_t count) {
    double osnov = 1;
    for (uint16_t i = 2; i <= 2 * count - 2; i += 4) {
        osnov -= calcItem(x, i);
    }
    for (uint16_t i = 4; i <= 2 * count - 2; i += 4) {
        osnov += calcItem(x, i);
    }
    return osnov;
}
