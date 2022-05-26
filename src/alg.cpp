// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {

   double i = value;
   if (n == 0) {
     return 1;
   }
   if (n == 1) {
     return value;
   }
   i *= pown(value, n - 1);
   return i;
 }

 uint64_t fact(uint16_t n) {

   if (n == 0) {
     return 1;
   }
   return n * fact(n - 1);
 }

 double calcItem(double x, uint16_t n) {

   double i = pown(x, n) / fact(n);
   return i;
 }

 double expn(double x, uint16_t count) {

   double exp1 = 1;
   int z = 1;
   while (count > z - 1) {
     exp1 += calcItem(x, z);
     z++;
   }
   return exp1;
 }

 double sinn(double x, uint16_t count) {

   double sin1 = 0;
   for (uint16_t k = 1; k <= count; k++) {
     sin1 += pown(-1, k - 1) * calcItem(x, (2 * k - 1));
   }
   return sin1;
 }

 double cosn(double x, uint16_t count) {

   double cos1 = 0;
   for (uint16_t k = 1; k <= count; k++) {
     cos1 += pown(-1, k - 1) * calcItem(x, (2 * k - 2));
   }
   return cos1;
 }
