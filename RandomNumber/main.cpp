#include <iostream>
#include <cstdlib>  // required for random
#include <ctime>    // required for time

using namespace std;

int main(){
    
    int random_number{};
    size_t count{5};       // number of random number to generate
    int min{1};             // lowest number bound
    int max{20};            // upper number bound


    // seed the random number generator
    // if you dont seed the generator you will get the same sequence every run
    
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));
    
    for(size_t i{1}; i <=count; ++i){
        random_number = rand() % max + min;     // generate a random number[min,max]
        cout << random_number << endl;
    }
    
    cout << endl;
    return 0;
}