#include "course.h"
#include <cstring>
#include <iostream>

using namespace std;

Course::Course(){

 CourseName = new char[1];

}

void Course::SetCourseName(const char* cName){

  int size = 0;

   while(cName[size] != '\0') {

      size++;

   }

      size++;

      CourseName = new char[size];


   for(int i = 0; i < size + 1; i++){

     strcpy(CourseName, cName);

   }






}

char* Course::GetCourseName() const{

 return CourseName;

}

void Course::SetLocation(const char* _location){

    int size = 0;

   while(_location[size] != '\0') {

      size++;

   }

      size++;




   for(int i = 0; i < size + 1; i++){

     strcpy(Location, _location);

   }


}

void Course::SetCourseCode(const char* _courseCode){

    delete [] CourseCode;

    int size = strlen(_courseCode) + 1;

    strcpy(CourseCode, _courseCode);


}

Course::Course(char* cName, char* _courseCode, char* _location){

    SetCourseName(cName);
    SetLocation(_location);
    SetCourseCode(_courseCode);

}
