# Clinic Management System (DSA Project)

A Clinic Management System implemented using Data Structures and Algorithms (DSA) concepts in C/C++, based on a Queue implemented using a Linked List (Singly) with head & tail pointers. This project simulates real-world clinic patient management without using any database. All patient records are managed dynamically in memory using linked list nodes.

## Project Overview

This system manages clinic patients efficiently by following the FIFO (First-In, First-Out) principle. Patients are added to the queue and served in order. Emergency patients can be prioritized.

The project demonstrates practical implementation of:

- Doubly Linked List
- Queue Data Structure
- Dynamic Memory Allocation
- Searching Algorithms
- Traversal Techniques
- Node insertion and deletion

## Data Structure Used
Primary Data Structure:

- Linked List

Each patient is represented as a node containing:

- Patient Name
- Token Number
- Doctor Name
- Patient Type (Normal / Emergency)
- Next pointer

Logical Structure:

#### Queue (FIFO)

Head → Next patient to be served

Tail → Last patient added

## Features
### Patient Management
1. Add Patient

- Adds a normal patient to the end of the queue
- Time Complexity: O(n)

2. Add Emergency Patient

- Adds emergency patient at the front of queue
- Gives priority over normal patients
- Time Complexity: O(1) best, O(n) worst

3. Search Patient by Name

- Finds patient using name
- Time Complexity: O(n)

4. Search Patient by Token Number

- Finds patient using unique token number
- Time Complexity: O(n)

5. Search Patients by Doctor Name

- Displays all patients assigned to a specific doctor
- Time Complexity: O(n)

### Queue Operations

6. Show Next Patient

- Shows the upcoming patient (second in queue)
- Time Complexity: O(1)

7. Serve Next Patient

- Removes and serves patient from front
- Time Complexity: O(1)

### Display Operations

8. Show All Patients

- Displays complete patient list
- Time Complexity: O(n)
- Update and Delete Operations

9. Update Patient Information

- Updates existing patient details
- Time Complexity: O(n)

10. Discharge Patient

- Removes patient from system
- Time Complexity: O(n)

## DSA Concepts Implemented

- Linked List
- Queue Implementation using Linked List
- Dynamic Memory Allocation
- Node Insertion (Front and End)
- Node Deletion
- Traversal
- Searching
- Pointer Manipulation

## Technologies Used

- Language: C++
- Concepts: Data Structures and Algorithms
- IDE: Qt Creator

## Learning Objectives

- This project helps understand:
- Real-world implementation of linked lists
- Queue implementation using pointers
- Memory management
- Practical DSA usage
- Patient scheduling simulation
