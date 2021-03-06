#include <stdio.h>
#include <string.h>

int alice[100001];
int betty[100001];

int main(int argc, char const *argv[]) {
  int a, b, x, i, c, al, be;

  while (scanf("%d %d", &a, &b) && (a || b)) {
    memset(alice, 0, sizeof(alice));
    memset(betty, 0, sizeof(betty));
    c = 0, al = 0, be = 0;

    for (i = 0; i < a; ++i) {
      scanf("%d", &x);
      alice[x]++;
    }

    for (i = 0; i < b; ++i) {
      scanf("%d", &x);
      betty[x]++;
    }

    for (i = 0; i < 100001; ++i) {
      if (alice[i] != 0 && betty[i] == 0)
        al++;
      if (alice[i] == 0 && betty[i] != 0)
        be++;
    }

    if (al < be)
      printf("%d\n", al);
    else
      printf("%d\n", be);
  }

  return 0;
}
