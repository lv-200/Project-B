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
#include <string> //added
using namespace std;

// Definition function addCourse
void CourseList::addCourse(const Course& aCourse)
{
    //    insertInOrder(new Node(aCourse, first));
}

// Definition function addCourse
void CourseList::addCourse(int courseNumber, const string& courseName,
    double courseUnits, const set<int>& prereqs)
{
    //    Creates a new dynamic node storing a course using all the parameters passed,
    //    and calls the function CourseList::insertInOrder() in one statement.
}

// Definition function getPrefix
string CourseList::getPrefix()
{
    return Course::getPrefix();
}

// Definition function getNumberOfCourses
bool CourseList::getNumberOfCourses() const
{
    return count;
}

// Definition function isEmpty
bool CourseList::isEmpty() const
{
    return (count == 0);
}

// Definition function searchCourse (courseNumber)
// Assume list is non-empty.
Node* CourseList::searchCourse(int courseNumber) const
{
    //    Calls function getCourseLocation() to return the location.
    return nullptr;
}

// Definition function searchCourse (courseNumber, courseName)
// Assume list is non-empty.
void CourseList::searchCourse(int courseNumber, std::string& courseName) const
{
    //    Calls function getCourseLocation() to determine the location.
    //    Using that pointer, retrieve name of course and save it in param string.
}

// Definition function searchCourse(courseNumber, course) 
// Assume list is non-empty.
void CourseList::searchCourse(int courseNumber, Course& courseObj) const
{
    //    Calls function getCourseLocation() to determine the location.
    //    Save it in the parameter of type Course
}

// Definition deleteCourse
// Assume list is non-empty.
// Assume course is in the list.
void CourseList::deleteCourse(int courseNumber)
{
    //    Deletes the course from the linked list.
}

// Definition retrieveAllCourses
// Assume list is non-empty.
void CourseList::retrieveAllCourses(string& courses)
{
    Node* temp = first;
    while (temp != nullptr)
    {
        cout << getPrefix()
            << temp->getCourse().getCourseNumber()
            << " - " << temp->getCourse().getCourseName() << endl;
    }
    // courses = out.str();
}

// Definition clearList
void CourseList::clearList()
{
    Node* temp = first;
    while (first != nullptr)
    {
        first = first->getNext();
        delete temp;
        temp = first;
    }
    count = 0;
    last = first;
}

// Definition function getCourseLocation
void CourseList::getCourseLocation(int courseNumber) const
{
    // Searches for the course and returns a pointer to node
}
