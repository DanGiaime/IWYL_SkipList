#ifndef SKIP_LIST_IMPL
#define SKIP_LIST_IMPL

typedef struct Node_s {
  struct Node_s *above;
  struct Node_s *below;
  struct Node_s *after;
  struct Node_s *before;
  void *value;
} Node;

typedef struct InternalSkipList_s {
  Node *top_head;
  Node *bottom_head;
  int (*comp)(void *val1, void*val2); 
  int count;
} InternalSkipList;

typedef InternalSkipList *SkipList;

SkipList init_list() {

}

void add(SkipList list, void *new_value) {
  Node *curr = list->bottom_head;
  Node *curr_head = list->bottom_head;
  bool go_to_next_level = false;
  do {
    while(curr->next) {
      
      //Iterate until we find the correct spot
      if(list->comp != NULL) {
        if(list->comp(curr->next->value, new_value) < 0) {
          curr = curr->next;
        }
        else {
          break;
        }
      }
      else {
        if(list->comp->value < new_value) {
          curr = curr->next;
        }
        else {
          break;
        }
      }

      curr->next = _make_node(new_value);
      if(go_to_next_level = _coin_flip()) {

        //If there is no level above to go to, make one
        if(curr_head->above == NULL) {

          //Make new head
          Node *new_node = _make_node(curr_head->value);
          curr_head->above = new_node;
          
          //Set new head's values appropriately
          new_node->below = curr_head;
          new-node->before = NULL;

          //Change list's top head to new head
          list->top_head = new_node;
        }

        //Move up one level
        curr_head = curr_head->above;
      }
    }

    
  } while(go_to_next_level);
}

Node *_make_node(int value) {
  Node *temp = malloc(sizeof(Node));
  temp->value = value;
  return temp;
}

void clear(SkipList list) {

}

bool contains(SkipList list, void *value) {

}

void* get(SkipList list, void *value) {

}

bool is_empty(SkipList list) {

}

bool remove(SkipList list, void *value) {

}

int size(SkipList list) {

}



#endif
