#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

void token_history(List *history,char **tokens);
int main(){
  char answer[100];
  List *history=init_history();
  printf("A.Insert Sentence\n B.View Histories");
  if(answer[0]=='A'){
    printf("Type sentence\n");
    fgets(answer,100,stdin);
    char **tokens=tokenize(answer);
    add_history(history,input);
    print_tokens(tokens);
    free_tokens(tokens);
  }
  if(answer[0]=='B'){
    print_history(history);
  }
  return 0;
}
