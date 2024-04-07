#include <stdio.h>
struct node
{
          int data;
          struct node *next;
};
struct node *start = 0;
struct node *creatnode()
{
          struct node *k1;
          k1 = (struct node *)malloc(sizeof(struct node));
          printf("Enter a data:");
          scanf("%d", &k1->data);
          k1->next = 0;
          return k1;
}
void insertstart()
{
          struct node *s1, *p1;
          s1 = createnode();
          if (start == 0)
          {
                    start = s1;
          }
          else
          {
                    s1->next = start;
                    p1 = start;
                    if (p1->next == 0)
                    {
                              p1->next = s1;
                              start = s1;
                    }
                    else
                    {
                              while (p1->next != start)
                              {
                                        p1 = p1->next;
                              }
                              p1->next = s1;
                              start = s1;
                    }
          }
}
void insertend()
{
          struct node *j1, *g1;
          j1 = creatnode();
          if (start == 0)
          {
                    start = j1;
          }
          else
          {
                    g1 = start;
                    while (g1->next != 0)
                    {
                              g1 = g1->next;
                    }
                    g1->next = j1;
          }
}
void insertmiddle()
{
          struct node *y1, *c1;
          if (start == 0)
          {
                    start = y1;
          }
          else
          {
                    y1 = start;
                    while (y1->next != 0)
                    {
                              y1 = y1->next;
                    }
                    y1->next = c1;
                    start = c1;
          }
}
void deletestart()
{
          struct node *x1;
          if (start == 0)
          {
                    printf("There is no any node to delete");
          }
          else
          {
                    x1 = start;
                    while (x1->next != start)
                    {
                              x1 = x1->next;
                    }
                    x1->next = start->next;
                    x1 = start;
                    start = start->next;
                    x1->next = 0;
                    free(x1);
          }
}
void deleteend()
{
          struct node *h1, *a1;
          if (start == 0)
          {
                    printf("There is no any node to delete");
          }
          else
          {
                    h1 = start;
                    while (h1->next->next != 0)
                    {
                              h1 = h1->next;
                    }
                    a1 = h1->next;
                    h1->next = 0;
                    free(a1);
          }
}
void deletemiddle()
{
}
void display()
{
          struct node *j1;
          j1 = start;
          if (start == 0)
          {
                    printf("There is no any node to display");
          }
          else
          {
                    {
                              do
                              {
                                        printf("%d ", j1->data);
                                        j1 = j1->next;
                                        /* code */
                              } while (j1->next != start);
                              printf("%d", j1->data);
                              j1 = j1->next;
                    }
          }
}

void main()
{
          int choice;
          printf("\n1. Insertion from start:");
          printf("\n2. Insertion from end:");
          printf("\n3. Insertion from middle:");
          printf("\n4. delete from start:");
          printf("\n5. delete from end:");
          printf("\n6. delete from middle:");
          printf("\n7. display:");
          printf("\n8. Exit");
          while (1)
          {
                    printf("\n Enter your choice:");
                    scanf("%d", &choice);
                    switch (choice)
                    {
                    case 1:
                    {
                              insertstart();
                              break;
                    }
                    case 2:
                    {
                              insertend();
                              break;
                    }
                    case 3:
                    {
                              insertmiddle();
                              break;
                    }
                    case 4:
                    {
                              deletestart();
                              break;
                    }
                    case 5:
                    {
                              deleteend();
                              break;
                    }
                    case 6:
                    {
                              deletemiddle();
                              break;
                    }
                    case 7:
                    {
                              display();
                              break;
                    }
                    case 8:
                    {
                              exit(0);
                    }
                    default:
                    {
                              printf("wrong input.");
                    }
                    }
          }

          getch();
}
