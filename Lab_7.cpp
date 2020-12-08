#include <iostream>
#include <ctime>
using namespace std;

void queue(int*, int, int);
void time_in_queue(int*, int);
void min_time_number(int*, int);


int main()
{
    int p;
    int t;
    cout << "Enter a number of people in queue: "; 
    cin >> p;
    cout << "Enter the maximum time per person: "; 
    cin >> t;
    int *arr = new int[p];
    queue(arr, p, t);
    time_in_queue(arr, p);
    min_time_number(arr, p);

}

void queue(int* a, int p, int t) {

    srand((time(0)));
    for (int i = 0; i < p; ++i)
    {
        a[i] = 1 + rand() % t;
        cout << a[i] << " ";
    }

}

void time_in_queue(int* p, int size) {
    int time = 0;
    for (int i = 0; i < size; i++)
    {
        time += p[i];
        cout << endl << "Time in queue for person: " << i + 1 << " is " << time;
    }


}

void min_time_number(int* p, int size) {
    int index = 0;
    int min = p[0];
    for (int i = 1; i < size; i++) {

        if (p[i] < min) {
            min = p[i];
            index = i;
        }
    }
    cout << endl << "Number of the customer of minimum time: " << index + 1;
}