//  https://www.hackerrank.com/challenges/classes-objects/problem?isFullScreen=true

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

// Write your Student class here

class Student{
    std::vector<int> studentScores;
public:
    void input();
    int calculateTotalScore();
};

void Student::input(){
    const int numberOfExams = 5;
    for (int i = 0; i < numberOfExams; i++){
        int score;
        std::cin >> score;
        studentScores.push_back(score);
    }
}

int Student::calculateTotalScore(){
    int sumOfScores = 0;
    const int numberOfExams = 5;
    for (int i = 0 ; i < numberOfExams ; i++)
        sumOfScores += studentScores[i];
    return sumOfScores;
}

int main() {
    int n; // number of students
    std::cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++)
        s[i].input();

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    std::cout << count;
    
    return 0;
}
