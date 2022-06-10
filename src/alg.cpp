#include <cstdint>
#include "alg.h"


 double pown(double value, uint16_t n) {

     double res = 1.0;
     for (int i = 1; i <= n; i++) {
         res = res * value;
     }
     return res;
 }

 uint64_t fact(uint16_t n) {

     uint64_t res = 1;
     for (int i = 1; i <= n; i++) {
         res = res * i;
     }
     return res;
 }

 double calcItem(double x, uint16_t n) {

     double ans = pown(x, n) / fact(n);
     return ans;
 }

 double expn(double x, uint16_t count) {

     double ex = 0;
     for (int i = 1; i <= count; i++) {
         ex = ex + (pown(x, i) / fact(i));
     }
     ex = ex + 1;
     return ex;
 }

 double sinn(double x, uint16_t count) {

     double s = 0;
     for (uint16_t i = 1; i <= count; i++) {
         s = s + (pown(-1, i - 1) * calcItem(x, (2 * i) - 1));
     }
     return s;
 }

 double cosn(double x, uint16_t count) {

     double s = 0;
     for (int i = 1; i <= count; i++) {
         s = s + (pown(-1, (i - 1)) * calcItem(x, (2 * i) - 2));
     }
     return s;
 }
