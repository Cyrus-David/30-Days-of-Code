
void levelOrder(Node * root){
  queue<Node*> holder;  //queue holder w/ Node datatype
  Node* rootCopy = root; //root holder

  while(rootCopy != NULL){
    cout << rootCopy->data << ' '; //prints current Node's data

    if (rootCopy->left  != NULL) //if left node is present, push its left node pointer to the queue
      holder.push(rootCopy->left); 
    if (rootCopy->right != NULL) //do the same for right
      holder.push(rootCopy->right);

    if (!holder.empty()) { // if the holder is not empty, copy the front of queue and pop
      rootCopy = holder.front();
       holder.pop();
    } else { // make it NULL if the queue is empty to, stop the loop
        rootCopy = NULL;
    }
  }
}

