#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    char surname[100];
    struct node* next; 
};
struct node * head = NULL;
struct node * tail = NULL;

void printlist()
{
    struct node* print = head; 
    printf("\n {");
    while (print != NULL)
    {
        printf("%s -> ", print -> surname);
        print = print->next;
    }
    printf("} \n");
    
}
void insert(char Surname[100])
{
    struct node * link = (struct node*) malloc(sizeof(struct node));
    strcpy(link -> surname, Surname); 
    link -> next = head;
    head = link; 
}
bool isEmpty() {
   return head == NULL;
}
int main()
{
  int wybor;
  char nazwisko[100]; 
  while (1 == 1)
  {
    printf("== 1. wpisz -> 2. wypisz -> 3.exit == \n");
    scanf("%d", &wybor);
    if(wybor == 1)
    {
        printf("Podaj nazwisko:");
        scanf("%s", nazwisko);
        insert(nazwisko);  
    }
    else if(wybor == 2)
    {
        printlist(); 
    }
    else if(wybor == 3)
    {
        break;
    }
  }
  return 0; 
  
}
