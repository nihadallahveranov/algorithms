<h1 align="center">Linked List with C Language</h1>
<h2 align="center">This Library Contains 26 Functions for Working With Linked Lists.</h2>

<h4>
gcc file_name.c linked_list.c                                                                                                                                           

./a.out

Functions within the library:                                                                                                                                       
<ol>
<li>createList()</li>

```c
int length;
printf("Enter the Length: ");
scanf("%d", &length);
LinkedList* list1 = createList(length);
/* 
 * Input:
 * 5
 * list1 = [1 -> 2 -> 3 -> 4 -> 5 -> null];
 */ 

```

<li>printList()</li>

```c
printList(list1);
/* 
 * Output:
 * 1 2 3 4 5
 */
```

<li>printAddressList()</li>

```c
prinAddresstList(list1);
/* 
 * Output is related to your Ram.
 * Each node takes up 16 bytes of memory.
 * Output:
 * 0x600001e6c000
 * 0x600001e60030
 * 0x600001e60040
 * 0x600001e60050
 * 0x600001e60060
 */
```

<li>pushList()</li>

```c
int data;
printf("Enter the new data: ");
scanf("%d", &data);
list1 = pushList(list1, data);
printList(list1);
/* 
 * Input: 
 * 6
 * Output: 
 * 1 2 3 4 5 6
 */
```

<li>reverseList()</li>

```c
list1 = reverseList(list1);
printList(list1);
/* 
 * Output: 
 * 6 5 4 3 2 1
 */
```

<li>addHeadList()</li>

```c
printf("Enter the new data: ");
scanf("%d", &data);
list1 = addHeadList(list1, data);
printList(list1);
/* 
 * Input: 
 * 7
 * Output: 
 * 7 6 5 4 3 2 1
 */
```

<li>addIndexList()</li> 

```c
int index;
printf("Enter the index: ");
scanf("%d", &index);
printf("Enter the new data: ");
scanf("%d", &data);
list1 = addIndexList(list1, index, data);
printList(list1);
/* 
 * Input: 
 * 7
 * 0
 * Output: 
 * 7 6 5 4 3 2 1 0
 */
```

<li>popList()</li>

```c
list1 = popList(list1);
printList(list1);
/* 
 * Output:
 * 7 6 5 4 3 2 1
 */
```

<li>delHeadList()</li>

```c
list1 = delHeadList(list1);
printList(list1);
/* 
 * Output:
 * 6 5 4 3 2 1
 */
```

<li>delIndexList()</li>

```c
printf("Enter the index: ");
scanf("%d", &index);
list1 = delIndexList(list1, index);
printList(list1);
/* 
 * Input:
 * 0
 * Output:
 * 5 4 3 2 1
 */
```

<li>delDataList()</li>

```c
printf("Enter the data: ");
scanf("%d", &data);
list1 = delDataList(list1, data);
printList(list1);
/* 
 * Input:
 * 5
 * Output:
 * 4 3 2 1
 */
```

<li>sortToMaxList()</li>

```c
list1 = sortToMaxList(list1);
printList(list1);
/* 
 * Output:
 * 1 2 3 4
 */
```

<li>sortToMinList()</li>

```c
list1 = sortToMinList(list1);
printList(list1);
/* 
 * Output:
 * 4 3 2 1
 */
```

<li>mergeList()</li>

```c
LinkedList* list2 = NULL;
list2 = pushList(list2, 6);
list2 = pushList(list2, 5);
list1 = mergeList(list2, list1);
printList(list1);
/* 
 * Output:
 * 6 5 4 3 2 1
 */

```

<li>convertToCircularList()</li>

```c
LinkedList* circularLinkedList = convertToCircularList(list1);
printList(circularLinkedList);
/* 
 * Output:
 * 6 5 4 3 2 1
 */
```

<li>hasCycle()</li>

```c
printf("%d", hasCycle(circularLinkedList));
/* 
 * Output:
 * 1
 */
```

<li>convertToSingleList()</li>

```c
circularLinkedList = convertToSingleList(circularLinkedList);
printf("%d", hasCycle(circularLinkedList));
/* 
 * Output:
 * 0
 */
```

<li>uniqueList()</li>

```c
/* list1: 6 -> 5 -> 4 -> 3 -> 2 -> 1 */
list1 = pushList(list1, 6);
list1 = addHeadList(list1, 2);
printList(list1);
/* 
 * Output:
 * 2 6 5 4 3 2 1 6
 */
list1 = uniqueList(list1);
printList(list1);
/* 
 * Output: 
 * 2 6 5 4 3 1 
 */
```

<li>isEmptyList()</li>

```c
printf("%d", isEmptyList(list1));
/* 
 * Output:
 * 0
 */
```

<li>maxList()</li>

```c
printf("%d", maxList(list1));
/* 
 * Output:
 * 6
 */
```

<li>minList()</li>

```c
printf("%d", minList(list1));
/* 
 * Output:
 * 1
 */
```

<li>sumList()</li>

```c
printf("%d", sumList(list1));
/* 
 * Output:
 * 21
 */
```

<li>lengthList()</li>

```c
printf("%d", lengthList(list1));
/* 
 * Output:
 * 6
 */
```

<li>avgList()</li>

```c
printf("%f", avgList(list1));
/* 
 * Output:
 * 3.5
 */
```

<li>clearList()</li>

```c
printf("%d", isEmptyList(list1));
/* 
 * Output:
 * 0
 */
list1 = clearList(list1);
printf("%d",isEmptyList(list1));
/* 
 * Output:
 * 1
 */
```

<li>atList()</li>

```c
printf("%d", atList(list1, 0));
/* 
 * Output: 
 * 6
 */
printf("%d", atList(list1, 6));
/* 
 * Output: 
 * nothing
 */
```

</ol>
</h4>