#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, pair<int, string>> compartments;
    int choice, number, seats;
    string type;
    
    do {
        cout << "\n1. Add Compartment\n2. Remove Compartment\n3. Get Compartment Details\n4. Display Compartments\n5. Exit\nEnter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter number, seats, type: ";
                cin >> number >> seats >> type;
                compartments[number] = {seats, type};
                break;
            case 2:
                cout << "Enter number to remove: ";
                cin >> number;
                compartments.erase(number);
                break;
            case 3:
                cout << "Enter number: ";
                cin >> number;
                if (compartments.count(number))
                    cout << "Seats: " << compartments[number].first << ", Type: " << compartments[number].second << endl;
                else 
                    cout << "Not found.\n";
                break;
            case 4:
                for (auto &c : compartments)
                    cout << "Compartment " << c.first << ": " << c.second.first << " seats, " << c.second.second << endl;
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 5);
    
    return 0;
}
