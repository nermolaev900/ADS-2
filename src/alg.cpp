// Copyright 2022 NNTU-CS

#include <cstdint>
#include "alg.h"
double pown(double value, uint16_t n) {
  double x = 1;
    for (uint16_t i = 1; i <= n; i++) {
        x = x * value;
    }
    return x;
}
uint64_t fact(uint16_t n) {
  uint64_t x = 1;
    if (n == 1) {
        return 1;
    } else {
        for (uint16_t i = 1; i <= n; i++) {
            x = x * i;
        }
    }
    return x;
}
double calcItem(double x, uint16_t n) {
  double f = fact(n);
    double st = pown(x, n);
    double res = st / f;
    return (res);
 }

 double expn(double x, uint16_t count) {
   double k = 0;
   double k = 1;
     for (uint16_t i = 1; i <= count; i++) {
         k = k + calcItem(x, i);
     }
    return k;
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
