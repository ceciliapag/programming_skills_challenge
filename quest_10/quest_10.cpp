#include <iostream>
#include <string>

using namespace std; 

int myLen(string *word)
    //this function receives a pointer to a string.
    //then, it counts within the address up to the point tha the pointer is NULL.
    //when it gets to a null pointer, the function knows that the string has been searched completely(flips the flag) and returns the counter.
{
    int char_counter = 0;
    bool search_flag = true;
    while(search_flag)
    {
        if (word[0][char_counter])
        {
            char_counter ++;
        }  
        else
        {
            search_flag = false;
        }
    }

    return char_counter;
}

int main()
{
    string word;
    cout << "Type a word: ";
    cin >> word;

    int len = myLen(&word);
    cout << "The string " << word << " has " << len << " letters!" << endl;
    
    return 0;
}