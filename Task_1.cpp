#include <iostream>
#define MON "Monday"
#define TUE "Tuesday"
#define WED "Wednesday"
#define THU "Thursday"
#define FRI "Friday"
#define SAT "Saturday"
#define SUN "Sunday"

int main() {
    int n;
    std::cout << "Enter the numeric value of the day of the week:";
    std::cin >> n;
    switch (n) {
        case 1: {
            std::cout << MON << std::endl;
            break;
        }
        case 2: {
            std::cout << TUE << std::endl;
            break;
        }
        case 3: {
            std::cout << WED << std::endl;
            break;
        }
        case 4: {
            std::cout << THU << std::endl;
            break;
        }
        case 5: {
            std::cout << FRI << std::endl;
            break;
        }
        case 6: {
            std::cout << SAT << std::endl;
            break;
        }
        case 7: {
            std::cout << SUN << std::endl;
            break;
        }
        default : {
            std::cout << "Invalid code!";
            break;
        }
    }
    return 0;
}
