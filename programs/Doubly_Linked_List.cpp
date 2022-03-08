#include <stdio.h>
#include <stdlib.h>

#define LIST_LENGTH 10

typedef struct DoublyLinkedList {
    int data;
    struct DoublyLinkedList* next;
    struct DoublyLinkedList* prev;
}DLL;


DLL* AddItemToEnd(DLL* headOfTheList, int data);
void PrintList(DLL* headOfTheList);

DLL* RemoveItem(DLL* headOfTheList, int toRemove);
DLL* RemoveItemRecursively(DLL* headOfTheList, int toRemove);


DLL* AddItemToEnd(DLL* headOfTheList, int data)
{
    // Prepare the NEW ITEM first
    DLL* newItem = (DLL*) malloc(sizeof(DLL));
    if (NULL == newItem) {
        printf("Can NOT allocate memroy for new item!\n");
        exit(EXIT_FAILURE);
    }
    newItem->data = data;
    newItem->next = NULL;
    newItem->prev = NULL;// we will set it when we find the correct spot

    // CASE 1 : Empty list
    if (NULL == headOfTheList)
        return newItem;

    // CASE 2 : List contaşins at least one item (or more)
    DLL* temp = headOfTheList;

    // Find the last item
    while (NULL != temp->next)
        temp = temp->next;

    // Set the necessary links appropriately
    temp->next = newItem;
    newItem->prev = temp;// DO NOT FORGET setting the prev appropriately!

    return  headOfTheList;
}

void PrintList(DLL* headOfTheList)
{
    if (NULL != headOfTheList) {// Base case
        printf("Data : %d\n", headOfTheList->data);
        PrintList(headOfTheList->next);// Progress towards the base case
    }
}

DLL* RemoveItem(DLL* headOfTheList, int toRemove)
{
    DLL* temp = headOfTheList;

    while (NULL != temp && toRemove != temp->data)
        temp = temp->next;
    // Empty list OR list does NOT HAVE "toRemove" (Could NOT BE FOUND!)
    if (NULL == temp)
        return headOfTheList;
    else { // "toRemove" FOUND
        // Case 1- Remove the "first" item (first item's prev will be NULL)
        // Case 2- Remove the "last item" (last item's next will be NULL)
        // Case 3- Remove a middle item

        // DELETE temp from the list
        if (NULL != temp->prev)
            temp->prev->next = temp->next;// set "previous item's" next value
        if (NULL != temp->next)
            temp->next->prev = temp->prev;// set "next item's" previous value
        // If you would like to remove the head
        // the next one will be the new head
        if (temp == headOfTheList)
            headOfTheList = headOfTheList->next;// update head!
        free(temp);
        return headOfTheList;
    }
}

DLL* RemoveItemRecursively(DLL* headOfTheList, int toRemove)
{
    // BASE CASE : HANDLES "Empty list" and "NOT FOUND" cases
    if (NULL != headOfTheList) {
        // FOUND!
        if (toRemove == headOfTheList->data) {
            if (NULL != headOfTheList->next)
                headOfTheList->next->prev = headOfTheList->prev;
            DLL* newHead = headOfTheList->next;
            free(headOfTheList);
            return newHead;
        } else // NOT FOUND!
            // PROGRESS towards the base case
            headOfTheList->next = RemoveItemRecursively(headOfTheList->next, toRemove);
    }
    return headOfTheList;
}



int main()
{
    DLL* headOfTheList1 = NULL;
    int i;

    // TEST 1
    headOfTheList1 = RemoveItem(headOfTheList1, 1);

    for (i = 0; i < LIST_LENGTH; ++i)
        headOfTheList1 = AddItemToEnd(headOfTheList1, i + 1);

    printf("ORIGINAL LIST\n");
    PrintList(headOfTheList1);
    printf("-------------------------------\n");

//    // REMOVE the HEAD of the list
//    headOfTheList1 = RemoveItem(headOfTheList1, 1);
//    printf("After removing the FIRST one\n");
//    PrintList(headOfTheList1);
//    printf("-------------------------------\n");

//    // REMOVE the LAST one of the list
//    headOfTheList1 = RemoveItem(headOfTheList1, 10);
//    printf("After removing the LAST one\n");
//    PrintList(headOfTheList1);
//    printf("-------------------------------\n");

//    // REMOVE a MIDDLE item of the list
//    headOfTheList1 = RemoveItem(headOfTheList1, 8);
//    printf("After removing a MIDDLE one\n");
//    PrintList(headOfTheList1);
//    printf("-------------------------------\n");

//    // REMOVE an item that is NOT in the list
//    headOfTheList1 = RemoveItem(headOfTheList1, 13);
//    printf("After removing the item that is NOT FOUND in the list\n");
//    PrintList(headOfTheList1);
//    printf("-------------------------------\n");


    // REMOVE the HEAD of the list
    headOfTheList1 = RemoveItemRecursively(headOfTheList1, 1);
    printf("After removing the FIRST one\n");
    PrintList(headOfTheList1);
    printf("-------------------------------\n");

    // REMOVE the LAST one of the list
    headOfTheList1 = RemoveItemRecursively(headOfTheList1, 10);
    printf("After removing the LAST one\n");
    PrintList(headOfTheList1);
    printf("-------------------------------\n");

    // REMOVE a MIDDLE item of the list
    headOfTheList1 = RemoveItemRecursively(headOfTheList1, 8);
    printf("After removing a MIDDLE one\n");
    PrintList(headOfTheList1);
    printf("-------------------------------\n");

    // REMOVE an item that is NOT in the list
    headOfTheList1 = RemoveItemRecursively(headOfTheList1, 13);
    printf("After removing the item that is NOT FOUND in the list\n");
    PrintList(headOfTheList1);
    printf("-------------------------------\n");




    return 0;
}


