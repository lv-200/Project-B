/*
	BLACKPINK

	To, Claire
	Vo, Leanne
	Ha, Tri

	Fall 2022
	CS A250 - C++ 2
	Project: CS Courses
*/

#ifndef COURSELIST_H
#define COURSELIST_H

#include "Course.h"

#include <string>
#include <set>

class Node
{
public:
	Node() : course(), next(nullptr) {}
	Node(const Course& newCourse, Node* newNext)
		: course(newCourse), next(newNext) {}
	Course getCourse() const { return course; }
	Node* getNext() const { return next; }
	void setCourse(const Course& newCourse) { course = newCourse; }
	void setNext(Node* newNext) { next = newNext; }
	~Node() {}
private:
	Course course;
	Node* next;
};

class CourseList
{
public:
	// Default constructor
	CourseList() : first(nullptr), last(nullptr), count(0) {}

	// Functions addCourse
	void addCourse(const Course& aCourse);
	void addCourse(int courseNumber, const std::string& courseName,
		double courseUnits, const std::set<int>& prereqs);

	// Accessor functions
	static std::string getPrefix();

	// Boolean functions
	bool getNumberOfCourses() const;
	bool isEmpty() const;
	Node* searchCourse(int courseNumber) const;
	void searchCourse(int courseNumber, std::string& courseName) const;
	void searchCourse(int courseNumber, Course& courseObj) const;

	// Function deleteCourse
	void deleteCourse(int courseNumber);

	// Function retrieveAllCourses
	void retrieveAllCourses(std::string& courses);

	// Function clearList
	void clearList();

	/********************* THE BIG THREE *********************/

	// Copy constructor	
	CourseList(const CourseList& otherList);

	// Overloaded assignment operator
	// CourseList& operator=(const Course& rightSide);

	// Destructor
	~CourseList();

private:
	// Function getCourseLocation
	void getCourseLocation(int courseNumber) const;

	// Function insertInOrder
	void insertInOrder(Node* aNode);

	// Helper functions for overloaded assignment operator
	void copyCallingObjIsEmpty(const Course& aCourse);
	void copyObjectsSameLength(const Course& aCourse);
	void copyCallingObjLonger(const Course& aCourse);
	void copyCallingObjShorter(const Course& aCourse);

	Node* first;
	Node* last;
	int count;
};

#endif