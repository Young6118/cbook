/*作者：RednaxelaFX
链接：https://www.zhihu.com/question/51959388/answer/128291566
来源：知乎
著作权归作者所有，转载请联系作者获得授权。
*/
#include <stdio.h>
#include <stdint.h>

_Bool is_perfect_number(uint32_t i) {
  return __builtin_popcount(i) == 1;
}

int main() {
  int32_t n;
  int32_t i = 0;
  printf("Enter n:\n");
  if (scanf("%d", &n) != 1 || n < 0 || n > 10000000) {
    printf("Please enter an integer in range [0, 1e7]\n");
    return 1;
  }
  printf("Enter %d integers in range [0, 1e9]:\n", n);
  for (i = 0; i < n; i++) {
    int32_t current;
    if (scanf("%d", &current) != 1 || current < 0 || current > 1000000000) {
      printf("Unexpected input at %dth number\n", i + 1);
      return 2;
    }
    if (is_perfect_number(current)) {
      printf("%d\n", i + 1);
      return 0;
    }
  }
  printf("-1\n");
  return 0;
}
