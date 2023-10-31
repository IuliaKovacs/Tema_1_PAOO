
#pragma once

#include <iostream>
using namespace std;

class warning {
    char *type;
    char *message;
    int speed; 
    int severityLevel;
public:
    warning(int s, int sl, char * msg, char * type);
    warning(const warning &w);
    ~warning();
    void setWarningMessage(char * msg);
    void setWarningType(char * type);
    int getCurrentSpeed() { return speed; }
    void displayWarning();
    void displaySeverityLevel();
    void displayWarningType();
};

