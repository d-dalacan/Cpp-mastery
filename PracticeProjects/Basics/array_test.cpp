#include <iostream>
using namespace std;


int mini(int numbers[], int size);
double average(int numbers[], int size);
void reverse(int numbers[], int size);
int aboveAverageCount (int numbers[], int size);
int getMax(int numbers[], int size);

int main () {

    int num [10];

    cout<< "Enter a list of 10 numbers "<<endl;
    
    for (int i = 0; i < 10; i++) {
        cin>> num[i];
    }

    cout<< "The minimum number is: " << mini(num, 10) << endl;
    cout<< "The average is: " << average(num, 10) << endl;
    cout<< "The numbers in reverse order are: ";
    reverse(num, 10); cout<< endl;
    cout<< "The maximum number is: " << getMax(num, 10) << endl;
    cout<< endl;
    cout<< "The number of values above the average is: " << aboveAverageCount(num, 10) << endl;


}




int mini(int numbers[], int size) {
    
    int min = numbers[0];

    for (int i = 0; i < size; i++) {
        if (numbers[i] < min){
            min  = numbers[i];
        }
    }
    return min;
}

double average(int numbers[], int size) {
    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    return sum / size;
}

void reverse(int numbers[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        cout<< numbers[i] << " ";
    }
}

int aboveAverageCount (int numbers[], int size) {
    int avg = average(numbers, size);
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (numbers[i] > avg) {
            count++;
        }
    }
    return count;
}

int getMax(int numbers[], int size) {
    int max = numbers[0];
    for (int i = 0; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}