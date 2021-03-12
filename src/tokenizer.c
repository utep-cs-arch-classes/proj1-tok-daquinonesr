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
int count_words(char *str)
{
  int wordCounter=0;
  char *p=word_start(str);
  while(*p!='\0')
  {
    if(non_space_char(*p)){
      wordCounter+=1;
    }
    p=word_start(p);
    p=word_terminator(p);
  }
  return wordCounter;
}
char *copy_str(char *inStr, short len)
{
  char *scopy=malloc((len+1)*sizeof(char));
  int x;
  for(x=0;x<len;x++){
    scopy[x]=inStr[x];
  }
  scopy[x]='\0';
  return scopy;
}
char **tokenize(char* star)
{
  int numWords=count_words(str);
  char **tokens=malloc((numWords+1)*sizeof(char *));
  char *p=starl
  int x;
  for(x=0;x<numWords;x++)
  {
    p=word_start(p);
    int length = word_length(p);
    tokens[x]=copy_str(p,length);
    p=word_terminator(p);
  }
  tokens[x]=0;
  return tokens;
}
void free_tokens(char **tokens)
{
  int x;
  for(x=0;tokens[x];!=0;x++)
    {
      free(tokens[x]);
    }
  free(tokens);
}
short word_length(char *str)
{
  short length=0;
  int x;
  for(x=0;*(str+x)!='\0';x++)
    {
      if(non_space_char(*(str+x)))
	{
	  length+=1;
	}
      else
	{
	  break:
	}
    }
  return length;
}
short string_length(char *str)
{
  short length=0;
  int x;
  for(x=0;*(str+x)!='\0';x++)
    {
      length+=1;
    }
  return length;
}
