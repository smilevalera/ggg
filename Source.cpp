#include <iostream>//гилёв валера п43021
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
    const int n = 10;
    int arr[n];
    int temp;
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 101 - 50;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    
    return 0;
}