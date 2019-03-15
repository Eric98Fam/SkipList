void Search (T key)
{
    Node<T>* current = header;
    
    for(int i = level; i >= 0; i--) 
    { 
        while(current->forward[i] && 
               current->forward[i]->key < key) 
            current = current->forward[i]; 
  
    } 
  
    current = current->forward[0]; 
  
    if(current and current->key == key)  
        cout<<"Key Located: " << key << "\n"; 
}
