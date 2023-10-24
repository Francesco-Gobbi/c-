#include <iostream>
#include <string>

using namespace std;

int main( )
{
    float start, end, step;
    cout << "Enter start Celsius value: ";
    cin >> start;
    while (!(start >=0 && start <= 10)){
        cout << "Enter start Celsius value between 0 and 10: ";
        cin >> start;
    };
    cout << "Enter end Celsius value: ";
    cin >> end;
    while (!(end >10 && end <= 50000)){
        cout << "Enter end Celsius value between 11 and 50000: ";
        cin >> end;
    };
    cout << "Enter step: ";
    cin >> step;
    while (!(step > 0 && step <= 10)){
        cout << "Enter step between 0 and 10: ";
        cin >> step;
    };

    cout << "Celsius \t Fahrenheit\n";
    cout << "------- \t ----------\n"; 
    for(int i = start; i<=end; i++){
        if (i % 4 == 0){
            cout << to_string(start) + "\t" + to_string((start * 9 / 5 + 32)) + "\n";
            start= start + step;
        }
    }


    return 0;

}
