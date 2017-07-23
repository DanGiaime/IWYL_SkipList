#ifndef SKIP_LIST_ADT_H
#define SKIP_LIST_ADT_H
#include <stdbool.h>

typedef struct Node_s {
  struct Node_s *above;
  struct Node_s *below;
  struct Node_s *after;
  struct Node_s *before;
  void *key;
  void *value;
} Node;

#ifndef SKIP_LIST_IMPL
#define SKIP_LIST_IMPL
typedef {} *SkipList;
#endif

void add(SkipList list, void *value);

void clear(SkipList list);

bool contains(Skiplist list, void *value);

void* get(SkipList list, void *value);

bool is_empty(SkipList list);

bool remove(SkipList list, void *value);

int size(SkipList list);

#endif
