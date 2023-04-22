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
    double package_cost {};
    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter length, width, and height of the package separated by spaces: ";
    cin >> length >> width >> height;
    
    if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length){
        
        cout << "Sorry, package declined - exceeded dimensions" << endl;
    }else{
        
        package_volume = length * width * height;
        package_cost = base_cost;
        
        if (package_volume > tier2_threshold){
            package_cost += package_cost * tier2_surcharge;
            cout << "adding tier 2 sucharge" << endl;
        }else if (package_volume > tier1_threshold){
            package_cost += package_cost * tier1_surcharge;
            cout << "adding tier 1 surcharge" << endl;
        }
    }
    cout << "The volume of you package is: " << package_volume << endl;
    
    cout << "Your package will cost $" << package_cost << " to ship" << endl;
    
    return 0;
}