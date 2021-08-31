#include <iostream>

using namespace std;

int main() 
{
    int room_width = {0};
    
    cout << "Please Enter Room Width: ";
    cin >> room_width;

    int room_height = {0};

    cout << "Please Enter Room Height: ";
    cin >> room_height;

    int room_area = room_width * room_height;

    cout << "Calculated Room Height: " << room_area << endl;

}