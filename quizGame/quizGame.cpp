// quizGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector> 
#include <random>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <tuple>
#include <string>
using namespace std; 
 
vector<string> findActiveQuestion(tuple<vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>> _questions, int number)
{
    switch(number)
    {
    case 0:
        return get<0>(_questions);
        break; 
    case 1:
        return get<1>(_questions);
        break;
    case 2:
        return get<2>(_questions);
        break;
    case 3:
        return get<3>(_questions);
        break;
    case 4:
        return get<4>(_questions);
        break;
    case 5:
        return get<5>(_questions);
        break;
    case 6:
        return get<6>(_questions);
        break;
    case 7:
        return get<8>(_questions);
        break;
    case 8:
        return get<8>(_questions);
        break;
    case 9:
        return get<9>(_questions);
        break;
    }
}

bool mark(char _answer, int _num)
{
    int answerNum; 
    switch (_answer)
    {
    case 'A':
            answerNum = 1;
            break; 
    case 'B':
        answerNum = 2;
        break;
    case 'C':
        answerNum = 3;
        break;
    case 'D':
        answerNum = 4;
        break;
    }
    if (answerNum == _num)
    {
        return true;
    }
    else {
        return false; 
    }
}

int quiz(tuple<vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>> _questions)
{
	string name;
	cout << "What is your name? ";
	cin >> name;

	int amountOfQuestionsLeft = 10; //Change this to how many Questions above
	int score = 0;
	while (amountOfQuestionsLeft > 0)
	{
		srand(time(NULL)); //set a random seed
		int randomQuestionNumber = rand() % amountOfQuestionsLeft; //range from 0 to amountOfQuestionsleft - 1
		vector<string> activeQuestion;
		activeQuestion = findActiveQuestion(_questions, randomQuestionNumber);
		cout << endl << activeQuestion[0];
		srand(time(NULL));
		char correctAnswerPos;
		int randomMemory[4] = {};
		int randAnswer = rand() % 4 + 1;
		randomMemory[0] = randAnswer;
		if (randAnswer == 1)
		{
			correctAnswerPos = 'A';
		}
		cout << endl << "[A] " << activeQuestion[randAnswer];

		srand(time(NULL));
		randAnswer = rand() % 4 + 1;
		do
		{
			if (randAnswer == randomMemory[0])
			{
				srand(time(NULL));
				randAnswer = rand() % 4 + 1;
			}
		} while (randAnswer == randomMemory[0]);
		randomMemory[1] = randAnswer;
		if (randAnswer == 1)
		{
			correctAnswerPos = 'B';
		}
		cout << endl << "[B] " << activeQuestion[randAnswer];


		srand(time(NULL));
		randAnswer = rand() % 4 + 1;
		do
		{
			if (randAnswer == randomMemory[0] || randAnswer == randomMemory[1])
			{
				srand(time(NULL));
				randAnswer = rand() % 4 + 1;
			}
		} while (randAnswer == randomMemory[0] || randAnswer == randomMemory[1]);
		randomMemory[2] = randAnswer;
		if (randAnswer == 1)
		{
			correctAnswerPos = 'C';
		}
		cout << endl << "[C] " << activeQuestion[randAnswer];

		int lastQuestion = 10 - randomMemory[0] - randomMemory[1] - randomMemory[2];
		if (lastQuestion == 1)
		{
			correctAnswerPos = 'D';
		}
		cout << endl << "[D] " << activeQuestion[lastQuestion] << endl;
		amountOfQuestionsLeft = amountOfQuestionsLeft - 1;

		char answer;
		cin >> answer;

		if (correctAnswerPos == answer)
		{
			cout << endl << "CORRECT" << endl;
			score = score + 1;
		}
		else
		{

			cout << endl << "INCORRECT\nCorrect Answer was: [" << correctAnswerPos << "] " << activeQuestion[1] << endl;
		}
	}
	cout << endl << "Congrats " << name << "your final Score was: " << score;
	return score; 

}

int main()
{
    /*QUESTION FORMAT
    [0] The question
    [1] The Correct Answer 
    [2] Incorrect Answer
    [3] Incorrect Answer
    [4] Incorrect Answer 

    */
    //These are the questions
    vector<string> q1; 
    q1.push_back("Is the question answer B? ");
    q1.push_back("The Correct Answer is B.");
    q1.push_back("The Correct Answer is A.");
    q1.push_back("The Correct Answer is C.");
    q1.push_back("The Correct Answer is D.");
    vector<string> q2;
    q2.push_back("Is the question answer A? ");
    q2.push_back("The Correct Answer is A.");
    q2.push_back("The Correct Answer is B.");
    q2.push_back("The Correct Answer is C.");
    q2.push_back("The Correct Answer is D.");
    vector<string> q3;
    q3.push_back("Is the question answer C? ");
    q3.push_back("The Correct Answer is C.");
    q3.push_back("The Correct Answer is A.");
    q3.push_back("The Correct Answer is B.");
    q3.push_back("The Correct Answer is D.");
    vector<string> q4;
    q4.push_back("Is the question answer D? ");
    q4.push_back("The Correct Answer is D.");
    q4.push_back("The Correct Answer is A.");
    q4.push_back("The Correct Answer is C.");
    q4.push_back("The Correct Answer is B.");
    vector<string> q5;
    q5.push_back("Is the question answer D? ");
    q5.push_back("The Correct Answer is D.");
    q5.push_back("The Correct Answer is A.");
    q5.push_back("The Correct Answer is C.");
    q5.push_back("The Correct Answer is B.");
    vector<string> q6;
    q6.push_back("Is the question answer D? ");
    q6.push_back("The Correct Answer is D.");
    q6.push_back("The Correct Answer is A.");
    q6.push_back("The Correct Answer is C.");
    q6.push_back("The Correct Answer is B.");
    vector<string> q7;
    q7.push_back("Is the question answer D? ");
    q7.push_back("The Correct Answer is D.");
    q7.push_back("The Correct Answer is A.");
    q7.push_back("The Correct Answer is C.");
    q7.push_back("The Correct Answer is B.");
    vector<string> q8;
    q8.push_back("Is the question answer D? ");
    q8.push_back("The Correct Answer is D.");
    q8.push_back("The Correct Answer is A.");
    q8.push_back("The Correct Answer is C.");
    q8.push_back("The Correct Answer is B.");
    vector<string> q9;
    q9.push_back("Is the question answer D? ");
    q9.push_back("The Correct Answer is D.");
    q9.push_back("The Correct Answer is A.");
    q9.push_back("The Correct Answer is C.");
    q9.push_back("The Correct Answer is B.");
    vector<string> q10;
    q10.push_back("Is the question answer D? ");
    q10.push_back("The Correct Answer is D.");
    q10.push_back("The Correct Answer is A.");
    q10.push_back("The Correct Answer is C.");
    q10.push_back("The Correct Answer is B.");
    tuple<vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>> questions(q1, q2, q3, q4, q5, q6, q7, q8, q9, q10);
    

	quiz(questions); 

	


    
}
