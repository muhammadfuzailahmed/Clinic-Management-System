#include "linkedlist.h"

LinkedList::LinkedList()
{
    head = nullptr;
    tail = nullptr;
    tokenCounter = 100;
}

Node* LinkedList::getHead()
{
    return head;
}

void LinkedList::addPatient(string name, string doctorName, string gender, int age, string disease)
{
    Node* newNode = new Node(name, doctorName, gender, age, disease, tokenCounter++, false);

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    Node* curr = head;
    while(curr->next != nullptr) {
        curr = curr->next;
    }
    curr->next = newNode;
    tail = newNode;
}

void LinkedList::addEmergencyPatient(string name, string doctorName, string gender, int age, string disease) {
    Node* newNode = new Node(name, doctorName, gender, age, disease, tokenCounter++, true);

    if(head==nullptr) {
        head = newNode;
        tail = newNode;
        return;
    }

    if (!head->isEmergency)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* curr = head;
    while(curr->next != nullptr && curr->next->isEmergency) {
        curr = curr->next;
    }
    newNode->next = curr->next;
    curr->next = newNode;
    if(newNode->next == nullptr) {
        tail = newNode;
    }
}

Node* LinkedList::serveNextPatient()
{
    if (head == nullptr){
        return nullptr;
    }

    Node* curr = head;
    head = head->next;

    if (head == nullptr) {
        tail = nullptr;
    }
    delete curr;
    return head;
}

Node* LinkedList::NextPatientInfo()
{
    if (head == nullptr) {
        return nullptr;
    }
    if(head->next == nullptr) {
        return nullptr;
    }
    Node* nextPatient = head->next;
    return nextPatient;
}

Node* LinkedList::searchByName(string name)
{
    Node* curr = head;
    while (curr != nullptr)
    {
        if (curr->name == name)
            return curr;
        curr = curr->next;
    }
    return nullptr;
}

Node* LinkedList::searchByToken(int token)
{
    Node* curr = head;
    while (curr != nullptr)
    {
        if (curr->tokenNumber == token){
            return curr;
        }
        curr = curr->next;
    }
    return nullptr;
}

Node* LinkedList::searchByDoctorName(string name)
{
    Node* curr = head;
    while (curr != nullptr)
    {
        if (curr->doctorName == name)
            return curr;
        curr = curr->next;
    }
    return nullptr;
}

Node* LinkedList::updatePatientInfo(int tokenNumber){
    Node* curr = head;
    while(curr != nullptr) {
        if(curr->tokenNumber == tokenNumber) {
            return curr;
        }
        curr = curr->next;
    }
    return nullptr;
}

bool LinkedList::deleteByToken(int Token)
{
    Node* curr = head;
    if (head == nullptr){
        return false;
    }

    if (head->tokenNumber == Token)
    {
        head = head->next;
        if (head == nullptr) {
            tail = nullptr;
        }
        delete curr;
        return true;
    }

    Node* prev = head;

    while (curr != nullptr)
    {
        if (curr->tokenNumber == Token)
        {
            prev->next = curr->next;
            if (curr == tail) {
                tail = prev;
            }
            delete curr;
            return true;
        }
        prev = curr;
        curr = curr->next;
    }
    return false;
}



LinkedList hospitalQueue;
