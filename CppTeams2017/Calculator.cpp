#include "Calculator.h"
#include "Read.h"
#include "Write.h"
#include "Struct.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections;

// Create Fixture For Each Week
void Calculator::createFixture(ArrayList^ teams) {
	writeToFile write;
	ArrayList^ fixture = gcnew ArrayList;
	ArrayList^ finalFixture = gcnew ArrayList;
	ArrayList^ sended = gcnew ArrayList;
	ArrayList^ matches = createMatrix(teams);
	int size = teams->Count;
	if (size % 2 != 0) size -= 1;
	else size -= 2;

	for (int i = 0; i < matches->Count; i++) {
		fixture->Add(matches[i]);
	}

	for (int i = 0; i < size; i++) {
		matches = nextWeek(matches);

		for (int j = 0; j < matches->Count; j++) {
			fixture->Add(matches[j]);
		}
	}

	for (int i = 0; i < fixture->Count / 2; i++) {
		sended->Clear();
		if (fixture[i * 2]->ToString() == "" || fixture[i * 2 + 1]->ToString() == "") {
			if(fixture[i * 2]->ToString() == "") finalFixture->Add(" ");
			else finalFixture->Add(fixture[i * 2]);
			finalFixture->Add(" ");
			finalFixture->Add(" ");
			if (fixture[i * 2 + 1]->ToString() == "") finalFixture->Add(" ");
			else finalFixture->Add(fixture[i * 2 + 1]);
		}
		else {
			sended->Add(fixture[i * 2]);
			sended->Add(fixture[i * 2 + 1]);

			sended = createScore(sended);

			for (int j = 0; j < sended->Count; j++) {
				finalFixture->Add(sended[j]);
			}
		}
	}

	write.writeFixture(finalFixture);
	createScorBoard(finalFixture);
}

// Create Matrix For Teams To Use Fixture Algorithm
ArrayList^ Calculator::createMatrix(ArrayList^ match) {
	ArrayList^ fixture = gcnew ArrayList;
	ArrayList^ team1 = gcnew ArrayList;
	ArrayList^ team2 = gcnew ArrayList;
	int size = match->Count;

	if (size % 2 != 0) {
		size /= 2;
		for (int i = 0; i < size; i++) {
			team1->Add(match[i * 2]);
			team2->Add(match[i * 2 + 1]);
		}
		team1->Add(match[size * 2]);
		team2->Add("");
	}
	else {
		size /= 2;
		for (int i = 0; i < size; i++) {
			team1->Add(match[i * 2]);
			team2->Add(match[i * 2 + 1]);
		}
	}

	size = match->Count;
	if (size % 2 != 0) {
		size = (size / 2) + 1;
	}
	else size /= 2;

	for (int i = 0; i < size; i++) {
		fixture->Add(team1[i]);
		fixture->Add(team2[i]);
	}
	return fixture;
}

// Create Next Week Matches
ArrayList^ Calculator::nextWeek(ArrayList^ match) {
	ArrayList^ fixture = gcnew ArrayList;
	ArrayList^ team1 = gcnew ArrayList;
	ArrayList^ team2 = gcnew ArrayList;
	ArrayList^ t1copy = gcnew ArrayList;
	ArrayList^ t2copy = gcnew ArrayList;
	int size = match->Count / 2;

	for (int i = 0; i < size; i++) {
		team1->Add(match[i * 2]);
		t1copy->Add(match[i * 2]);
		team2->Add(match[i * 2 + 1]);
		t2copy->Add(match[i * 2 + 1]);
	}
	
	for (int i = 1; i < size - 1; i++) {
		team1[i + 1] = t1copy[i];
	}

	for (int i = size - 1; i > 1; i--) {
		team2[i - 1] = t2copy[i];
	}
	
	team1[0] = t1copy[0];
	team1[1] = t2copy[0];
	team2[0] = t2copy[1];
	team2[size - 1] = t1copy[size - 1];
	
	for (int i = 0; i < size; i++) {
		fixture->Add(team1[i]);
		fixture->Add(team2[i]);
	}
	
	return fixture;
}

// Create Tags For The Teams
ArrayList^ Calculator::tags(ArrayList^ teams) {
	ArrayList^ tags = gcnew ArrayList;
	String^ tag;

	for (int i = 0; i < teams->Count / 3; i++) {
		int count = 2;
		int check = 0;

		while (check == 0) {
			tag = teams[i * 3]->ToString()->Substring(0, count);
			check = 1;
			for (int j = 0; j < tags->Count; j++) {
				if (tag == tags[j]->ToString()) {
					check = 0;
				}
			}
			count++;
		}

		tags->Add(tag);
	}

	return tags;
}

// Return Only Team Names From Given ArrayList
ArrayList^ Calculator::teamList(ArrayList^ teams) {
	ArrayList^ teamNames = gcnew ArrayList;

	for (int i = 0; i < teams->Count / 3; i++) {
		teamNames->Add(teams[i * 3]);
	}

	return teamNames;
}

// Calculate And Return Match Scores
ArrayList^ Calculator::createScore(ArrayList^ teams) {
	readFromFile read;
	ArrayList^ score = gcnew ArrayList;
	String^ t1name = teams[0]->ToString();
	String^ t2name = teams[1]->ToString();
	ArrayList^ teamInfos = read.read("Teams Info.txt");

	int A_DPO, A_OSPO, A_FPO, A_TOP, 
		B_DPO, B_OSPO, B_FPO, B_TOP, 
		A_GOL, B_GOL;

	Random^ rnd = gcnew Random;

	A_GOL = rnd->Next(0, 6);
	B_GOL = rnd->Next(0, 6);

	for (int i = 0; i<teamInfos->Count / 8; i++) {
		if (teamInfos[i * 8]->ToString() == t1name) {
			A_TOP = Convert::ToInt32(teamInfos[i * 8 + 4]);
			A_DPO = Convert::ToInt32(teamInfos[i * 8 + 5]);
			A_OSPO = Convert::ToInt32(teamInfos[i * 8 + 6]);
			A_FPO = Convert::ToInt32(teamInfos[i * 8 + 7]);			
		}
		if (teamInfos[i * 8]->ToString() == t2name) {
			B_TOP = Convert::ToInt32(teamInfos[i * 8 + 4]);
			B_DPO = Convert::ToInt32(teamInfos[i * 8 + 5]);
			B_OSPO = Convert::ToInt32(teamInfos[i * 8 + 6]);
			B_FPO = Convert::ToInt32(teamInfos[i * 8 + 7]);
		}
	}

	//Calculate end scor as needed.
	if (A_FPO > B_FPO) ++A_GOL;
	if (A_FPO < B_FPO) ++B_GOL;

	if (A_DPO > B_DPO) --B_GOL;
	if (A_DPO < B_DPO) --A_GOL;

	if (A_OSPO > B_OSPO) {
		++A_GOL;
		--B_GOL;
	}
	if (A_OSPO < B_OSPO) {
		++B_GOL;
		--A_GOL;
	}

	if (A_TOP > B_TOP) {
		if (rnd->Next(0, 1) == 1) ++A_GOL;
		else --B_GOL;
	}

	if (A_TOP < B_TOP) {
		if (rnd->Next(0, 1) == 1) ++B_GOL;
		else --A_GOL;
	}

	//Team score can not be lover then 0
	if (A_GOL < 0) A_GOL = 0;
	if (B_GOL < 0) B_GOL = 0;

	score->Add(t1name);
	score->Add(A_GOL);
	score->Add(B_GOL);
	score->Add(t2name);

	return score;
}

// Calculate Scor Board
void Calculator::createScorBoard(ArrayList^ teams) {
	readFromFile read;
	Calculator calculate;
	writeToFile write;
	Teams dataValues;	
	ArrayList^ teamNames = gcnew ArrayList;
	ArrayList^ board = gcnew ArrayList;
	String^ fileName = "Takimlar.txt";
	String^ t1name, ^t2name;
	int s1, s2, size;

	teamNames = read.read(fileName);
	teamNames = calculate.teamList(teamNames);

	size = teamNames->Count;

	array<Teams>^ data = gcnew array<Teams>(size);

	for (int i=0; i<size; i++) {
		data[i].name = teamNames[i]->ToString();
	}

	for (int i=0; i<teams->Count / 4; i++) {
		t1name = teams[i * 4]->ToString();
		t2name = teams[i * 4 + 3]->ToString();
		if ((t1name == " " || t2name == " ") || (t1name == "" || t2name == ""));			
		else {
			s1 = Convert::ToInt32(teams[i * 4 + 1]);
			s2 = Convert::ToInt32(teams[i * 4 + 2]);

			for (int j = 0; j < size; j++) {
				if (data[j].name == t1name) {
					data[j].o += 1;
					data[j].a += s1;
					data[j].y += s2;

					if (s1 > s2) {
						data[j].g += 1;
						data[j].puan += 3;
					}
					else if (s1 == s2) {
						data[j].b += 1;
						data[j].puan += 1;
					}
					else if (s1 < s2) {
						data[j].m += 1;
					}
				}
				if (data[j].name == t2name) {
					data[j].o += 1;
					data[j].a += s2;
					data[j].y += s1;

					if (s2 > s1) {
						data[j].g += 1;
						data[j].puan += 3;
					}
					else if (s1 == s2) {
						data[j].b += 1;
						data[j].puan += 1;
					}
					else if (s2 < s1) {
						data[j].m += 1;
					}
				}
			}
		}
	}

	for (int i=0; i<size; i++) {
		data[i].av = data[i].a - data[i].y;
	}

	int bigest = 0;
	int place = 0;

	for (int i=0; i<size; i++) {
		place = 0;
		bigest = 0;
		for (int j = 0; j < size; j++) {
			if (data[j].puan > bigest) {
				bigest = data[j].puan;
				place = j;
			}
			else if (data[j].puan == bigest && bigest != 0) {
				if (data[j].av > data[place].av) {
					bigest = data[j].puan;
					place = j;
				}
			}
		}
		board->Add(i+1);
		board->Add(data[place].name);
		board->Add(data[place].o);
		board->Add(data[place].g);
		board->Add(data[place].b);
		board->Add(data[place].m);
		board->Add(data[place].a);
		board->Add(data[place].y);
		board->Add(data[place].av);
		board->Add(data[place].puan);

		data[place].puan = -1;
	}

	write.writeScorBoard(board);

	delete data, dataValues;
}

// Return Team Detail Mini Boxes
ArrayList^ Calculator::teamDetailMiniBox() {
	readFromFile read;
	String^ fileName = "Saved Info.txt", ^fileName2 = "Teams Info.txt", ^fileName3 = "Takimlar.txt";
	ArrayList^ returnValue = gcnew ArrayList;
	ArrayList^ value = read.read(fileName);
	String^ teamName = value[0]->ToString();

	value = read.read(fileName2);

	// Team Name - Manager - 4-4-2 - Old - Power - Tag

	for (int i = 0; i < value->Count / 8; i++) {
		if (value[i * 8]->ToString() == teamName) {
			for (int j = 0; j < 5; j++) {
				returnValue->Add(value[i * 8 + j]);
			}
		}
	}

	value = read.read(fileName3);

	for (int i = 0; i < value->Count / 3; i++) {
		if (value[i * 3]->ToString() == teamName) {
			value = tags(value);
			returnValue->Add(value[i]);             //add tag
			break;
		}
	}

	return returnValue;
}

// Return Team Detail Player List
ArrayList^ Calculator::teamPlayerDetail() {
	readFromFile read;
	String^ fileName = "Saved Info.txt";
	ArrayList^ value = read.read(fileName);
	String^ teamName = value[0]->ToString();
	fileName = teamName + ".txt";
	value = read.read(fileName);

	return value;
}

// Return Given Teams Fixture
ArrayList^ Calculator::teamFixture() {
	readFromFile read;
	String^ fileName = "Saved Info.txt";
	ArrayList^ value = read.read(fileName);
	String^ teamName = value[0]->ToString();
	fileName = "Fiksture.txt";
	value = read.read(fileName);
	ArrayList^ returnValue = gcnew ArrayList;

	for (int i = 0; i < value->Count / 4; i++) {
		int win = 0;
		String^ t1 = value[i * 4]->ToString();
		String^ t2 = value[i * 4 + 3]->ToString();
		if ((t1 == teamName || t2 == teamName) && (t1 != " " && t2 != " ")) {
			int s1 = Convert::ToInt32(value[i * 4 + 1]);
			int s2 = Convert::ToInt32(value[i * 4 + 2]);

			if (t1 == teamName) {
				if (s1 > s2) win = 3;
				else if (s1 == s2) win = 2;
				else if (s1 < s2) win = 1;
			}
			else if (t2 == teamName) {
				if (s2 > s1) win = 3;
				else if (s2 == s1) win = 2;
				else if (s2 < s1) win = 1;
			}
			returnValue->Add(t1);
			returnValue->Add(s1);
			returnValue->Add(s2);
			returnValue->Add(t2);
			returnValue->Add(win);
		}
	}
	// t1 / scor t1 / scor t2 / t2 / win-draw-lose
	return returnValue;
}

// Retur VS Detail Mini Boxes
ArrayList^ Calculator::vsDetailMiniBox() {
	readFromFile read;
	ArrayList^ returnValue = gcnew ArrayList;
	String^ fileName = "Saved Info.txt", ^fileName2 = "Teams Info.txt";
	ArrayList^ value = read.read(fileName);
	String^ teamName1 = value[0]->ToString();
	String^ teamName2 = value[3]->ToString();
	int s1 = Convert::ToInt32(value[1]);
	int s2 = Convert::ToInt32(value[2]);

	// Team Name - Manager - 4-4-2 - Old - Power - Def Power - Min Power - Forvet Power

	value = read.read(fileName2);

	// Team Name - Manager - 4-4-2 - Old - Power - Scor

	for (int i = 0; i < value->Count / 8; i++) {
		if (value[i * 8]->ToString() == teamName1) {
			for (int j = 0; j < 5; j++) {
				returnValue->Add(value[i * 8 + j]);
			}
			break;
		}		
	}

	returnValue->Add(s1);

	for (int i = 0; i < value->Count / 8; i++) {
		if (value[i * 8]->ToString() == teamName2) {
			for (int j = 0; j < 5; j++) {
				returnValue->Add(value[i * 8 + j]);
			}
			break;
		}		
	}

	returnValue->Add(s2);

	return returnValue;
}

// Return VS team Name List
ArrayList^ Calculator::teamVsTeamNames() {
	readFromFile read;
	String^ fileName = "Saved Info.txt";
	ArrayList^ value = read.read(fileName);
	
	return value;
}

// Return VS team Player List
ArrayList^ Calculator::teamVsPlayerDetail(String^ name) {
	readFromFile read;
	name = name + ".txt";
	ArrayList^ value = read.read(name);
	return value;
}