#include <iostream>

using namespace std;

class Student{

public:
  //Enter(); //initialize all entries to empty
  char* GetStudent() const; //returns student name in search
  char GetClassification();
  char SetClassification();

private:
  char* studentName[20];
  char classification;
  char* major[20];
  int studentID[10];


};

class Course{

public:
  Course();
  Course(char* cName, char* _courseCode, char* _location);
  char* GetCourseName() const;
  char* GetCode() const;
  char* GetLocation() const;
  void SetCourseName(const char* cName);
  void SetCourseCode(const char* _courseCode);
  void SetLocation(const char* _location);
  void InsertCourse();

private:
  char* CourseName;
  int cNameSize;
  char CourseCode[8];
  char Location[11];
  Student Roster[2];



};
