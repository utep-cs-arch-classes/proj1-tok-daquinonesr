#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

char *word_start(char *star)
{
  int x;
  for(x=0;*(str+x)!='\0';x++)
  {
    if(non_space_char(*(str+x)))
    {
      return str+x;
    }
  }
  return str+x;
}

char *word_terminator(char *word)
{
  int x;
  for(x=0;*(word+x)!='\0';x++){
    if(space_char(*(word+x)))
    {
      return word+x;
    }
  }
  return word+x;
}

int space_char(char c)
{
  if((c=='\t'||c==' ')&& c!=0){
    return 1;
  }
  return 0;
}

int non_space_char(char c)
{
  if((c=='\t'||c==' ')&& c!=0){
    return 0;
  }
  return 1;
}
