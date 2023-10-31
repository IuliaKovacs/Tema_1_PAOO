

# include "lib/warning.hpp"
# include <iostream>


int main() {
    // Example usage of the Warning class with copy constructor
    warning warning1(0, 2, "The car from behind is aproaching really fast", "Pre Crash");
    warning1.displayWarning();

    // Create a new warning using the copy constructor
    warning warning2 = warning1;
    warning2.displayWarning();
    cout<< warning2.getCurrentSpeed()<< '\n';
    warning2.displayWarningType();
    warning2.displaySeverityLevel();

    // Modify the original warning and display both warnings
    warning1.setWarningMessage("Bicycle detected - please be careful");
    warning1.setWarningType("Turn Assist");
    warning1.displayWarning();
    warning2.displayWarning(); // The copied warning remains unchanged

    // Assign warning1 that has more allocated space to warning2 in order to test op =
    cout <<"\n**** Assigment Operator part ****"<< '\n';
    warning2 = warning1;
    warning2.displayWarning();

    return 0;
}




