#include <iostream>
#include <vector>

using namespace std;

int main(){
    
        vector <int> vector_one;
        vector <int> vector_two;
        
        // Declaring dynamacally
        //+++++++++++---========
        
        vector_one.push_back(10);
        vector_one.push_back(20);
        
        cout << "\nVector one:" <<endl;
        
        cout << vector_one.at(0) <<endl;
        cout << vector_one.at(1) <<endl;
        
        cout << "===========================";
        
        vector_two.push_back(100);
        vector_two.push_back(200);
        
        cout << "\nVector two:" <<endl;
        
        cout << vector_two.at(0) <<endl;
        cout << vector_two.at(1) <<endl;
        
        cout << "\nThere are now " << vector_one.size() << " elements in one." <<endl;
        cout << "\nThere are now " << vector_two.size() << " elements in two." <<endl;
        
        cout << "===========================";
        
        vector <vector<int>> vector_2d;
        
        vector_2d.push_back(vector_one);
        vector_2d.push_back(vector_two);
        
        cout << "\nVector 2D:" << endl;
        
        cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) <<endl;
        cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) <<endl;
        
        vector_one.at(0) = 1000;
        
        cout << "\nVector one:" <<endl;
        
        cout << vector_one.at(0) <<endl;
        cout << vector_one.at(1) <<endl;
        
        cout << "Vector one contains " << vector_one.size() << " elements." <<endl;
        
    return(0);
}