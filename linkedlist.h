    #ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>
using namespace std;

class Node
{
public:
    string name, doctorName, disease, gender;
    int age;
    int tokenNumber;
    bool isEmergency;
    Node *next;
    Node(string name, string doctorName, string gender, int age, string disease, int tokenNumber, bool isEmergency)
    {
        this->name = name;
        this->age = age;
        this->disease = disease;
        this->gender = gender;
        this->doctorName = doctorName;
        this->tokenNumber = tokenNumber;
        this->isEmergency = isEmergency;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node* head;
    Node* tail;
    int tokenCounter;

public:
    LinkedList();

    void addPatient(string name, string doctorName, string gender, int age, string disease);
    void addEmergencyPatient(string name, string doctorName, string gender, int age, string disease);
    Node* serveNextPatient();
    Node* NextPatientInfo();

    Node* searchByName(string name);
    Node* searchByToken(int token);
    Node* searchByDoctorName(string name);

    Node* updatePatientInfo(int tokenNumber);

    bool deleteByToken(int Token);

    Node* getHead();
};
extern LinkedList hospitalQueue;
#endif
