#include <stdio.h>
struct n {
  int num;
};
struct n a;

int main(void) {
  a.num = 10;
  printf("%i\n",a.num);
  return 0;
}
