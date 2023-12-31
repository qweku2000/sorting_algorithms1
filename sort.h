#include <stdlib.h>
#include <stdio.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
listint_t *create_listint(const int *array, size_t size);
void selection_sort(int *array, size_t size);
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void SplitMerge(size_t start, size_t end, int *array, int *copy);
void Merge(size_t start, size_t middle, size_t end, int *dest, int *source);
vvoid merge_sort(int *array, size_t size);
void TDSplitMerge(size_t start, size_t end, int *array, int *copy);
void TDMerge(size_t start, size_t middle, size_t end, int *dest, int *source);
void quick_sort_hoare(int *array, size_t size);
void quicksort(int *array, ssize_t lo, ssize_t hi, size_t size);
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size);
