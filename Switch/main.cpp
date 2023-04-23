#include <iostream>

using namespace std;

int main(){
    
    char letter_grade{};
    
    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;
    
    switch(letter_grade){
        case 'a':
        case 'A':
            cout << "You need a 90 or above for an A" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need 80-89 for a B" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need 70-79 for a C" << endl;
            break;
        case 'd':
        case 'D':
            cout << "You need 60-69 for a D" << endl;
            break;
        case 'f':
        case 'F':
        {
            char confirm{};
            cout << "Are you certain (Y/N)?";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y')
                cout << "OK dont study then" << endl;
            else if (confirm == 'n' || confirm == 'N')
                cout << "Good study hard" << endl;
            else
                cout << "Paramiter not recognized" << endl;
        }
        
            cout << "Dont study to achieve" << endl;
            break;
        default:
            cout << "Sorry not a valid grade" << endl;
    }
    
    
    return 0;
}