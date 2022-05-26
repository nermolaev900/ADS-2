// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


 double pown(double value, uint16_t n) {

     double pow = value;
     if (n == 0) {
         return 1;
     } else {
         for (uint64_t i = 1; i < n; i++) {
             value = (value * pow);
         }
         return value;
     }
 }

 uint64_t fact(uint16_t n) {

     uint64_t f = 1;
     for (uint64_t i = 1; i <= n; i++) {
         f = (f * i);
     }
     return f;
 }

 double calcItem(double x, uint16_t n) {

     double up = pown(x, n);
     double down = fact(n);
     double result = (up / down);
     return result;
 }

 double expn(double x, uint16_t count) {

     double e = 0;
     for (uint64_t i = 0; i <= count; i++) {
         e += calcItem(x, i);
     }
     return e;
 }

 double sinn(double x, uint16_t count) {

     double s = 0;
     for (uint64_t i = 1; i <= count; i++) {
         s += (pown(-1, i-1) * calcItem(x, ((2 * i) - 1)));
     }
     return s;
 }

 double cosn(double x, uint16_t count) {

     double c = 0;
     for (uint64_t i = 1; i <= count; i++) {
         c += (pown(-1, i-1) * calcItem(x, ((2 * i) - 2)));
     }
     return c;
 }
