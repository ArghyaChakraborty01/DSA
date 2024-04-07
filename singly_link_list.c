struct node
{
   int data;
   struct node *next;
};
struct node *start = 0;
struct node *creatNode()
{
   struct node *h1;
   h1 = (struct node *)malloc(sizeof(struct node));
   printf("Enter a data:");
   scanf("%d", &h1->data);
   h1->next = 0;
   return h1;
}
void insertStart()
{
   struct node *k1;
   k1 = createNode();
   if (start == 0)
   {
      start = k1;
   }
   else
   {
      k1->next = start;
      start = k1;
   }
}
void insertEnd()
{
   struct node *j1, *g1;
   j1 = createNode();
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
void inseretMiddle()
{
   struct node *h1, *j, *f;
   h1 = createNode();
   if (start = 0)
   {
      start = h1;
   }
   else
   {
      int d;
      printf("Enter a data where you want to insert:");
      scanf("%d", &d);
      f = start;
      while (f->next->data != d)
      {
         f = f->next;
      }
      j = f->next;
      f->next = h1;
      h1->next = j;
   }
}
void deleteStart()
{
   struct node *y1;
   if (start == 0)
   {
      printf("There is no eny node to delete");
   }
   else
   {
      y1 = start;
      start = start->next;
      y1->next = 0;
      free(y1);
   }
}
void deleteEnd()
{
   if (start == 0)
   {
      printf("There is no any node to delete.");
   }
   else
   {
      struct node *h1, *a1;
      h1 = start;
      while (h1->next->next != 0)
      {
         h1 = h1->next;
      }
      a1 = h1->next;
      h1->next == 0;
      free(a1);
   }
}
void deleteMiddle()
{
   struct node *q, *h, *p, *g;
   if (start == 0)
   {
      printf("There is no any node to delete");
   }
   else
   {
      int d;
      g = start;
      printf("Enter a data that you want to delete:");
      scanf("%d", &d);
      while (g->next->data != d)
      {
         g->next;
      }
      p - g->next->next;
      g->next->next = 0;
      h = g->next;
      g->next = p;
      free(h);
   }
}
void display()
{
   struct node *j1;
   j1 = start;
   while (j1 != 0)
   {
      printf("%d", j1->data);
      j1 = j1->next;
   }
}

void main()
{
   {
      int choice;
      printf("\n1.insertion form start");
      printf("\n2.insertion fron end");
      printf("\n3.insertion from middle");
      printf("\n4.deletion from start");
      printf("\n5.deletion from end");
      printf("\n6.deletion from middle");
      printf("\n7.display");
      printf("\n8.Exit");
      while (1)
         printf("\n\n Enter your choice: ");
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
         inseretend();

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
      case 6:
      {
         deleteEnd();
         break;
      }
      case 7:
      {
         deletemiddle();
         break;
      }
      case 8:
      {
         Exit(0);
      }
      default:
      {
         printf("Wrong input.");
      }
      }
   }
   getch();
}
