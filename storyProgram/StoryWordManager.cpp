#include "StoryWordManager.h"

StoryWordManager::StoryWordManager()
{
     cout << "Welcome to Mad Lib.\n\n";
    cout << "Answer the following questions to help create a new story.\n";
    
     name = askText("Please enter a name: ");
     noun = askText("Please enter a plural noun: ");
     number = askNumber("Please enter a number: ");
     bodyPart = askText("Please enter a body part: ");
     verb = askText("Please enter a verb: ");
                               
}


 string StoryWordManager::askText(const string& get)
{
    string text;
    cout << get;
    cin >> text; 
    return text;
}

int StoryWordManager::askNumber(string prompt)
{
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

