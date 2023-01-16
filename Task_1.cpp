#include <iostream>

#define DAY1 "Monday"
#define DAY2 "Tuesday"
#define DAY3 "Wednesday"
#define DAY4 "Thursday"
#define DAY5 "Friday"
#define DAY6 "Saturday"
#define DAY7 "Sunday"
#define NUM_DAY(num) (std::cout << DAY##num)
#define INV "Invalid code!"

int main() {
    int n;
    std::cout << "Enter the numeric value of the day of the week:";
    std::cin >> n;
    switch (n) {
        case 1: {
            NUM_DAY(1);
            break;
        }
        case 2: {
            NUM_DAY(2);
            break;
        }
        case 3: {
            NUM_DAY(3);
            break;
        }
        case 4: {
            NUM_DAY(4);
            break;
        }
        case 5: {
            NUM_DAY(5);
            break;
        }
        case 6: {
            NUM_DAY(6);
            break;
        }
        case 7: {
            NUM_DAY(7);
            break;
        }
        default : {
            std::cout << INV;
            break;
        }
    }
    return 0;
}
