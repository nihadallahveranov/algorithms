#ifndef linked_list
#define linked_list

struct LinkedList
{
    int data;           
    struct LinkedList* next; 
};

typedef struct LinkedList LinkedList;

extern LinkedList* createList(long int);
extern LinkedList* pushList(LinkedList*, int);
extern LinkedList* reverseList(LinkedList*);
extern LinkedList* addHeadList(LinkedList*, int);
extern LinkedList* addIndexList(LinkedList*, unsigned int, int);
extern LinkedList* popList(LinkedList*);
extern LinkedList* delHeadList(LinkedList*);
extern LinkedList* delIndexList(LinkedList*, unsigned int);
extern LinkedList* delDataList(LinkedList*, int);
extern LinkedList* sortToMaxList(LinkedList*);
extern LinkedList* sortToMinList(LinkedList*);
extern LinkedList* mergeList(LinkedList*, LinkedList*);
extern LinkedList* convertToCircularList(LinkedList*);
extern LinkedList* convertToSingleList(LinkedList*);
extern LinkedList* uniqueList(LinkedList*);
extern LinkedList* clearList(LinkedList*);
extern void printList(LinkedList*);
extern void printAddressList(LinkedList*);
extern bool isEmptyList();
extern bool hasCycle(LinkedList*);
extern int maxList(LinkedList*);
extern int minList(LinkedList*);
extern int sumList(LinkedList*);
extern int lengthList(LinkedList*);
extern double avgList(LinkedList*);
extern int atList(LinkedList*, int);


#endif
