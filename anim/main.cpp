#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "ascii.cpp"
/* Animation test using the terminal and C++ */
/* Programmed by Joshua D. aka ItsT3K        */

    using namespace std;
	using namespace std::this_thread;
	using namespace std::chrono_literals;
	using std::chrono::system_clock;
    
    int main()
        {
            system("clear");
            printf("%s\n", frame1);	// Print the Frame from ascii.cpp 
			sleep_for(100ms);		// Sleep for 100ms. With this and the animation
									// being 18 frames this entire animation is 1.8s
            system("clear");
            printf("%s\n", frame2);
			sleep_for(100ms);
            system("clear");
            printf("%s\n", frame3);
			sleep_for(100ms);
            system("clear");
            printf("%s\n", frame4);
			sleep_for(100ms);
            system("clear");
            printf("%s\n", frame5);
			sleep_for(100ms);
            system("clear");
            printf("%s\n", frame6);
			sleep_for(100ms);
            system("clear");
            printf("%s\n", frame7);
			sleep_for(100ms);
            system("clear");
            printf("%s\n", frame8);
			sleep_for(100ms);
            system("clear");
            printf("%s\n", frame9);
			sleep_for(100ms);
            system("clear");
            printf("%s\n", frame10);
			sleep_for(100ms);
            system("clear");
            printf("%s\n", frame11);
			sleep_for(100ms);
            system("clear");
            printf("%s\n", frame12);
			sleep_for(100ms);
            system("clear");
            printf("%s\n", frame13);
			sleep_for(100ms);
            system("clear");
            printf("%s\n", frame14);
			sleep_for(100ms);
            system("clear");
            printf("%s\n", frame15);
			sleep_for(100ms);
            system("clear");
            printf("%s\n", frame16);
			sleep_for(100ms);
            system("clear");
            printf("%s\n", frame17);
			sleep_for(100ms);
            system("clear");
            printf("%s\n", frame18);
			sleep_for(100ms);
			system("clear");
			printf("A little animation test in C++\nProgrammed by Joshua D. (ItsT3K) in C++ using \nascii art\nthread\niostream\nand so on\n");
			printf("Feel free to modify this code as your please.\nYou can find me at https://itst3k.com\n");
			return 0;

        }
