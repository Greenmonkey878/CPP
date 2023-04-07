#include <iostream>

using namespace std;

int main(){
    
    cout << "Hello and welcome to Franks Carpet Cleaning Service" <<endl;
    
    int number_of_small_rooms{0};
    cout << "How many small rooms: " << number_of_small_rooms <<endl;
    cin >> number_of_small_rooms;
    
    int number_of_large_rooms{0};
    cout << "How many large room: " << number_of_large_rooms <<endl;
    cin >> number_of_large_rooms;
    
    const double price_per_small_room{25};
    const double price_per_large_room{35};
    const double sales_tax{0.06};
    const int expiry{30};
    
    cout << "Estimate for carpet cleaning service" <<endl;
    cout << "Number of small rooms: " << number_of_small_rooms <<endl;
    cout << "Number of large rooms: " << number_of_large_rooms <<endl;
    cout << "Price per small room: $" << price_per_small_room <<endl;
    cout << "Price per large room: $" << price_per_large_room <<endl;
    cout << "Cost: $" << (price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms) << endl;
    cout << "Tax: $" << ((price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)) * sales_tax <<endl;
    cout << "===========================================" <<endl;
    cout << "Total estimate: $" << ((price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)) +
    (((price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)) * sales_tax) <<endl;
    cout << "This estimate is valid for " << expiry << " days" << endl;
    
    return(0);
}