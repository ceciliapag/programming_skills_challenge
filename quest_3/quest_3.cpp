#include <iostream>

using namespace std; 

void print_numbers(int max_it){
    //this functions receives an integer that is expected to be the maximum number in the iteration.
    //Then, it iterates up until the number (max_it included) finding which is multiple of 3 or 5 (or 3 and 5)
    for(int i = 0; i <= max_it; i++){
        if (i%3 == 0 && i%5 == 0){
            cout << "FooBaa" << endl;
        }
        else
        {
            if (i%3 == 0){
                cout << "Foo" << endl;
            }
            else if (i%5 == 0)
            {
                cout << "Baa" << endl;
            }
            else{
                cout << i << endl;
            }   
        }
    }
}

int main(){
    int iter_max = 100; //the maximum number is 100 (per exercise)
    print_numbers(iter_max);
    
    return 0;
}