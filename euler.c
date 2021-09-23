#include <stdio.h>

int problem_1();
int problem_2();

int main() {
  printf("Problem 1: %d\n", problem_1());
  printf("Problem 2: %d\n", problem_2());

  return 0;
}

int problem_1() {
  int n;
  int ret = 0;

  for (n = 3; n < 1000; n++) {
    if (n % 5 == 0 || n % 3 == 0) {
      ret += n;
    }
  }

  return ret;
}

int problem_2() {
  int a1 = 1;
  int a2 = 2;
  int ret = 2;

  while (a1 + a2 < 4000000) {
    int hold = a1 + a2;
    if (hold % 2 == 0) {
      ret += hold;
    }

    a1 = a2;
    a2 = hold;
  }

  return ret;
}