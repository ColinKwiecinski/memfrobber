#!/bin/bash

FILE="hello_frobber.c"
INPUT="Hello world on this beautiful `date`"

echo "
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include \"memfrobber.h\"

	int main(int argc, char *argv[argc +1]) {
		struct frobber *frob = frobber_create(\"${INPUT}\"); 
		char *str = get_frob(frob); 
		printf(\"%s\", str);
		frobber_free(frob);
		return EXIT_SUCCESS;
	}" > $FILE
