#include <stdio.h>
#include <stdlib.h>

/* define the person struct here using the typedef syntax */
typedef struct {
  char * name;
  int age;
} person;

int main() {
    person *john = malloc(sizeof(person));

    /* testing code */
    john->name = "John";
    john->age = 27;
    printf("%s is %d years old. age mem location %u\n", john->name, john->age, &john->name);
    free(john);
    printf("%s is %d years old. age mem location %u\n", john->name, john->age, &john->name);
    john->name = "John";
    john->age = 27;
      printf("%s is %d years old. age mem location %u\n", john->name, john->age, &john->name);

      int f = 5;
      char *pvowels = (char *) malloc(f * sizeof(char));
      int i;

      pvowels[0] = 'A';
      pvowels[1] = 'E';
      *(pvowels + 2) = 'I';
      pvowels[3] = 'O';
      *(pvowels + 4) = 'U';

      for (i = 0; i < f; i++) {
          printf("%c ", pvowels[i]);
      }

      printf("\n");
      puts (pvowels);

      free(pvowels);
      puts (pvowels);

int n;
      printf("enter a value for N\n");
      scanf("%d", &n );
      printf("this is N %d\n", n);
      n=n%12;
        printf("this is N mod 12 %d\n", n);
        n=n/3;
          printf("this is N mod 12 div 3 %d\n", n);
return n;
}
