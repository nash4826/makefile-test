#include <stdio.h>
#include "CLinkedList/header/CLinkedList.h"

int main(void)
{
  List list;
  int data;
  ListInit(&list);

  LInsert(&list, 1);
  LInsert(&list, 2);
  LInsert(&list, 3);
  LInsert(&list, 4);
  LInsert(&list, 5);

  printf("current data = %d\n", LCount(&list));

  if (LFirst(&list, &data))
  {
    printf("%d\n", data);
    while (LNext(&list, &data))
      printf("%d\n", data);
  }
  printf("\n");

  if (LFirst(&list, &data))
  {
    if (data == 2)
      LRemove(&list);
    while (LNext(&list, &data))
    {
      if (data == 2)
        LRemove(&list);
    }
  }
  printf("\n");

  printf("current data = %d\n", LCount(&list));
  if (LFirst(&list, &data))
  {
    printf("%d\n", data);
    while (LNext(&list, &data))
      printf("%d\n", data);
  }

  return 0;
}
