#include <stdio.h>
#include <stdlib.h>

void reveal_secret() { printf("reveal_secret was executed\n"); }

void what_could_go_wrong() {
  char buffer[80];
  scanf("%[^\t]", buffer);
}

int main() {
  what_could_go_wrong();
  printf("End of main\n");
  return 0;
}