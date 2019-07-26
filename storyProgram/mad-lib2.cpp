// Mad-Lib
// Creates a story based on user input
#include "StoryWordManager.h"
#include <iostream>
#include <string>

using namespace std;
void tellStory(StoryWordManager* manager);

int main()
{
    StoryWordManager* manager = new StoryWordManager();
    tellStory(manager);
    //system("pause");
    return 0;
}

void tellStory(StoryWordManager* manager)
{
    cout << "\nHere's your story:\n";
    cout << "The famous explorer ";
    cout << manager->getName();
    cout << " had nearly given up a life-long quest to find\n";
    cout << "The Lost City of ";
    cout << manager->getNoun();
    cout << " when one day, the ";
    cout << manager->getNoun();
    cout << " found the explorer.\n";
    cout << "Surrounded by ";
    cout <<manager->getNumber();
    cout << " " << manager->getNoun();
    cout << ", a tear came to ";
    cout << manager->getName() << "'s ";
    cout << manager->getBodyPart() << ".\n";
    cout << "After all this time, the quest was finally over. ";
    cout << "And then, the ";
    cout << manager->getNoun() << "\n";
    cout << "promptly devoured ";
    cout <<manager->getName() << ". ";
    cout << "The moral of the story? Be careful what you ";
    cout << manager->getVerb();
    cout << " for.";
}
