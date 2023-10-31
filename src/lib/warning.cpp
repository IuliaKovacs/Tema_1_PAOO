
#include <iostream>
#include <string.h>
#include "warning.hpp"

warning::warning(int s, int sl, char * msg, char * type)
{   
    cout << "Normal constructor in use"<< '\n';
    this->speed = s;
    this->severityLevel = sl;
    this->message = new char[strlen(msg) + 1];
    strcpy(this->message, msg);
    this->type = new char[strlen(type) + 1];
    strcpy(this->type, type);
}

warning::warning(const warning &other)
{
    cout << "Copy constructor in use"<< '\n';
    this->message = new char[strlen(other.message) + 1];
    strcpy(this->message, other.message);
    this->type = new char[strlen(other.type) + 1];
    strcpy(this->type, other.type);
    this->severityLevel = other.severityLevel;
    this->speed = other.speed;
}

warning::~warning()
{
    cout << "Destructor in use"<< '\n';
    delete[] message;
    delete[] type;
}

void warning::setWarningMessage(char * msg)
{
    this->message = new char[strlen(msg) + 1];
    strcpy(this->message, msg);
}

void warning::setWarningType(char * type)
{
    this->type = new char[strlen(type) + 1];
    strcpy(this->type, type);
}

void warning::displayWarning()
{
    cout <<this->message<< '\n';
}

void warning::displaySeverityLevel()
{
    cout <<this->severityLevel<< '\n';
}

void warning::displayWarningType()
{
    cout <<this->type<< '\n';
}

warning warning::operator=(warning &ob)
{       
    cout <<"Assignment operator in use"<< '\n';

     if(strlen(ob.type) > strlen(type))
     {
        delete[] type;
        type = new char[strlen(ob.type)+1];
     }
     strcpy(this->type, ob.type);
     if(strlen(ob.message) > strlen(message))
     {
        delete[] message;
        message = new char[strlen(ob.message)+1];
     }
     strcpy(this->message, ob.message);
     this->speed = ob.speed; 
     this->severityLevel = ob.severityLevel;
     return *this;
}