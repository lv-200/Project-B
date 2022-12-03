/*
    BLACKPINK

    To, Claire
    Vo, Leanne
    Ha, Tri

    Fall 2022
    CS A250 - C++ 2
    Project: CS Courses
*/

#include "CourseList.h"

#include <iostream>
using namespace std;

// Copy constructor
CourseList::CourseList(const CourseList& otherList)
{

}

// Definition overloaded assignment operator
//CourseList& CourseList::operator=(const Course& rightSide)
//{
//
//}

// Definition function copyCallingObjIsEmpty
void CourseList::copyCallingObjIsEmpty(const CourseList& aCourseList)
{
    Node* temp = aCourse.first();
    while (temp != nullptr)
    {
        last = new Node(aCourse.first->getData(), nullptr);
        temp = temp->getNext();
    }

    count = aCourseList.count;
}

// Definition function copyObjectsSameLength
void CourseList::copyObjectsSameLength(const CourseList& aCourseList)
{
    Node* ptrCalling = first;
	Node* ptrParam = aCourseList.first;

    while (ptrParam != nullptr)
    {
        ptrCalling->setData(ptrParam->getData());
		ptrCalling = ptrCalling->getNext();
		ptrParam = ptrParam->getNext();
    }
}

// Definition function copyCallingObjLonger
void CourseList::copyCallingObjLonger(const CourseList& aCourseList)
{
	Node* ptrCalling = first;
    Node* ptrParam = aCourseList.first;

    while(ptrParam != nullptr)
    {
        ptrCalling->setData(ptrParam->getData());
        ptrCalling = ptrCalling->getNext();
        ptrParam = ptrParam->getNext(); 
    }

    while(ptrCalling != nullptr)
    {
        delete ptrCalling;
        ptrCalling = ptrCalling->getNext();
    }

    last->setNext(nullptr);
    count = aCourseList.count;
}

// Definition function copyCallingObjShorter
void CourseList::copyCallingObjShorter(const CourseList& aCourseList)
{
	Node* ptrCalling = first;
	Node* ptrParam = aCourseList.first;

    while (ptrParam != nullptr)
    {
        while (ptrCalling != nullptr)
        {
            ptrCalling->setData(ptrParam->getData());
			ptrCalling = ptrCalling->getNext();
			ptrParam = ptrParam->getNext();
        }

        ptrCalling = new Node(ptrParam->getData(), ptrCalling);
		ptrCalling = ptrCalling->getNext();
		ptrParam = ptrParam->getNext();
    }

    last = ptrCalling;
    last->setNext(nullptr);
    count = aCourseList.count;

}

// Destructor
CourseList::~CourseList()
{
    if (count != 0)
    {
        clearList();
    }
}