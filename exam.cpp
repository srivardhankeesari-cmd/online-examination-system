#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
using namespace std;

class Question {
public:
    string question;
    string optionA, optionB, optionC, optionD;
    char correctOption;

    void display() {
        cout << question << endl;
        cout << "A. " << optionA << endl;
        cout << "B. " << optionB << endl;
        cout << "C. " << optionC << endl;
        cout << "D. " << optionD << endl;
    }
};

class ExamSystem {
private:
    vector<Question> questions;

public:
    void loadQuestions(const string &filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cout << "Error: Could not open questions file." << endl;
            return;
        }

        while (!file.eof()) {
            Question q;
            getline(file, q.question);
            getline(file, q.optionA);
            getline(file, q.optionB);
            getline(file, q.optionC);
            getline(file, q.optionD);
            file >> q.correctOption;
            file.ignore();

            if (!q.question.empty())
                questions.push_back(q);
        }

        file.close();
    }

    void startExam(const string &studentName) {
        if (questions.empty()) {
            cout << "No questions loaded." << endl;
            return;
        }

        srand(time(0));
        random_shuffle(questions.begin(), questions.end());

        int score = 0;
        char ans;

        cout << "\n--- Online Examination Started ---\n";
        for (int i = 0; i < 5 && i < questions.size(); i++) {
            cout << "\nQ" << i + 1 << ": ";
            questions[i].display();
            cout << "Your answer: ";
            cin >> ans;

            if (toupper(ans) == questions[i].correctOption)
                score++;
        }

        cout << "\nExam Finished. Your Score: " << score << "/5\n";
        saveResult(studentName, score);
    }

    void saveResult(const string &studentName, int score) {
        ofstream file("results.txt", ios::app);
        if (!file.is_open()) {
            cout << "Error opening results file." << endl;
            return;
        }

        file << studentName << " - Score: " << score << "/5\n";
        file.close();
    }
};

int main() {
    ExamSystem exam;
    exam.loadQuestions("questions.txt");

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    exam.startExam(name);

    return 0;
}
