// quizGame.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector> 
#include <random>
#include <stdio.h>
#include <cstdlib>
#include <time.h>
#include <tuple>
#include <string>
#include <fstream>
#include <iterator>
#include <ctime>
#include <list>

using namespace std; 
 
bool validateName(string _string)
{
	bool valid = true;
	for (auto i = _string.begin(); i != _string.end() && valid; i++)
	{
		valid = false; 
		switch (*i)
		{
		case 'a': valid = true; break; 
		case 'b': valid = true; break;
		case 'c': valid = true; break;
		case 'd': valid = true; break;
		case 'e': valid = true; break;
		case 'f': valid = true; break;
		case 'g': valid = true; break;
		case 'h': valid = true; break;
		case 'i': valid = true; break;
		case 'j': valid = true; break;
		case 'k': valid = true; break;
		case 'l': valid = true; break;
		case 'm': valid = true; break;
		case 'n': valid = true; break;
		case 'o': valid = true; break;
		case 'p': valid = true; break;
		case 'q': valid = true; break;
		case 'r': valid = true; break;
		case 's': valid = true; break;
		case 't': valid = true; break;
		case 'u': valid = true; break;
		case 'v': valid = true; break;
		case 'w': valid = true; break;
		case 'x': valid = true; break;
		case 'y': valid = true; break;
		case 'z': valid = true; break;
		case 'A': valid = true; break;
		case 'B': valid = true; break;
		case 'C': valid = true; break;
		case 'D': valid = true; break;
		case 'E': valid = true; break;
		case 'F': valid = true; break;
		case 'G': valid = true; break;
		case 'H': valid = true; break;
		case 'I': valid = true; break;
		case 'J': valid = true; break;
		case 'K': valid = true; break;
		case 'L': valid = true; break;
		case 'M': valid = true; break;
		case 'N': valid = true; break;
		case 'O': valid = true; break;
		case 'P': valid = true; break;
		case 'Q': valid = true; break;
		case 'R': valid = true; break;
		case 'S': valid = true; break;
		case 'T': valid = true; break;
		case 'U': valid = true; break;
		case 'V': valid = true; break;
		case 'W': valid = true; break;
		case 'X': valid = true; break;
		case 'Y': valid = true; break;
		case 'Z': valid = true; break;
		case '0': valid = true; break;
		case '1': valid = true; break;
		case '2': valid = true; break;
		case '3': valid = true; break;
		case '4': valid = true; break;
		case '5': valid = true; break;
		case '6': valid = true; break;
		case '7': valid = true; break;
		case '8': valid = true; break;
		case '9': valid = true; break;
		case ' ': valid = true; break;
		default : valid = false; break;
			
		}
	}
	if (valid == false)
	{
		cout << "\nIllegal Character Detected. Please Try Again.\n";
	}

	return valid;
}

bool validateAnswer(char _char)
{
	bool valid = false; 
		switch (_char)
		{
		case 'A': valid = true; break;
		case 'B': valid = true; break;
		case 'C': valid = true; break;
		case 'D': valid = true; break;
		default: valid = false; break;

		}
		if (valid == false)
		{
			cout << "\nIllegal Character Detected. Please Try Again.\n";
		}
		return valid;
}

bool validateSelection(char _char)
{
		bool valid = false;
		switch (_char)
		{
		case '1': valid = true; break;
		case '2': valid = true; break;
		case '3': valid = true; break;
		default: valid = false; break;
		}
		if (valid == false)
		{
			cout << "\nIllegal Character Detected. Please Try Again.\n";
		}
		return valid;
}

int line_int(string _string) //Finds all the numbers in a string and converts it to a double 
{
	int it = 0;
	string intFromString = "";
	while (it != _string.size())//this should've been written with a isDigit type loop like stringToOnlyDigits() smh
	{
		switch (_string[it]) {
		case '0':
			intFromString += _string[it];
			break;
		case '1':
			intFromString += _string[it];
			break;
		case '2':
			intFromString += _string[it];
			break;
		case '3':
			intFromString += _string[it];
			break;
		case '4':
			intFromString += _string[it];
			break;
		case '5':
			intFromString += _string[it];
			break;
		case '6':
			intFromString += _string[it];
			break;
		case '7':
			intFromString += _string[it];
			break;
		case '8':
			intFromString += _string[it];
			break;
		case '9':
			intFromString += _string[it];
			break;
		default: break;
		}
		it++;
	}

	// cout << "\nString " << _string << " DoubleString " << intFromString << endl; 
	return stoi(intFromString);
}



vector<string> findActiveQuestion(tuple<vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>> _questions, int number)
{
	cout << "INVALID findActiveQuestion()";
	return get<0>(_questions);
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


vector<int> suckTime(vector<string> _vector)
{
	vector<int> result;
	for (int i = 0; i < _vector.size(); i++)
	{
		string extractedString;
		char _char;
		size_t startOfTime = _vector[i].find('$') + 1; //start of time
		for (auto b = startOfTime; _vector[i][b] != '%'; b++)
		{
			extractedString.push_back(_vector[i][b]);
		}

		result.push_back(stoi(extractedString));
	}
	return result;
}

vector<string> suckPercentage(vector<string> _vector)
{
	vector<string> result;
	for (int i = 0; i < _vector.size(); i++)
	{
		string extractedString;
		char _char;
		size_t startOfTime = _vector[i].find('%') + 1; //start of time
		for (auto b = startOfTime; _vector[i][b] != '!'; b++)
		{
			extractedString.push_back(_vector[i][b]);
		}

		result.push_back(extractedString);
	}
	return result;
}

vector<string> suckUser(vector<string> _vector)
{
	vector<string> result;
	for (int i = 0; i < _vector.size(); i++)
	{
		string extractedString;
		char _char;
		for (int b = 0; b < _vector[i].size() && _vector[i][b] != '$'; b++)
		{
			extractedString.push_back(_vector[i][b]);
		}
		result.push_back(extractedString);
	}
	return result;
}


list<int> vtol(vector<int> _vector)
{
	list<int> newList;
	for (int i = 0; i < _vector.size(); i++)
	{
		newList.push_back(_vector[i]);
	}
	return newList;
}

list<string> vtol(vector<string> _vector)
{
	list<string> newList;
	for (int i = 0; i < _vector.size(); i++)
	{
		newList.push_back(_vector[i]);
	}
	return newList;
}



void printL(list<int> _list)
{
	cout << endl;
	for (auto i = _list.begin(); i != _list.end(); i++)
	{
		cout << " " << *i << " ";
	}
	cout << endl;
}
void printL(list<string> _list)
{
	cout << endl;
	for (auto i = _list.begin(); i != _list.end(); i++)
	{
		cout << " " << *i << " ";
	}
	cout << endl;
}

bool isIn(list<int> _list, int _int)
{
	bool flag = false; 
	for (auto it = _list.begin(); it != _list.end() && flag == false; it++)
	{
		if (*it == _int)
		{
			flag = true;
		}
	}
	return flag; 
}

vector<int> quiz(tuple<vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>> _questions)
{


	int amountOfQuestionsLeft = 10; //Change this to how many Questions above
	int score = 0;
	auto timeStart = time(0); 
	list<int> questionsUsed; 
	cout << "Please answer these questions as fast as possible. Answer by entering A, B, C, or D to select the corresponding answer."; 
	while (amountOfQuestionsLeft > 0)
	{
		int randomQuestionNumber; 

		do {
			srand(time(NULL)); //set a random seed
			randomQuestionNumber = rand() % 10; //range from 0 to 9
		} while (isIn(questionsUsed, randomQuestionNumber)); 

		questionsUsed.push_back(randomQuestionNumber); 
		amountOfQuestionsLeft = amountOfQuestionsLeft - 1; 
		vector<string> activeQuestion;
		switch (randomQuestionNumber)
		{
		case 0:
			activeQuestion = get<0>(_questions);
			break;
		case 1:
			activeQuestion = get<1>(_questions);
			break;
		case 2:
			activeQuestion = get<2>(_questions);
			break;
		case 3:
			activeQuestion = get<3>(_questions);
			break;
		case 4:
			activeQuestion = get<4>(_questions);
			break;
		case 5:
			activeQuestion = get<5>(_questions);
			break;
		case 6:
			activeQuestion = get<6>(_questions);
			break;
		case 7:
			activeQuestion = get<7>(_questions);
			break;
		case 8:
			activeQuestion = get<8>(_questions);
			break;
		case 9:
			activeQuestion = get<9>(_questions);
			break;
		default:
			break;
		}

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

		char answer;
		do {
			cin >> answer; 
		} while (validateAnswer(answer) == false);


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
	auto timeEnd = time(0);
	int timeDiff = difftime(timeEnd, timeStart); 
	vector<int> results;
	results.push_back(score);
	results.push_back(timeDiff);
	return results;

}


tuple<list<int>, list<string>> sortingAlgo(list<int> _intList, list<string> _strList)
{
	list<int> intInput = _intList;
	list<int> intResult;
	list<string> strInput = _strList;
	list<string> strResult;

	bool sizeLimit = false;
	bool larger = false;

	auto currentElement = intInput.begin();
	auto currentString = strInput.begin();
	strResult.push_back(*currentString);
	intResult.push_back(*currentElement);

	auto testingElement = intResult.begin();
	auto testingString = strResult.begin();

	for (currentElement = next(currentElement, 1); currentElement != intInput.end(); currentElement++)
	{
		currentString = next(currentString, 1);
		testingString = strResult.begin();
		for (testingElement = intResult.begin(); (testingElement != intResult.end()) && (*currentElement > *testingElement); testingElement++)
		{

			larger = true;
			testingString = next(testingString, 1);

		}
		if (larger)
		{
			int insert = *currentElement;
			string strInsert = *currentString;
			intResult.insert(testingElement, insert);
			strResult.insert(testingString, strInsert);
		}
		else if (testingElement == intResult.begin())
		{
			int insert = *currentElement;
			string strInsert = *currentString;
			intResult.insert(testingElement, insert);
			strResult.insert(testingString, strInsert);
		}
		else
		{
			int insert = *currentElement;
			string strInsert = *currentString;
			auto smallerPtr = next(testingElement, -1);
			auto smallerPtrStr = next(testingString, -1);
			intResult.insert(smallerPtr, insert);
			strResult.insert(smallerPtrStr, strInsert);
		}

	}
	tuple<list<int>, list<string>> tupleReturn = make_tuple(intResult, strResult);
	return(tupleReturn);

}


tuple<list<int>, list<string>, list<string>> sortingAlgo(list<int> _intList, list<string> _strList, list<string> _strList2)
{
	list<int> intInput = _intList;
	list<int> intResult;
	list<string> strInput = _strList;
	list<string> strResult;
	list<string> strInput2 = _strList2; 
	list<string> strResult2; 

	bool sizeLimit = false;
	bool larger = false;

	auto currentElement = intInput.begin();
	auto currentString = strInput.begin();
	auto currentString2 = strInput2.begin(); 
	strResult.push_back(*currentString);
	strResult2.push_back(*currentString2);
	intResult.push_back(*currentElement);


	auto testingElement = intResult.begin();
	auto testingString = strResult.begin();
	auto testingString2 = strResult2.begin(); 

	for (currentElement = next(currentElement, 1); currentElement != intInput.end(); currentElement++)
	{

		currentString = next(currentString, 1);
		currentString2 = next(currentString2, 1);
		testingString = strResult.begin();
		testingString2 = strResult2.begin();
		for (testingElement = intResult.begin(); (testingElement != intResult.end()) && (*currentElement > *testingElement); testingElement++)
		{

			larger = true;
			testingString = next(testingString, 1);
			testingString2 = next(testingString2, 1);


		}
		if (larger)
		{
			int insert = *currentElement;
			string strInsert = *currentString;
			string strInsert2 = *currentString2;
			intResult.insert(testingElement, insert);
			strResult.insert(testingString, strInsert);
			strResult2.insert(testingString2, strInsert2);
		}
		else if (testingElement == intResult.begin())
		{
			int insert = *currentElement;
			string strInsert = *currentString;
			string strInsert2 = *currentString2;
			intResult.insert(testingElement, insert);
			strResult.insert(testingString, strInsert);
			strResult2.insert(testingString2, strInsert2);
		}
		else
		{
			int insert = *currentElement;
			string strInsert = *currentString;
			string strInsert2 = *currentString2;
			auto smallerPtr = next(testingElement, -1);
			auto smallerPtrStr = next(testingString, -1);
			auto smallerPtrStr2 = next(testingString2, -1);
			intResult.insert(smallerPtr, insert);
			strResult.insert(smallerPtrStr, strInsert);
			strResult2.insert(smallerPtrStr2, strInsert2);
		}

	}
	tuple<list<int>, list<string>, list<string>> tupleReturn = make_tuple(intResult, strResult, strResult2);
	return(tupleReturn);

}

void game()
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
	q4.push_back("What is another name for the structured approach? ");
	q4.push_back("Waterfall Approach.");
	q4.push_back("Staircase Approach.");
	q4.push_back("Balloon Approach.");
	q4.push_back("Slide Approach.");
	vector<string> q5;
	q5.push_back("When was LimeWire developed? ");
	q5.push_back("2000.");
	q5.push_back("1995.");
	q5.push_back("2005.");
	q5.push_back("2010.");
	vector<string> q6;
	q6.push_back("Which of these are NOT a software development approach? ");
	q6.push_back("Feeding Draft Approach.");
	q6.push_back("End User Development Approach.");
	q6.push_back("Agile Approach");
	q6.push_back("Prototyping Approach");
	vector<string> q7;
	q7.push_back("How many plaintiffs were there in the Arista Reccords LLC v. Lime Group LLC? ");
	q7.push_back("13.");
	q7.push_back("12.");
	q7.push_back("1.");
	q7.push_back("14.");
	vector<string> q8;
	q8.push_back("Roughly how much money did Lime Group LLC pay to the plaintiffs in the out of court settlement? ");
	q8.push_back("$140,000,000 (AUD).");
	q8.push_back("$130,000,000 (AUD).");
	q8.push_back("$120,000,000 (AUD).");
	q8.push_back("$750,000 (AUD).");
	vector<string> q9;
	q9.push_back("Which of these were a competitor of LimeWire? ");
	q9.push_back("Napster.");
	q9.push_back("Facebook. ");
	q9.push_back("YouTube Music.");
	q9.push_back("Call of Duty");
	vector<string> q10;
	q10.push_back("Is the question answer D? ");
	q10.push_back("The Correct Answer is D.");
	q10.push_back("The Correct Answer is A.");
	q10.push_back("The Correct Answer is C.");
	q10.push_back("The Correct Answer is B.");
	tuple<vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>> questions(q1, q2, q3, q4, q5, q6, q7, q8, q9, q10);

	string name;
	do {
		cout << "What is your name? (a-z, A-Z, 0-9) ";
		cin >> name;
	} while (validateName(name) == false);
	vector<int> results = quiz(questions);
	int percentageCorrect = results[0] * 10; 
	cout << endl << "Congrats " << name << " you answered " << percentageCorrect << "% of questions correct!\nTime taken was: " << results[1];


		ofstream leaderBoard("leaderBoard.txt", ios::app);
		leaderBoard << endl <<  name << "#" << results[1] << "%" << percentageCorrect << "!";
		leaderBoard.close();

}

list<int> list_stoi(list<string> _strList)
{
	list<int> result; 
	for (auto it = _strList.begin(); it != _strList.end(); it++)
	{
		result.push_back(stoi(*it)); 
	}
	return result; 
}

void leaderboard()
{
	string leaderBoardLine;
	vector<string> leaderBoardVector;
	ifstream leaderBoardRead("leaderBoard.txt");
	while (getline(leaderBoardRead, leaderBoardLine))//Reads leaderboard file and stores each entry as seperate element
	{
		leaderBoardVector.push_back(leaderBoardLine);
	}

	list<string> boardUser = vtol(suckUser(leaderBoardVector));//Extracts the usernames from the leaderboard entries. Then converts from a vector to list. 
	list<int> boardTime = vtol(suckTime(leaderBoardVector));//Extracts the time results from the leaderboard entries. Then converts from a vector to list. 
	list<string> boardPercentage = vtol(suckPercentage(leaderBoardVector));//Extracts the time results from the leaderboard entries. Then converts from a vector to list. 

	list<string> orderedUser;//List elements are paired with each other by being stored at the same position in their respective lists. 
	list<string> orderedPercentage; 
	list<int> orderedTime; 

	tie(orderedTime, orderedUser, orderedPercentage) = sortingAlgo(boardTime, boardUser, boardPercentage);//Lists are ordered from lowest boardTime int to highest boardTime int. The each boardUser element is ordered according to it's corresponding boardTime element.

	int position = 1; 

	auto user = orderedUser.begin(); 
	auto percent = orderedPercentage.begin(); 
	cout << "\nTop 10 Times for 100% Correct\n";
	for (auto time = orderedTime.begin(); time != orderedTime.end() && position <= 10; time++)
	{

		cout << "[" << position << "] " << *user << " Time Taken: " << *time << endl;
		user = next(user, 1); 
		position = position + 1; 
	}
	position = 1;

	user = orderedUser.begin();
	percent = orderedPercentage.begin();
	cout << "\nTop 10 Times for any percent Correct\n";
	for (auto time = orderedTime.begin(); time != orderedTime.end() && position <= 10; time++)
	{

		cout << "[" << position << "] " << *user << " Time Taken: " << *time << " Percentage Correct: " << *percent << "%" << endl;
		user = next(user, 1);
		percent = next(percent, 1); 
		position = position + 1;
	}

	list<int> orderedPercentageInt = list_stoi(orderedPercentage); 

	
}

int main()
{
	bool running = true;
	while (running)
	{
		char selection; 
		do {
			cout << "\nTo check leader board type 1, To enter the quiz type 2, To Leave enter 3\n";
			cin >> selection;
		} while (validateSelection(selection) == false); 
			switch(selection)
		{
			case '1': 
				leaderboard(); 
				break;
			case '2':
				game();
				break; 
			case '3': 
				running = false; 
				break; 
			default: 
				running = false;
				break; 
		}
	}
	cout << "\nThankyou for playing\n";
	return 0; 
}
	/*
	l
	for (int i = 1; i < leaderBoardVector.size(); i++)//sorts leaderboard
	{
		bool larger = true;
		bool valueLeft = true;
		while (larger && valueLeft)
		{
			if (leaderBoardVector.size() == i)
			{

			}
			if(scoresFromLeaderBoard[i] < scoresFromLeaderBoard[i + 1])
		}
	}

	//sort by checking if number is lower or higher if higher go to next if lower insert there. 
	//Sort, leaderboard line in text is like nameExample04 (number is score)

    
}
*/ 


/*
New Leaderboard Idea || 100% and Any Percent
new leaderboard storing user#seconds#percentageCorrect e.g. jack#56#70#

*/
/*
New Score System
(Percent^2/time) */