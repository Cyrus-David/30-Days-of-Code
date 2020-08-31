Node* removeDuplicates(Node *head) {
  Node* copy = head; //copy the head so, you can go back anytime
  
  while (copy->next) { //only stops when the next pointer is NULL
    if(copy->data == copy->next->data){ // checks wether the next data is the same with current
        copy->next = copy->next->next; // skips the the next data
    } else { //proceed to next pointer
        copy = copy->next;
    }
  }

  return head;
}
