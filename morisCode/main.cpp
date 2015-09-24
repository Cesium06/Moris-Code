//
//  main.cpp
//  morisCode
//
//  Created by Jonathan Cesari on 8/28/15.
//  Copyright © 2015 Jonathan Cesari. All rights reserved.
//

#include <iostream>
void getMorse(char x);
using namespace std;


int main(int argc, const char * argv[]) {
    //Beep information
    int dot, dash, pause, letter, word;
    int duration = 250;     //defines length ms?
    int frequency = 800;    //defines pitch
    dot = duration;     //dot is the shortest length
    dash = 3 * dot;		// Dash is 3 x dot length
    pause = dot;			// Pause between . and - = duration of dot
    letter = 3 * dot;		// Pause between letters is 3 x dot
    word = 7 * dot;		// Pause between words = 7 x dot
    

    //String, an array of chars
    //String will be used as an array of characters
    //Set current character in the for loop
    string inputString;
    string currentCharacter;
    
    cout << "Please enter up to 50 alphanumeric characters to be translated into Morse Code: ";
    getline(cin, inputString);
    
    
    
    for (int charLocation = 0; charLocation < 50; charLocation++){
        
        if (inputString[charLocation] == ' '){
            getMorse(inputString[charLocation]);
            //New word beeps
            
        }
        
        else
            getMorse(inputString[charLocation]);
        
        
    }
    
    
    return 0;
}


void getMorse(char letter){
    switch (letter){
        case '0':
            cout << "-----";
            break;
        case '1':
            cout << ".----";
            break;
        case '2':
            cout << "..---";
            break;
        case '3':
            cout << "...--";
            break;
        case '4':
            cout << "....-";
            break;
        case '5':
            cout << ".....";
            break;
        case '6':
            cout << "-....";
            break;
        case '7':
            cout << "--...";
            break;
        case '8':
            cout << "--..";
            break;
        case '9':
            cout << "---.";
            break;
        case ' ':
            //Beep, new word! 7x dot
            cout << " ";
            break;
            
    
    }
    
}