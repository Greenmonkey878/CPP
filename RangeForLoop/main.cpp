#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

//for (var_type var_name: sequence)
//  statement; // can use var_name

//for(var_type var_name:sequence){
//  statments; // can use var_name
//  }

int main(){
    
//    int scores[]{10,20,30};
//    
//    for(int score:scores) // or auto for int
//        cout << score << endl;
//
//    vector<double> temperatures {87.9,77.9,80.0,72.5};
//    double average_temp{};
//    double total{};
//    
//    for(auto temp:temperatures)
//        total +=temp;
//        
//    if(temperatures.size() !=0)
//        average_temp = total/temperatures.size();
//    
//    
//    cout << fixed << setprecision(1);
//    cout << "Average temperature: " << average_temp << endl;
//
//    for(auto val:{1,2,3,4,5})
//        cout << val << endl;
    for(auto c:"This is a test")
        if(c!=' ')
        cout << c;
    
    for(auto c:"This is a test")
        if(c==' ')
            cout <<"\t";
        else
            cout << c;
    
    
    
    return 0;
}