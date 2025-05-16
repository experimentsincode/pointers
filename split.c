#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *my_strchr(char* string_ptr, char find)
{
  while(*string_ptr != find)
  {
    /* check for end */

    if(*string_ptr == '\0')
      return NULL; /* not found */

    ++string_ptr;
  }
  return(string_ptr); /* found */
}

int main()
{
  char line[80]; /* the input line */
  char *first_ptr; /* pointer to the first name */
  char *last_ptr;

  fgets(line, sizeof(line), stdin);

  /* get rid of trailing newline */
  line[strlen(line)-1] = '\0';

  last_ptr = line;

  first_ptr = my_strchr(line, '/'); /* find slash */

  /* check for an error */
  if(first_ptr == NULL)
  {
    fprintf(stderr, "Error: unable to find slash in %s\n", line);
    exit(8);
  }

  *first_ptr = '\0'; /* zero out the slash */

  ++first_ptr; /* move to first character of name */

  printf("First: %s Last: %s\n", first_ptr, last_ptr);
  return 0;
}
