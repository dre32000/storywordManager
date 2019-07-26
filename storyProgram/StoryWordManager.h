#include <string>
#include <iostream>

#ifndef STORYWORDMANAGER_H_
#define STORYWORDMANAGER_H_
using namespace std;
class StoryWordManager
{
      public :
             
      StoryWordManager();       
     int getNumber() { return number;}
     string getNoun() { return noun;}
     string getName() { return name;}
     string getBodyPart() { return bodyPart;}
     string getVerb() { return verb;}
     
     
     private:
     string name, noun, bodyPart, verb;
     int number;
     string askText(const string& get);
     int askNumber(string prompt);
     
     };
     
      


#endif
