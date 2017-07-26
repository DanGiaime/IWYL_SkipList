#ifndef SKIP_LIST_ADT_H
#define SKIP_LIST_ADT_H
#include <stdbool.h>

#ifndef SKIP_LIST_IMPL
#define SKIP_LIST_IMPL
typedef {} *SkipList;
#endif

SkipList init_list();

void add(SkipList list, void *value);

void clear(SkipList list);

bool contains(SkipList list, void *value);

void* get(SkipList list, void *value);

bool is_empty(SkipList list);

bool remove(SkipList list, void *value);

int size(SkipList list);

#endif
