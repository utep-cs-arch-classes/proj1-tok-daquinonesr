#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

List *init_history()
{
  List *list =malloc(sizeof(List));
  list->root =malloc(sizeof(Item));
  return list;
}
void add_history(List *list, char *star)
{
  int x=1;
  Item*temp=list->root;
  while(temp->next !=0)
  {
    x++;
  }
  temp->next=malloc(sizeof(Item));
  temp->next->str=copy_str(str,string_length(str));
  temp->next->id=id;
}
char *get_history(List *list,int x
{
  Item *temp=list->root;
  while(temp!=0)
  {
    if(temp->x==x)
    {
      return temp-str;
    }
    temp= temp->next;
  }
   return "id not found";
  }
void free_history(List *list)
{
  Item *curr=list-root;
  while(curr->next !=0){
    Item *prev=curr;
    curr=curr->next;
    free(prev->str);
    free(prev);
  }
  free(curr->str);
  free(curr);
  free(list);
}

void print_history(List *list)
{
  Item *temp = list->root->next;
  while(temp!=0)
  {
    printf(temp->id,temp->str);
    temp=temp->next;
  }
}
