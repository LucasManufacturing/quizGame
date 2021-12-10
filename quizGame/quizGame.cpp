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
#include <filesystem>

using namespace std; 
 
bool validateName(string _string) //Iterates through each character to check for any illegal characters
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

	return valid; //Returing true means the input contained all legal characters; Returning false means the input contained atleast one illegal character. 
}

bool validateAnswer(char _char) //Checks character matches a legal character
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
		return valid; //Returning true means the input contained a legal character; Returning false means it contained an illegal character.
}

bool validateSelection(char _char) //Checks character matches a legal character
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
		return valid; //Returning true means the input contained a legal character; Returning false means it contained an illegal character.
}

int line_int(string _string) //Finds all the numbers in a string and converts it to a double 
{
	int it = 0;
	string intFromString = "";
	while (it != _string.size())
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

	return stoi(intFromString);
}

bool mark(char _answer, int _num)//Returns true of inputed answer is correct
{
    int answerNum = 0; 
    switch (_answer)//converts character input to an integer. 
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
	default:
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


vector<int> suckTime(vector<string> _vector) //Takes all the time values from the vector containing the leaderboard.txt lines and stores them in a seperate vector.
{
	vector<int> result;
	for (int i = 0; i < _vector.size(); i++)//int i acts as an iterator for _vector
	{
		string extractedString;
		char _char;
		size_t startOfTime = _vector[i].find('$') + 1; //$ indicates start of time value
		for (auto b = startOfTime; _vector[i][b] != '%'; b++) //% indicates end of time value, auto b is an iterator of a _vector element
		{
			extractedString.push_back(_vector[i][b]);//each character between the $ and % characters are added to the extractedString
		}

		result.push_back(stoi(extractedString)); 
	}
	return result;
}

vector<string> suckPercentage(vector<string> _vector) //Takes all the percentage values from the vector containing the leaderboard.txt lines and stores them in a seperate vector.
{
	vector<string> result;
	for (int i = 0; i < _vector.size(); i++)//int i acts as an iterator for _vector
	{
		string extractedString;
		char _char;
		size_t startOfTime = _vector[i].find('%') + 1; //% indicates start of percentage value
		for (auto b = startOfTime; _vector[i][b] != '!'; b++) //! indcates end of percentage value, auto b is an iterator of a _vector element
		{
			extractedString.push_back(_vector[i][b]);//each character between the % and ! characters are added to the extractedString
		}

		result.push_back(extractedString);
	}
	return result;
}

vector<string> suckUser(vector<string> _vector) //Takes all the username values from the vector containing the leaderboard.txt lines and stores them in a seperate vector.
{
	vector<string> result;
	for (int i = 0; i < _vector.size(); i++)
	{
		string extractedString;
		char _char;
		for (int b = 0; b < _vector[i].size() && _vector[i][b] != '$'; b++) //$indicates end of username value
		{
			extractedString.push_back(_vector[i][b]); //each character between the start of the string and the $ character are added to the extractedString
		}
		result.push_back(extractedString);
	}
	return result;
}


list<int> vtol(vector<int> _vector)//Converts integer vectors to integer lists
{
	list<int> newList;
	for (int i = 0; i < _vector.size(); i++)
	{
		newList.push_back(_vector[i]);
	}
	return newList;
}

list<string> vtol(vector<string> _vector) //Converts string vectors to string lists
{
	list<string> newList;
	for (int i = 0; i < _vector.size(); i++)
	{
		newList.push_back(_vector[i]);
	}
	return newList;
}



void printL(list<int> _list) //Prints integer Lists (For Testing and maintenance) 
{
	cout << endl;
	for (auto i = _list.begin(); i != _list.end(); i++)
	{
		cout << " " << *i << " ";
	}
	cout << endl;
}
void printL(list<string> _list) //Prints string Lists (For Testing and maintenance) 
{
	cout << endl;
	for (auto i = _list.begin(); i != _list.end(); i++)
	{
		cout << " " << *i << " ";
	}
	cout << endl;
}

bool isIn(list<int> _list, int _int) //Checks to see if an integer value is present in an integer list
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

vector<int> quiz(tuple<vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>> _questions) //Asks quizz questions
{


	int amountOfQuestionsLeft = 10; 
	int score = 0;
	auto timeStart = time(0); 
	list<int> questionsUsed; //Used to store which questions have already been asked
	cout << "Please answer these questions as fast as possible. Answer by entering A, B, C, or D to select the corresponding answer."; 
	while (amountOfQuestionsLeft > 0) //loops through each question 
	{
		int randomQuestionNumber; //Stores a number used to dictate the active question

		do {//Generates a random number to select a random question
			srand(time(NULL)); //set a random seed
			randomQuestionNumber = rand() % 10; //range from 0 to 9
		} while (isIn(questionsUsed, randomQuestionNumber)); //This process will repeat until randomQuestionNumber correlates to an unasked question

		questionsUsed.push_back(randomQuestionNumber); 
		amountOfQuestionsLeft = amountOfQuestionsLeft - 1; 
		vector<string> activeQuestion; //Used to store question currently being asked
		switch (randomQuestionNumber)//Assigns the active question to the preselected random question 
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

		cout << endl << activeQuestion[0]; //Displays the question
		srand(time(NULL));
		char correctAnswerPos; //Stores which position (A, B, C, D) the correct answer is in
		int randomMemory[4] = {};//Stores which answer has already been revealed
		int randAnswer = rand() % 4 + 1;//generates a random number between 1-4 || Stores a random number correlating to an answer to the activeQuestion vector
		randomMemory[0] = randAnswer;

		if (randAnswer == 1)//Checks if answer option being told is the correct answer || One correlates to the position of the correct answer in the activeQuestion vector. 
		{
			correctAnswerPos = 'A';
		}
		cout << endl << "[A] " << activeQuestion[randAnswer]; //Tells the answer option 

		srand(time(NULL));

		randAnswer = rand() % 4 + 1; //sets a new random number
		do
		{
			if (randAnswer == randomMemory[0]) //Checks to see if random number has already been generated
			{
				srand(time(NULL));
				randAnswer = rand() % 4 + 1;
			}
		} while (randAnswer == randomMemory[0]);//Checks again if the new random number has been generated, if so loops again to try and generate a unique random number

		randomMemory[1] = randAnswer; //unique random number generated stored in memory

		if (randAnswer == 1) //Checks if answer option being told is the correct answer
		{
			correctAnswerPos = 'B';
		}
		cout << endl << "[B] " << activeQuestion[randAnswer]; //Tells the answer option


		srand(time(NULL));
		randAnswer = rand() % 4 + 1;
		do
		{
			if (randAnswer == randomMemory[0] || randAnswer == randomMemory[1])//Checks to see if random number has already been generated
			{
				srand(time(NULL));
				randAnswer = rand() % 4 + 1;
			}
		} while (randAnswer == randomMemory[0] || randAnswer == randomMemory[1]);
		randomMemory[2] = randAnswer;
		if (randAnswer == 1) //Checks if answer option being told is the correct answer
		{
			correctAnswerPos = 'C';
		}
		cout << endl << "[C] " << activeQuestion[randAnswer]; //Tells the answer option

		int lastQuestion = 10 - randomMemory[0] - randomMemory[1] - randomMemory[2]; //Selects the last possible answer
		if (lastQuestion == 1) //Checks if answer option being told is the correct answer
		{
			correctAnswerPos = 'D';
		}
		cout << endl << "[D] " << activeQuestion[lastQuestion] << endl; //Tells the answer option

		char answer;
		do {//User inputs answer, if not in correct format user is asked again. 
			cin >> answer; 
		} while (validateAnswer(answer) == false);


		if (correctAnswerPos == answer) //Checks to see if user is correct. 
		{
			cout << endl << "CORRECT" << endl;
			score = score + 1;
		}
		else
		{

			cout << endl << "INCORRECT\nCorrect Answer was: [" << correctAnswerPos << "] " << activeQuestion[1] << endl; //Displays correct answer if user was incorrect
		}
	}
	auto timeEnd = time(0);
	int timeDiff = difftime(timeEnd, timeStart); //Time Taken to answer the quiz
	vector<int> results;
	results.push_back(score);
	results.push_back(timeDiff);
	return results;

}


tuple<list<int>, list<string>> sortingAlgo(list<int> _intList, list<string> _strList) //Sorts two lists with corresponding elements according to the integer list. Orders elements according to integer list from smallest to largest. Correlating elements of each list share the same position on their respective lists
{
	list<int> intInput = _intList; //Original Unsorted List
	list<int> intResult; //New Sorted List
	list<string> strInput = _strList;//Original Unsorted List
	list<string> strResult; //New Sorted List

	bool larger = false; //Flag if an integer element is bigger than the one right to it in the integer list. 

	auto currentElement = intInput.begin();//Element being inserted into the sorted list
	auto currentString = strInput.begin();//Element being inserted into the sorted list
	strResult.push_back(*currentString); //Begins the sorted list by pushing the first element of the original list
	intResult.push_back(*currentElement); //Begins the sorted list by pushing the first element of the original list

	auto testingElement = intResult.begin();//Element that the current element is compared to. Will point to the final location of the current element
	auto testingString = strResult.begin(); //Will point to the final location of the current element

	for (currentElement = next(currentElement, 1); currentElement != intInput.end(); currentElement++)//iterates for all elements in the original list
	{
		currentString = next(currentString, 1);
		testingString = strResult.begin();
		for (testingElement = intResult.begin(); (testingElement != intResult.end()) && (*currentElement > *testingElement); testingElement++)//Will continue to loop until current element isn't larger than the element it's compared to or until there are no more elements left to test against in the sorted list
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
		else if (testingElement == intResult.begin()) //occurs if current element isn't larger than any ordered element
		{
			int insert = *currentElement;
			string strInsert = *currentString;
			intResult.insert(testingElement, insert);
			strResult.insert(testingString, strInsert);
		}
		else //only occurs if the current element is larger than all ordered elements 
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


tuple<list<int>, list<string>, list<string>> sortingAlgo(list<int> _intList, list<string> _strList, list<string> _strList2) //Sorts two string lists according to an integer list. Orders elements according to integer list from smallest to largest. Correlating elements of each list share the same position on their respective lists
{//For more indepth commenting see sortingAlgo(list<int>, list<string>) above. Functions identical but orders 2 string lists instead of one. 
	list<int> intInput = _intList;
	list<int> intResult;
	list<string> strInput = _strList;
	list<string> strResult;
	list<string> strInput2 = _strList2; 
	list<string> strResult2; 

	bool larger = false; //Flag if an integer element is bigger than the one right to it in the integer list. 

	auto currentElement = intInput.begin();
	auto currentString = strInput.begin();
	auto currentString2 = strInput2.begin(); 
	strResult.push_back(*currentString);
	strResult2.push_back(*currentString2);
	intResult.push_back(*currentElement);


	auto testingElement = intResult.begin();
	auto testingString = strResult.begin();
	auto testingString2 = strResult2.begin(); 

	for (currentElement = next(currentElement, 1); currentElement != intInput.end(); currentElement++)//iterates for all elements in the original list
	{

		currentString = next(currentString, 1);
		currentString2 = next(currentString2, 1);
		testingString = strResult.begin();
		testingString2 = strResult2.begin();
		for (testingElement = intResult.begin(); (testingElement != intResult.end()) && (*currentElement > *testingElement); testingElement++) //Will continue to loop until current element isn't larger than the element it's compared to or until there are no more elements left to test against in the sorted list
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
		else if (testingElement == intResult.begin()) //occurs if current element isn't larger than any ordered element
		{
			int insert = *currentElement;
			string strInsert = *currentString;
			string strInsert2 = *currentString2;
			intResult.insert(testingElement, insert);
			strResult.insert(testingString, strInsert);
			strResult2.insert(testingString2, strInsert2);
		}
		else //only occurs if the current element is larger than all ordered elements 
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

void game() //The main function for the quizz area of coding solution
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
	q1.push_back("Which statement is most true? ");
	q1.push_back("The Software Developer Must Ensure Their Product is Malware Free.");
	q1.push_back("The Developer Holds No Right to Their Produced Works. ");
	q1.push_back("Developers Hold No Liability in How Users Use Their Software. ");
	q1.push_back("All These Statements are True.");
	vector<string> q2;
	q2.push_back("Which Country did the Arista Records LLC v. Lime Group LLC Court Case Take Place in? ");
	q2.push_back("U.S.A.");
	q2.push_back("Australia.");
	q2.push_back("United Kingdom.");
	q2.push_back("Japan.");
	vector<string> q3;
	q3.push_back("What is the Term given to Solutions Created by the End User Development Approach? ");
	q3.push_back("Customized Off The Shelf Solution.");
	q3.push_back("Customized Off The Shelf Approach.");
	q3.push_back("Macro Solution.");
	q3.push_back("Agile Solution.");
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
	q10.push_back("What type of software was LimeWire? ");
	q10.push_back("Peer-Peer File Sharing Software.");
	q10.push_back("Music Producing Software.");
	q10.push_back("Accounting Software.");
	q10.push_back("Citrus Drop-Shipping Software.");
	tuple<vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>, vector<string>> questions(q1, q2, q3, q4, q5, q6, q7, q8, q9, q10);

	string name; //inputed Name
	do {//Asks user to input their name
		cout << "What is your name? (a-z, A-Z, 0-9) ";
		cin >> name;
	} while (validateName(name) == false);//If inputed name contains illegal character user is asked again to input their name
	vector<int> results = quiz(questions); //Intiates quizz asking process and stores the results of it. 
	int percentageCorrect = results[0] * 10; 
	cout << endl << "Congrats " << name << " you answered " << percentageCorrect << "% of questions correct!\nTime taken was: " << results[1]; //User's final results are displayed to them. 


		ofstream leaderBoard("leaderBoard.txt", ios::app); //records user results in a text file. 
		leaderBoard << "\n" <<  name << "$" << results[1] << "%" << percentageCorrect << "!";
		leaderBoard.close();

}//returns to main function

list<int> list_stoi(list<string> _strList) //converts a string list to an integer list
{
	list<int> result; 
	for (auto it = _strList.begin(); it != _strList.end(); it++)
	{
		result.push_back(stoi(*it)); 
	}
	return result; 
}

void leaderboard() //Displays Quizz leaderboards
{
	string leaderBoardLine; //stores line from text file
	vector<string> leaderBoardVector; //stores lines from text file
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

	int position = 1; //Intial rank position 

	auto user = orderedUser.begin(); 
	auto percent = orderedPercentage.begin(); 
	cout << "\nTop 10 Times for 100% Correct\n"; 
	for (auto time = orderedTime.begin(); time != orderedTime.end() && position <= 10; time++) //Iterates through until 10 positions have been displayed or no more suitable rankings are found
	{
		if (*percent == "100") //Rank only diplsayed if 100% of questions were answered correctly.
		{
			cout << "[" << position << "] " << *user << " Time Taken: " << *time << endl;
			position = position + 1;
		}
		percent = next(percent, 1);
		user = next(user, 1);
	}
	position = 1;

	user = orderedUser.begin();
	percent = orderedPercentage.begin();
	cout << "\nTop 10 Times for any percent Correct\n";
	for (auto time = orderedTime.begin(); time != orderedTime.end() && position <= 10; time++)  //Iterates through the first 10 elements of the orderedTime list or until no more elements are found. 
	{

		cout << "[" << position << "] " << *user << " Time Taken: " << *time << " Percentage Correct: " << *percent << "%" << endl;
		user = next(user, 1);
		percent = next(percent, 1); 
		position = position + 1;
	}
	
}//returns to main


int main()
{

	if (filesystem::exists("leaderBoard.txt") == false) //checks to see if leaderboard exists
	{
		list<string> placeHolderRanks = { "Alex$243%100!", "Jackie$214%100!", "Lisa$205%100!", "Sam$187%100!", "Jess$174%100!", "Tom$158%100!", "Will$146%100!", "Lucy$126%100!", "Ben$98%100!", "Michelle$87%100!", 
			                              "Jason$156 % 80!", "Mitch$126 % 60!", "Susie$174%40!", "Trent$146%80!", "Dan$125%30!", "Ella$119%40!", "Madeline$102%90!", "Ashton$94%40!", "Connor$91%60!", "Marie$87%50!"};
		ofstream leaderBoard("leaderBoard.txt"); //records user results in a text file. 
		for (auto i = placeHolderRanks.begin(); i != placeHolderRanks.end(); i++)// auto i is an iterator for placeHolderRanks, //adds placeholders to leaderboard text file
		{
			if (i == placeHolderRanks.begin())
			{
				leaderBoard << *i;
			}
			else
			{
				leaderBoard << endl << *i; 
			}

		}
		leaderBoard.close();
	}


	bool running = true;//Flag which stores whether the loop continues or not
	while (running) //Asks user what they want to do when they are returned to the main function
	{
		char selection; 
		do {
			cout << "\nTo answer quiz enter '1'. To check leaderboard enter '2'. To exit enter '3'\n";
			cin >> selection;
		} while (validateSelection(selection) == false); 
			switch(selection)
		{
			case '1': 
				game(); //Enters quizz section
				break;
			case '2':
				leaderboard(); //displays leaderboard
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
	return 0; //application closes
}