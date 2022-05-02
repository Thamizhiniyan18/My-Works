#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student {
    private: 
        int Age, standard;
        string firstName, lastName;  

    public:
        void set_age(int age) {
            Age = age;
        }

        void set_first_name(string fNAME) {
            firstName = fNAME;
        }

        void set_last_name(string lNAME) {
            lastName = lNAME;
        }

        void set_standard(int std) {
            standard = std;
        }

        int get_age() {
            return Age;
        }

        string get_first_name() {
            return firstName;
        }

        string get_last_name() {
            return lastName;
        }

        int get_standard() {
            return standard;
        }

        string to_string() {
            stringstream strstream;
            strstream << Age << "," << firstName << "," << lastName << "," << standard;
            return strstream.str();
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}