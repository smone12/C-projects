#include <bits/stdc++.h>

using namespace std;
namespace fs = filesystem;

void menu();
void handleChoiceWtd();

void addPeople();
void handleChoiceWtd_ap();
void addTeacher();
void addStudent();
void addPrincipal();

void checkIfFileMainExists();
void checkIfFileTeacherExists();
void checkIfFileStudentExists();
void checkIfFilePrincipalExists();

void removePeople();
void removeTeacher();
void removeStudent();
void removePrincipal();

void showPeople();
void handleChoice_wtd_sfip();
void showTeacher();
void showStudent();
void showPrincipal();
void searchPeople();
void searchDirectory(const string& directoryPath, const string& searchTerm);

void checkIfLeave();

int wtd;
int wtd_ap;
int wtd_rp;
int wtd_sfid;

string directoryPathMain = "People";
string directoryPathTeachers = "People/Teacher";
string directoryPathStudents = "People/Student";
string directoryPathPrincipals = "People/Principal";

string TeacherFilePath = "People/Teacher";
string StudentFilePath = "People/Student";
ofstream PersonFile;
string personFileName;

string personFirstName;
string personLastName;
int personAge;
int personYears;
int personId;

int studentYear;
int studentBirthYear;
int studentBirthMonth;
int studentBirthday;

bool ifLeave;
char ifLeaveChar;

int main() {
    while (true) {
        menu();
        checkIfLeave();
        if (ifLeave == true) {
            break;
        }
        else if (ifLeave == false) {
            cout << "Restarted program." << endl;
        }
    }

    return 0;
}

void menu() {
    cout << "======= Menu =======" << endl;
    cout << "1. Add people" << endl;
    cout << "2. Remove people" << endl;
    cout << "3. See all people" << endl;
    cout << "4. Search people" << endl;
    cout << "5. Exit" << endl;
    cout << "====================" << endl;

    handleChoiceWtd();
}

void handleChoiceWtd() {
    cout << "What to do?: ";
    cin >> wtd;

    if (wtd == 1) {
        addPeople();
    } else if (wtd == 2) {
        removePeople();
    } else if (wtd == 3) {
        showPeople();
    } else if (wtd == 4) {
        searchPeople();
    } else if (wtd == 5) {
        checkIfLeave();
    } else {
        cout << "Invalid choice" << endl;
    }
}

void addPeople() {
    cout << "=== What to add ===" << endl;
    cout << "1. Teacher" << endl;
    cout << "2. Student" << endl;
    cout << "3. Principal" << endl;
    cout << "===================" << endl;

    cout << "What would you like to add?: ";
    cin >> wtd_ap;

    handleChoiceWtd_ap();
}

void handleChoiceWtd_ap() {
    if (wtd_ap == 1) {
        addTeacher();
    } else if (wtd_ap == 2) {
        addStudent();
    } else if (wtd_ap == 3) {
        addPrincipal();
    } else {
        cout << "Invalid choice" << endl;
    }
}

void addTeacher() {
    checkIfFileMainExists();
    checkIfFileTeacherExists();

    cout << "\nWhat is the teacher's first name?: ";
    cin >> personFirstName;

    cout << "\nWhat is the teacher's last name?: ";
    cin >> personLastName;

    cout << "\nWhat is the teacher's age?: ";
    cin >> personAge;

    cout << "\nHow many years have they been working?: ";
    cin >> personYears;

    cout << "\nAdd an ID for familiarity: ";
    cin >> personId;

    string personFileName = personFirstName + "_" + personLastName + ".txt";
    string fullFilePath = TeacherFilePath + "/" + personFileName;
    PersonFile.open(fullFilePath);

    if (!PersonFile) {
        cerr << "\nError: Failed to create file: " << fullFilePath << endl;
    } else {
        PersonFile << "Teacher's first name: " << personFirstName << endl;
        PersonFile << "Teacher's last name: " << personLastName << endl;
        PersonFile << "Teacher's age: " << personAge << endl;
        PersonFile << "How many years they have been working: " << personYears << endl;
        PersonFile << "Teacher ID: " << personId << endl;
        PersonFile.close();
    }
}

void addStudent() {
    checkIfFileMainExists();
    checkIfFileStudentExists();

    cout << "\nWhat is the student's first name?: ";
    cin >> personFirstName;

    cout << "\nWhat is the student's last name?: ";
    cin >> personLastName;

    cout << "\nWhat is the student's age?: ";
    cin >> personAge;

    cout << "\nStudent birthYear (yyyy): ";
    cin >> studentBirthYear;

    cout << "\nStudent birthMonth (mm): ";
    cin >> studentBirthMonth;

    cout << "\nStudent birthday (dd): ";
    cin >> studentBirthday;

    cout << "\nWhat year are they in?: ";
    cin >> studentYear;

    cout << "\nAdd an ID for familiarity: ";
    cin >> personId;

    string personFileName = personFirstName + "_" + personLastName + ".txt";
    string fullFilePath = StudentFilePath + "/" + personFileName;
    PersonFile.open(fullFilePath);

    if (!PersonFile) {
        cerr << "\nError: Failed to create file: " << fullFilePath << endl;
    } else {
        PersonFile << "Student's first name: " << personFirstName << endl;
        PersonFile << "Student's last name: " << personLastName << endl;
        PersonFile << "Student's age: " << personAge << endl;
        PersonFile << "Student's year: " << studentYear << endl;
        PersonFile << "Student's Birthday: " << studentBirthYear << "/" << studentBirthMonth << "/" << studentBirthday << endl;
        PersonFile << "Student's ID: " << personId << endl;
        PersonFile.close();
    }
}

void addPrincipal() {
    checkIfFileMainExists();
    checkIfFilePrincipalExists();

    cout << "\nWhat is the Principal's first name?: ";
    cin >> personFirstName;

    cout << "\nWhat is the Principal's last name?: ";
    cin >> personLastName;

    cout << "\nWhat is the Principal's age?: ";
    cin >> personAge;

    cout << "\nHow many years have they been working?: ";
    cin >> personYears;

    cout << "\nAdd an ID for familiarity: ";
    cin >> personId;

    string personFileName = personFirstName + "_" + personLastName + ".txt";
    string fullFilePath = directoryPathPrincipals + "/" + personFileName;
    PersonFile.open(fullFilePath);

    if (!PersonFile) {
        cerr << "\nError: Failed to create file: " << fullFilePath << endl;
    } else {
        PersonFile << "Principal's first name: " << personFirstName << endl;
        PersonFile << "Principal's last name: " << personLastName << endl;
        PersonFile << "Principal's age: " << personAge << endl;
        PersonFile << "How many years they have been working: " << personYears << endl;
        PersonFile << "Principal ID: " << personId << endl;
        PersonFile.close();
    }
}

void checkIfFileMainExists() {
    if (!fs::exists(directoryPathMain)) {
        if (fs::create_directories(directoryPathMain)) {
            cout << "Directory created: " << directoryPathMain << endl << endl;
        } else {
            cerr << "Failed to create directory: " << directoryPathMain << endl << endl;
        }
    }
}

void checkIfFileTeacherExists() {
    if (!fs::exists(directoryPathTeachers)) {
        if (fs::create_directories(directoryPathTeachers)) {
            cout << "Directory created: " << directoryPathTeachers << endl << endl;
        } else {
            cerr << "Failed to create directory: " << directoryPathTeachers << endl << endl;
        }
    }
}

void checkIfFileStudentExists() {
    if (!fs::exists(directoryPathStudents)) {
        if (fs::create_directories(directoryPathStudents)) {
            cout << "Directory created: " << directoryPathStudents << endl << endl;
        } else {
            cerr << "Failed to create directory: " << directoryPathStudents << endl << endl;
        }
    }
}

void checkIfFilePrincipalExists() {
    if (!fs::exists(directoryPathPrincipals)) {
        if (fs::create_directories(directoryPathPrincipals)) {
            cout << "Directory created: " << directoryPathPrincipals << endl << endl;
        } else {
            cerr << "Failed to create directory: " << directoryPathPrincipals << endl << endl;
        }
    }
}

void removePeople() {
    cout << "\n======= Remove =======" << endl;
    cout << "1. Remove Teacher" << endl;
    cout << "2. Remove Student" << endl;
    cout << "3. Remove Principal" << endl;
    cout << "4. Exit" << endl;
    cout << "======================" << endl;
    cout << "What to do: ";
    cin >> wtd_rp;

    if (wtd_rp == 1) {
        removeTeacher();
    } else if (wtd_rp == 2) {
        removeStudent();
    } else if (wtd_rp == 3) {
        removePrincipal();
    } else if (wtd_rp == 4) {
        checkIfLeave();
    } else {
        cout << "Invalid choice" << endl;
    }
}

void removeTeacher() {
    cout << "Enter the first name of the teacher you want to remove: ";
    cin >> personFirstName;

    cout << "Enter the last name of the teacher you want to remove: ";
    cin >> personLastName;

    string filePath = directoryPathTeachers + "/" + personFirstName + "_" + personLastName + ".txt";
    if (fs::exists(filePath)) {
        fs::remove(filePath);
        cout << "Teacher removed: " << filePath << endl;
    } else {
        cerr << "Error: Teacher file not found" << endl;
    }
}

void removeStudent() {
    cout << "Enter the first name of the student you want to remove: ";
    cin >> personFirstName;

    cout << "Enter the last name of the student you want to remove: ";
    cin >> personLastName;

    string filePath = directoryPathStudents + "/" + personFirstName + "_" + personLastName + ".txt";
    if (fs::exists(filePath)) {
        fs::remove(filePath);
        cout << "Student removed: " << filePath << endl;
    } else {
        cerr << "Error: Student file not found" << endl;
    }
}

void removePrincipal() {
    cout << "Enter the first name of the principal you want to remove: ";
    cin >> personFirstName;

    cout << "Enter the last name of the principal you want to remove: ";
    cin >> personLastName;

    string filePath = directoryPathPrincipals + "/" + personFirstName + "_" + personLastName + ".txt";
    if (fs::exists(filePath)) {
        fs::remove(filePath);
        cout << "Principal removed: " << filePath << endl;
    } else {
        cerr << "Error: Principal file not found" << endl;
    }
}

void showPeople() {
    cout << "\n======= Show =======" << endl;
    cout << "1. Show Teacher" << endl;
    cout << "2. Show Student" << endl;
    cout << "3. Show Principal" << endl;
    cout << "4. Exit" << endl;
    cout << "====================" << endl;
    cout << "What to do: ";
    cin >> wtd_sfid;

    handleChoice_wtd_sfip();
}

void handleChoice_wtd_sfip() {
    if (wtd_sfid == 1) {
        showTeacher();
    } else if (wtd_sfid == 2) {
        showStudent();
    } else if (wtd_sfid == 3) {
        showPrincipal();
    } else if (wtd_sfid == 4) {
        checkIfLeave();
    } else {
        cout << "Invalid choice" << endl;
    }
}

void showTeacher() {
    for (const auto& entry : fs::directory_iterator(directoryPathTeachers)) {
        if (fs::is_regular_file(entry.path())) {
            cout << "Teacher: " << entry.path().filename().string() << endl;
        }
    }
}

void showStudent() {
    for (const auto& entry : fs::directory_iterator(directoryPathStudents)) {
        if (fs::is_regular_file(entry.path())) {
            cout << "Student: " << entry.path().filename().string() << endl;
        }
    }
}

void showPrincipal() {
    for (const auto& entry : fs::directory_iterator(directoryPathPrincipals)) {
        if (fs::is_regular_file(entry.path())) {
            cout << "Principal: " << entry.path().filename().string() << endl;
        }
    }
}

void searchPeople() {
    int searchType;
    cout << "\n======= Search People =======" << endl;
    cout << "1. Search Teacher" << endl;
    cout << "2. Search Student" << endl;
    cout << "3. Search Principal" << endl;
    cout << "=============================" << endl;
    cout << "What to do: ";
    cin >> searchType;

    string searchTerm;
    cout << "Enter search term: ";
    cin >> searchTerm;

    if (searchType == 1) {
        searchDirectory(directoryPathTeachers, searchTerm);
    } else if (searchType == 2) {
        searchDirectory(directoryPathStudents, searchTerm);
    } else if (searchType == 3) {
        searchDirectory(directoryPathPrincipals, searchTerm);
    } else {
        cout << "Invalid choice" << endl;
    }
}

void searchDirectory(const string& directoryPath, const string& searchTerm) {
    for (const auto& entry : fs::directory_iterator(directoryPath)) {
        if (fs::is_regular_file(entry.path())) {
            ifstream file(entry.path());
            if (file.is_open()) {
                string line;
                bool found = false;
                while (getline(file, line)) {
                    if (line.find(searchTerm) != string::npos) {
                        found = true;
                        break;
                    }
                }
                if (found) {
                    cout << "Found in file: " << entry.path().filename().string() << endl;
                }
                file.close();
            } else {
                cerr << "Error: Could not open file " << entry.path() << endl;
            }
        }
    }
}

void checkIfLeave() {
    cout << "\nWould you like to leave? (y/n): ";
    cin >> ifLeaveChar;
    if (ifLeaveChar == 'y' || ifLeaveChar == 'Y') {
        ifLeave = true;
    }
    else if(ifLeaveChar == 'n' || ifLeaveChar == 'N'){
        cout << "Exiting to main menu..";
        system("pause>0");
    }
}