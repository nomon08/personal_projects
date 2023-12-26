#include <iostream>
#include <random>

int main() {
    
    std::cout << "welcome bhaijan, think of a number between 1 - 10\n";

    std::random_device rd;  // A hardware-based random number generator if available
    std::mt19937 gen(rd()); // Standard Mersenne Twister engine seeded with rd()

    // Define a range for the random numbers
    std::uniform_int_distribution<int> distribution(1, 10);

    // Generate a random number within the specified range
    int randomNumber = distribution(gen);

    int tries = 5;
    while (tries!= 0){
        tries--;

        int a ;
        std::cin>>a;

        if (a==randomNumber ){
            std::cout<<"congrats u won , u got the answer in: " << 5 - tries << " tries" << std::endl;
            return 0;
        }
        else {
            std::cout<<"wrong, go again, tries remaining: " << tries << std::endl;
            }

    }

    std::cout<<"looks like u failed , number was: " << randomNumber << std::endl;

    return 0;
}
