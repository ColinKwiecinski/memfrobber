#include <sys/types.h>

struct frobber;

struct frobber* frobber_create(char *input);

char *get_frob(struct frobber *f);

void frobber_free(struct frobber *f);

// Include this function to avoid implicit declaration warning
void *memfrob(void *s, size_t n);
