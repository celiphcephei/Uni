#include <iostream>

struct Node{
    int info;
    Node* next;
};

// Complexity: O(1), no importa la cantidad de elementos, siempre hace 4 operaciones
void insert(Node*& list, int value){ // es un apuntador y la variable de pasa por referencia para modificar el original
    Node* p = new Node;
    p->info = value;
    // p->next = nullptr;

    p->next = list;
    list = p;
}

// Complexity: O(n), hace la cantidad de operaciones de acuerdo a la cantidad de elementos
void free(Node*& list){
    Node* p = list;
    while(p){ // while(p != nullptr)
        Node* next = p->next;
        delete p;
        p = next;
    }
    list = nullptr;
}

// Complexity: O(n), el while corre la cantidad de veces
void display(Node* list){ // no se manda por ref porque no se va a modificar
    Node* p = list;
    while(p){
        std::cout << p->info << " ";
        p = p->next;
    }
    std::cout << "\n";
}

// Complexity: O(n)
int length(Node* list){
    Node* p = list;
    int count = 0;

    while(p){
        ++count;
        p = p->next;
    }
    return count;
}

// Complexity: O(1), es independiente al tamaño del elemento
int drop(Node*& list){ // va a modificar la lista, se manda como referencia
    if(list){
        Node* p = list;
        int result = list->info;
        list = list->next;
        return result;
    } else {
        return 0;
    }
}

// Complexity: O(N), solo en el peor de los casos recorre todo
bool remove(Node*& list, int value){
    Node* p = list;
    Node* prev = nullptr;
    while(p){
        if(p->info == value){
            if(prev){
                prev->next = p-> next;
            } else {
                list = p->next;
            }
            delete p;
            return true;
        }
        prev = p;
        p = p->next;
    }
    return false;
}


int main(){
    Node* list = nullptr;
    std::cout << "lenth(list) = " << length(list) << "\n";
    insert(list, 4);
    display(list);
    insert(list, 8);
    display(list);
    insert(list, 15);
    display(list);
    std::cout << "drop(list) = " << drop(list) << "\n";
    std::cout << "drop(list) = " << drop(list) << "\n";
    insert(list, 16);
    display(list);
    insert(list, 23);
    display(list);
    insert(list, 42);
    display(list);
    std::cout << "length(list) = " << length(list) << "\n";
    
    std::cout << "remove(list, 16) = " << remove(list, 16) << "\n";
    display(list);

    std::cout << "remove(list, 108) = " << remove(list, 108) << "\n";
    display(list);
    
    std::cout << "remove(list, 42) = " << remove(list, 42) << "\n";
    display(list);
    
    free(list);
    display(list);
    return 0;
}