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

void myReverse(string *word)
    //This function receives a pointer to a string.
    //Then, it reverses the string pointed using as reference the length of the original string, iteretively adding at the end the elements form the last to the first.
    //Lastlly, it returns a substring consisting only of the reversed half from the iteration.
{
    int word_len = myLen(word);
 
    for(int i = word_len; i>=0; i--)
    {
       word[0] += word[0][i];      
    }
    word[0] = word[0].substr(word_len, 2*word_len-1);
}

int main()
{
    string word;
    cout << "Type a word to be reversed: ";
    cin >> word;
    myReverse(&word);
    cout << "the reversed string is " << word << endl;
    
    return 0;

}