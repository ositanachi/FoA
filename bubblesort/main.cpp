#include <iostream>
#include <vector>
//#include <array>
using namespace std;

//void bubbleSort(int array[], int size); //Prototype

template<typename Type>
void printVector(vector<Type> arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr.at(i) << " ";
    }
}

template<typename T>
void bubbleSort(vector<T> arr, int size) {
    T temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 1; j < size - i; j++) {
            if (arr.at(j) < arr.at(j-1)) {
                temp = arr.at(j);
                arr.at(j) = arr.at(j - 1);
                arr.at(j - 1) = temp;
            }
        }
    }
    cout << "The ordered list is: [ ";
    printVector(arr, size);
    cout << "]";
    cout << endl;
}

/*template<typename S>
int getSize(S){
    cout << endl << "Size of sizeof: " << sizeof(arr) << endl;
    cout << endl << "Size of sizeof: " << sizeof(arr[0]) << endl;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "size: " << size << endl;
    return size;
}*/

int main() {
    /*For integers
    //vector<int> num = {4, 5, 2, 1, 8};
    bubbleSort<int>(num, num.size());*/

    /*For strings:
    vector<string> arr = {"Bob", "David", "Alice", "Carol"};
    bubbleSort(arr, arr.size());*/
    char option = 'Y';
    int counter = 0;
    string name;
    vector<string>arr;
    do{
        cout << "Please input a name: ";
        cin >> name;
        arr.push_back(name);
        counter++;
        cout << "Would you like to enter more names? (Y/N) ";
        cin >> option;
        cout << endl;
    } while (option == 'Y');
    bubbleSort(arr, arr.size());

    return 0;
}


