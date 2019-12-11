#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

#include "memfrobber.h"

struct frobber {
  // size_t len; // length of input string
  char *buffer; // string buffer
};

struct frobber *frobber_create(char *input) {
  if (input == NULL) {
    perror("Null input passed to constructor");
    return NULL;
  }
  struct frobber *frob = malloc(sizeof(struct frobber));
  size_t length = strlen(input);
  frob->buffer = malloc(length);
  strcpy(frob->buffer, input);
  memfrob(frob->buffer, length);
  return frob;
}

char *get_frob(struct frobber *f) { return f->buffer; }

void frobber_free(struct frobber *f) {
  free(f->buffer);
  free(f);
}
