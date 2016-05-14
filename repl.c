#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

int main(int argc, char** argv) {

  /* Print Version and Exit Information */
  puts("MithoLisp Version 0.01");
  puts("Press Ctrl+c to Exit\n");

  /* In a never ending loop */
  while (1) {

    /* Output our prompt and get input */
    char* input = readline("MithoLisp> ");
    
    /* Add input to history */
    add_history(input);
    
    /* Echo input back to user */    
    printf("ok baby now do: %s\n", input);

    /* Free retrieved input */
    free(input);

  }

  return 0;
}

//cc -std=c99 -Wall repl.c -ledit -o repl