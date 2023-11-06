#include <iostream>
using namespace std;
void Function(int cols, int rows, int** AR, int** A) {
    for (int i = 0; i < cols; i++) {
        AR[i] = new int[rows];
    }
    for (int i = 0; i < rows; i++) {
        A[i] = new int[cols];
    }
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cin >> AR[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; i++) {
            cout << AR[i][j];
        }

    }
    cout << endl;
    
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            A[j][i] = AR[j][i];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << A[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < cols; i++) {
        delete AR[i];
    }
    for (int i = 0; i < rows; i++) {
        delete A[i];
    }
}

int main()
{
    int cols, rows;
    cout << "Cols: " << endl;
    cin >> cols;
    cout << "Rows: " << endl;
    cin >> rows;
    int** AR = new int* [cols];
    int** A = new int* [rows];

    Function(cols, rows, AR, A);

    int rows = 3;
    int cols = 3;
    string** arr = new string * [cols];

    for (int i = 0; i < cols; i++) {
        arr[i] = new string[rows];
    }
    string Max = "Max";
    string Alex = "Alex";
    string numberofMax = "856749";
    string numberofAlex = "564654";
    arr[0][0] = Max;
    arr[0][1] = Alex;
    arr[1][0] = numberofMax;
    arr[1][1] = numberofAlex;




    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    int answer = 0;
    do {
        cout << "What do you want?: " << endl;
        cout << "1) search using name : " << endl;
        cout << "2) search using phone  number : " << endl;
        cout << "3) Change data :" << endl;
        cout << "4) Enter your own data" << endl;
        cout << "0) Exit " << endl;
        cin >> answer;


        switch (answer) {
        case 1: {
            string name;
            cout << "Enter The name who u want to find:" << endl;
            cin >> name;
            if (name == "Max" || name == "max") {

                cout << "Max's phone: " << " " << arr[1][0] << endl;



            }

            if (name == "Alex" || name == "alex") {
                cout << "Alex's phone: " << " " << arr[1][1] << endl;
            }

            if (name != "Max" && name != "max" && name != "Alex" && name != "alex") {
                cout << "Sorry, i don't know this name :( " << endl;
            }
        }
              break;
        case 2: {
            string number;
            cout << "I need the phone number, write it!: " << endl;
            cin >> number;
            if (number == arr[1][0]) {
                cout << "I Found him! It's: " << " " << arr[0][0] << endl;
            }
            if (number == arr[1][1]) {
                cout << "I found him! It's:" << " " << arr[0][1] << endl;
            }
            else {
                cout << "Im sorry, but considering your answer i don't have any information about this person :(" << endl;
            }
        }break;
        case 3: {
            string name;
            string namechange;
            string number;
            cout << "If you want change some data, please write the name who you want to change: " << endl;
            cin >> name;
            if (name == "Max" || name == "max" || name == "Alex" || name == "alex") {
                cout << "Good, write bellow , the phone and name which u want to change: " << endl;
                cin >> number;
                cout << endl;

                cin >> namechange;
                arr[0][0] = namechange;
                arr[1][0] = number;
                cout << "That's updated data: " << " " << arr[0][0] << " " << arr[1][0] << endl;

            }
        }
              break;
        case 4: {
            string phone;
            string name;
            cout << "You want to create your own list, write bellow name and phone:" << endl;
            cout << "Your name? " << endl;
            cin >> name;
            cout << "Your phone?" << endl;
            cin >> phone;
            arr[2][1] = name;
            arr[2][2] = phone;
            cout << "There is inforamation about you: " << " " << arr[2][1] << " " << arr[2][2] << endl;



        }
              break;
        case 0: {
            cout << "Good by!" << endl;
        }
              break;
        default: {
            cout << "Sorry i don't know this comand, try again! " << endl;
        }
        }


    } while (answer != 0);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            delete arr[j];
        }
        delete[] arr[i];
    }
    delete[] arr;

}
