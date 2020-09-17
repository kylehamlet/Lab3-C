//Author Kyle Hamlet kjh6064@psu.edu    
//Collaborator Ethan Moyer epm5482@psu.edu
//Collaborator Qikun Xuan qzx5031@psu.edu
//Collaborator Greg Dorazio gmd5474@psu.edu
//Section 5
//Breakout 11
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n) {
  if (n >= 1)
    return n + sum_n(n-1);
  else
    return n;
}
void print_n(char *s,int n) {
  if (n >= 1) {
    printf("%s\n",s);
    print_n(s,n-1);
  }
  else {
    return;
  }
}
int main() {
  char *n = readline("Enter an int: ");
  int n2 = atoi(n);
  printf("sum is %d.\n",sum_n(n2));
  char *s = readline("Enter a string: ");
  print_n(s,n2);
  return 0;
}