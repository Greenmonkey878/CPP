#include <iostream>

using namespace std;

int main(){
    
    int length{}, width{}, height{};
    double base_cost{2.50};
    
    const int tier1_threshold{100}; //volume
    const int tier2_threshold{500}; //volume
    
    int max_dimension_length{10}; //inches
    
    double tier1_surcharge{0.10}; //10% extra
    double tier2_surcharge{0.25}; //25% extra
    
    //Dimensions in 10inches or less
    
    int package_volume{};
    
    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter length, width, and height of the package separated by spaces: ";
    cin >> length >> width >> height;
    
    if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length){
        
        cout << "Sorry, package declined - exceeded dimensions" << endl;
    }else{
        
    }
    
    
    return 0;
}