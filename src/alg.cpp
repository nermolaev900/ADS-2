This commit does not belong to any branch on this repository, and may belong to a fork outside of the repository.
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
