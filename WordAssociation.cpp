/*
Word Asso/ciation
Pawelski
4/8/2021
The program asks the user to enter a word and then displays a word that
begins with the last letter of the entered word. You need to modify the
program so that the user can enter another word.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char lastLetter;
    string word, newWord;
    cout << "Enter a word >> ";
    cin >> word;
    lastLetter = word[word.length() - 1];
    switch (lastLetter)
    {
    case 'a':
        newWord = "ant";
        break;
    case 'b':
        newWord = "bee";
        break;
    case 'c':
        newWord = "cat";
        break;
    case 'd':
        newWord = "dodo";
        break;
    case 'e':
        newWord = "elephant";
        break;
    case 'f':
        newWord = "frog";
        break;
    case 'g':
        newWord = "goat";
        break;
    case 'h':
        newWord = "horse";
        break;
    case 'i':
        newWord = "iguana";
        break;
    case 'j':
        newWord = "jaguar";
        break;
    case 'k':
        newWord = "kangaroo";
        break;
    case 'l':
        newWord = "llama";
        break;
    case 'm':
        newWord = "moose";
        break;
    case 'n':
        newWord = "narwhal";
        break;
    case 'o':
        newWord = "octopus";
        break;
    case 'p':
        newWord = "penguin";
        break;
    case 'q':
        newWord = "quail";
        break;
    case 'r':
        newWord = "raccoon";
        break;
    case 's':
        newWord = "sloth";
        break;
    case 't':
        newWord = "turtle";
        break;
    case 'u':
        newWord = "unicorn";
        break;
    case 'v':
        newWord = "vole";
        break;
    case 'w':
        newWord = "whale";
        break;
    case 'x':
        newWord = "xeme";
        break;
    case 'y':
        newWord = "yak";
        break;
    case 'z':
        newWord = "zebra";
        break;
    default:
        cout << "Invalid character!";
        return 1;
    }
    cout << "I would say " << newWord << ".";
    return 0;
}
