#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "memfrobber.h"

int main(int argc, char *argv[argc + 1]) {
  if (argv[1] == NULL) {
    perror("missing argument");
    return EXIT_FAILURE;
  }
  struct frobber *frob = frobber_create(argv[1]);
  printf("FROBBER TEST BEFORE: %s\n", argv[1]);
  char *str = get_frob(frob);
  printf("FROBBER TEST AFTER: %s\n", str);

  // do other stuff

  frobber_free(frob);
  return EXIT_SUCCESS;
}
