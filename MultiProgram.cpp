#include <iostream>
#include <map>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int calculator();
void weight_converter();
void height_converter();
void volts_to_amps();
void currency_converter();
void rock_paper_scissors();
void age_program();
void wait_for_exit();

int main() {
    string program;

    cout << "What Program Would you like to open? (calculator, weight_converter, height_converter, volts_to_amps, currency_converter, rock_paper_scissors, age_program): ";
    cin >> program;

    if (program == "calculator") {
        calculator();
    }
    else if (program == "weight_converter") {
        weight_converter();
    }
    else if (program == "height_converter"){
        height_converter();
    }
    else if (program == "volts_to_amps"){
        volts_to_amps();
    }
    else if (program == "currency_converter"){
        currency_converter();
    }
    else if (program == "rock_paper_scissors"){
        rock_paper_scissors();
    }
    else if (program == "age_program"){
        age_program();
    }
    else {
        cout << "Invalid program name entered." << endl;
    }
    wait_for_exit();

    return 0;
}

void wait_for_exit() {
    string exit_prompt;
    cout << "\nPress any key and hit enter to exit the program...";
    cin >> exit_prompt;
}

int calculator() {
    char sign;
    double num1, num2;

    cout << "********** Calculator **********\n";
    cout << "What sign to use? (+, -, *, /): ";
    cin >> sign;

    cout << "Num1: ";
    cin >> num1;

    cout << "Num2: ";
    cin >> num2;

    switch (sign) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero." << endl;
            }
            break;
        default:
            cout << "Invalid sign." << endl;
            break;
    }
    wait_for_exit();
    return 0;
}

void weight_converter() {
    char type;
    double ntc;

    cout << "********** Weight Converter **********\n";
    cout << "What type of weight to use? k (kgs) or l (lbs): ";
    cin >> type;

    if (type == 'k') {
        cout << "How many kgs to convert to lbs?: ";
        cin >> ntc;
        cout << ntc << " kg = " << ntc * 2.205 << " lbs" << endl;
    }
    else if (type == 'l') {
        cout << "How many lbs to convert to kgs?: ";
        cin >> ntc;
        cout << ntc << " lbs = " << ntc / 2.205 << " kg" << endl;
    }
    else {
        cout << "Invalid type." << endl;
    }
    wait_for_exit();
}

void height_converter(){
    char type;
    double ntc;

    cout << "********** Height Converter **********\n";
    cout << "What type of height to use? m (meter) or f (feet): ";
    cin >> type;

    if (type == 'm'){
        cout << "How many meters to convert to feet?: ";
        cin >> ntc;
        cout << ntc << " m = " << ntc * 3.281 << " feet" << endl;
    }
    else if(type == 'f'){
        cout << "How many feet to convert to meters?: ";
        cin >> ntc;
        cout << ntc << " feet = " << ntc / 3.281 << " m" << endl;
    }
    else{
        cout << "Invalid type." << endl;
    }
    wait_for_exit();
}

void volts_to_amps(){
    char wtc;
    int volt;
    int amps;
    int resis;

    cout << "********** Volts to Amps **********\n";
    cout << "What would you like to convert? v (volts) or a (amps): ";
    cin >> wtc;

    if (wtc == 'v'){
        cout << "How many volts to convert? (v): ";
        cin >> volt;

        cout << "How much resistance? (r): ";
        cin >> resis;

        cout << volt << "v = " << volt / resis << " amps" << endl;
    }
    else if(wtc == 'a'){
        cout << "How many amps to convert? (a): ";
        cin >> amps;

        cout << "How much resistance? (r): ";
        cin >> resis;

        cout << amps << "a = " << amps * resis << " volts" << endl;
    }
    else {
        cout << "Invalid type." << endl;
    }
    wait_for_exit();
}

void currency_converter(){
    cout << "********** Money Converter **********";
    std::map<std::string, double> exchange_rates = {
        {"USD", 1.0},
        {"EUR", 0.85},
        {"GBP", 0.75},
        {"JPY", 110.0},
        {"CAD", 1.25},
        {"AUD", 1.35},
        {"CHF", 0.92},
        {"CNY", 6.45},
        {"MAD", 9.7},
    };

    std::string fromCurrency, toCurrency;
    double amount;

    std::cout << "Available currencies: USD, EUR, GBP, JPY, CAD, AUD, CHF, CNY, MAD" << std::endl;

    std::cout << "Enter the currency you want to convert from: ";
    std::cin >> fromCurrency;

    std::cout << "Enter the currency you want to convert to: ";
    std::cin >> toCurrency;

    std::cout << "Enter the amount you want to convert: ";
    std::cin >> amount;

    if (exchange_rates.find(fromCurrency) == exchange_rates.end() || exchange_rates.find(toCurrency) == exchange_rates.end()) {
        std::cout << "Invalid currency code entered." << std::endl;
        wait_for_exit();
        return;
    }

    double convertedAmount = amount * (exchange_rates[toCurrency] / exchange_rates[fromCurrency]);
    std::cout << amount << " " << fromCurrency << " is equal to " << convertedAmount << " " << toCurrency << std::endl;
    wait_for_exit();
}

void rock_paper_scissors(){
    cout << "********** rock paper scissors **********";
    srand(static_cast<unsigned int>(time(0)));

    string choices[] = {"rock", "paper", "scissors"};

    string pc;
    cout << "Enter rock, paper or scissors: ";
    cin >> pc;

    int randIndex = rand() % 3;
    string cc = choices[randIndex];
    cout << "Computer chose: " << cc << endl;

    if (pc == cc) {
        cout << "It's a tie!" << endl;
    }
    else if((pc == "rock" && cc == "scissors") ||
            (pc == "paper" && cc == "rock") ||
            (pc == "scissors" && cc == "paper")){
        cout << "You win!" << endl;
    }
    else if((pc == "scissors" && cc == "rock") ||
            (pc == "rock" && cc == "paper") ||
            (pc == "paper" && cc == "scissors")){
        cout << "You lose!" << endl;
    }
    else{
        cout << "Please enter either rock, paper or scissors." << endl;
    }
    wait_for_exit();
}

void age_program(){
    int born_year;
    int current_year;

    cout << "********** Age Calculator **********\n";
    cout << "What year were you born in?: ";
    cin >> born_year;

    cout << "What year is it?: ";
    cin >> current_year;

    cout << "You are " << current_year - born_year << " years old!" << endl;
    wait_for_exit();
}