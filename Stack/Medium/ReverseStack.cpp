 void reverse() 
    { 
        StackNode *prev, *cur, *succ; 
        cur = prev = top; 
        cur = cur->next; 
        prev->next = NULL; 
        while (cur != NULL) { 
  
            succ = cur->next; 
            cur->next = prev; 
            prev = cur; 
            cur = succ; 
        } 
        top = prev; 
    } 