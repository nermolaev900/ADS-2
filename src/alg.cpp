// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
double pown(double value, uint16_t n) {
    double a = 1;
    for (int i = 1; i <= n; i++) {
        a = a * value;
    }
    return a;
}
uint64_t fact(uint16_t n) {
    uint64_t a = 1;
    while (n != 0) {
        a = a * n;
        n--;
    }
    return a;
}
double calcItem(double x, uint16_t n) {
    double a = pown(x, n) / fact(n);
    return a;
}
 double expn(double x, uint16_t count) {
     double e = 0;
     uint64_t c = 0;
     while (c <= count) {
         e += pown(x, c) / fact(c);
         c += 1;
     }
    return  e;
}
double sinn(double x, uint16_t count) {
    double e = 0;
    for (uint16_t c = 1; c <= count; c++) {
        e += pown(-1, c-1) * (pown(x, (2 * c)-1) / fact((2 * c) - 1));
    }
    return  e;
}
double cosn(double x, uint16_t count) {
    double e = 0;
    uint64_t c = 1;
    while (c <= count) {
        e += pown(-1, c - 1) * pown(x, (2 * c) - 2) / fact((2 * c) - 2);
        c += 1;
    }
    return  e;
}
}
double sinn(double x, uint16_t count) {
  double k = 0;
    for (uint16_t i = 1; i <= count; i++) {
        k = k + (pown(-1, i - 1) * calcItem(x, 2 * i - 1));
    }
    return k;
}
double cosn(double x, uint16_t count) {
  double k = 0;
    for (uint16_t i = 1; i <= count; i++) {
        k = k + (pown(-1, i - 1) * calcItem(x, 2 * i - 2));
    }
    return k;
}
         a += calcItem(x, n);
         n++;
     }
     return a;
}

double sinn(double x, uint16_t count) {

   double a = 0;
     for (uint16_t i = 1; i <= count; i++) {
         a += pown(-1, (i - 1)) * calcItem(x, (2 * i - 1));
     }
     return a;
}

double cosn(double x, uint16_t count) {

   double a = 0;
     for (uint16_t i = 1; i <= count; i++) {
         a += pown(-1, (i - 1)) * calcItem(x, (2 * i - 2));
     }
     return a;
}
