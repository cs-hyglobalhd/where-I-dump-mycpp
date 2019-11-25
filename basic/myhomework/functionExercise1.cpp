#include<iostream>
#include<iomanip>

/* Prototype function */
// int average(int, int, int);
// float gradePoint(int);

/* Function definition */
int average(int score1, int score2, int score3) {
	return (score1 + score2 + score3) / 3;
}

float gradePoint(int average) {
	if(average >= 81 && average <= 100) return 4.00;
	if(average >= 71 && average <= 80) return 3.00;
	if(average >= 51 && average <= 70) return 2.00;
	if(average >= 31 && average <= 50) return 1.00;
	if(average >= 0 && average <= 30) return 0.00;
}

int main() {
	int score1, score2, score3;
	for(int i = 1; i <= 10; i++) {
		std::cout << "\nPlease enter student no." << i << "'s first score: ";
		std::cin >> score1;
		std::cout << "Please enter student no." << i << "'s second score: ";
		std::cin >> score2;
		std::cout << "Please enter student no." << i << "'s third score: ";
		std::cin >> score3;
		std::cout << "The average score for student no." << i << " is " << average(score1, score2, score3) << std::endl; // function call
		std::cout << "The grade point for student no." << i << " is " << std::setiosflags(std::ios::fixed) << std::setprecision(2) << gradePoint(average(score1, score2, score3)) << std::endl; // function call
	}
	return 0;
}
