#include <stdio.h>
#include <string.h>
#include "meta.h"

int main(int argc, char *argv[]) {
    // Define the string and index variable
    const char *string;

    // Main program. Check to see if the user has supplied the program with at least
    // two arguments
    if (argc < 1) {
        perr("I need at least one argument, a string of some kind...");
        return 1;
    } else {
        // Set the ARGV index 1 to the string value
        string = argv[1];

        if (strlen(string) < 4) {
            // Print error and exit
            perr("Please give me a string that consists of 4 or more characters");
            return 1;
        } else {
            // First, reverse the order of the string, then change the index of that string to a random
            // character
            revs(string);
        }
    }

    return 0;
}
