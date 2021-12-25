#include "Write.h"
#include "Read.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections;

// Write New Team Info To End Of Team file
void writeToFile::writeToTeamFile(ArrayList^ team) {
	readFromFile readFromFile;
	ArrayList^ teamsInfo = gcnew ArrayList;
	String^ fileName = "Takimlar.txt";
	String^ key = "#";

	teamsInfo = readFromFile.read(fileName);
	StreamWriter^ sw = gcnew StreamWriter(fileName);

	for (int i = 0; i < teamsInfo->Count / 3; i++) {
		sw->WriteLine(teamsInfo[i * 3] + key + teamsInfo[i * 3 + 1] + key + teamsInfo[i * 3 + 2]);
	}

	sw->WriteLine(team[0] + key + team[1] + key + team[2]);

	sw->Close();
}

// Write Players
void writeToFile::writePlayers(ArrayList^ array, String^ fileName) {
	StreamWriter^ sw = gcnew StreamWriter(fileName);

	for (int i = 0; i < array->Count; i++) {
		sw->WriteLine(array[i]);
	}

	sw->Close();
}

// Write Given Array To End Of Given File
void writeToFile::writeEndOfFile(ArrayList^ array, String^ fileName) {
	StreamReader^ din = File::OpenText(fileName);
	ArrayList^ lines = gcnew ArrayList;
	String^ str;

	while ((str = din->ReadLine()) != nullptr) {
		if (str != "") lines->Add(str);
	}

	din->Close();

	StreamWriter^ sw = gcnew StreamWriter(fileName);

	for (int i = 0; i < lines->Count; i++) {
		sw->WriteLine(lines[i]);
	}

	for (int i = 0; i < array->Count; i++) {
		sw->WriteLine(array[i]);
	}	
	sw->Close();
}

//  Write Fixture File
void writeToFile::writeFixture(ArrayList^ arry) {
	String^ fileName = "Fiksture.txt";
	String^ key = "#";
	StreamWriter^ sw = gcnew StreamWriter(fileName);

	for (int i = 0; i < arry->Count/4; i++) {
		String^ line = arry[i * 4] + key + arry[i * 4 + 1] + key + arry[i * 4 + 2] + key + arry[i * 4 + 3];
		sw->WriteLine(line);
	}

	sw->Close();
}

// Write Scor Board
void writeToFile::writeScorBoard(ArrayList^ arry) {
	String^ fileName = "Puan Durumu.txt";
	String^ key = "#";

	StreamWriter^ sw = gcnew StreamWriter(fileName);

	for (int i = 0; i < arry->Count / 10; i++) {
		String^ line = arry[i * 10] + key + arry[i * 10 + 1] + key + arry[i * 10 + 2] + key + arry[i * 10 + 3] 
			+ key + arry[i * 10 + 4]	+ key + arry[i * 10 + 5] + key + arry[i * 10 + 6] + key + arry[i * 10 + 7] 
			+ key + arry[i * 10 + 8] + key + arry[i * 10 + 9];
		sw->WriteLine(line);
	}

	sw->Close();
}

// Write Saved Infor To Open Team Detail Form
void writeToFile::writeSavedInfo(String^ teamName) {
	String^ fileName = "Saved Info.txt";
	StreamWriter^ sw = gcnew StreamWriter(fileName);

	sw->WriteLine(teamName);

	sw->Close();
}

// Write Saved Info To Open VS Form
void writeToFile::writeSavedTeamsInfo(ArrayList^ info) {
	String^ fileName = "Saved Info.txt";
	String^ key = "#";
	StreamWriter^ sw = gcnew StreamWriter(fileName);

	String^ scor1 = info[1]->ToString()->Substring(0, 1);
	String^ scor2 = info[1]->ToString()->Substring(4, 1);

	String^ line = info[0]->ToString() + key + scor1 + key + scor2 + key + info[2]->ToString();

	sw->WriteLine(line);

	sw->Close();
}

// Clear Teams Info File
void writeToFile::clearTeamsInfo() {
	String^ fileName = "Teams Info.txt";
	StreamWriter^ sw = gcnew StreamWriter(fileName);

	sw->WriteLine("");

	sw->Close();
}

// Delete Sended Team
void writeToFile::deleteSendedTeam(String^ sended, String^ fileName) {
	StreamReader^ din = File::OpenText(fileName);
	ArrayList^ lines = gcnew ArrayList;
	String^ str;

	while ((str = din->ReadLine()) != nullptr) {
		array<String^>^ words;
		words = str->Split('#');
		if (str != "" && words[0] != sended) lines->Add(str);
	}

	din->Close();

	StreamWriter^ sw = gcnew StreamWriter(fileName);

	for (int i = 0; i < lines->Count; i++) {
		sw->WriteLine(lines[i]);
	}

	sw->Close();

	sended = sended + ".txt";

	File::Delete(sended);
}

// Change Sended Players No And Power Values
void writeToFile::changePlayerInfo(ArrayList^ info) {
	String^ teamName = info[0]->ToString();
	String^ name = info[1]->ToString();
	String^ no = info[2]->ToString();
	String^ guc = info[3]->ToString();

	String^ fileName = teamName + ".txt";
	String^ key = "#";

	StreamReader^ din = File::OpenText(fileName);
	ArrayList^ lines = gcnew ArrayList;
	String^ str;

	while ((str = din->ReadLine()) != nullptr) {
		array<String^>^ words;
		words = str->Split('#');
		if (str != "" && words[1] != name) lines->Add(str);
		else if (words[1] == name) {
			str = no + key + name + key + words[2] + key + guc + key + words[4];
			lines->Add(str);
		}
	}

	din->Close();

	StreamWriter^ sw = gcnew StreamWriter(fileName);

	for (int i = 0; i < lines->Count; i++) {
		sw->WriteLine(lines[i]);
	}

	sw->Close();

	changeTeamInfo(teamName);
}

// Change Sended Teams Information
void writeToFile::changeTeamInfo(String^ teamName) {
	readFromFile read;
	String^ fileName1 = teamName + ".txt";
	String^ fileName2 = "Takimlar.txt";
	String^ fileName3 = "Teams Info.txt";	

	ArrayList^ teamLinevalues = gcnew ArrayList;
	ArrayList^ teamLine = gcnew ArrayList;
	ArrayList^ teamInfo1 = read.read(fileName1);
	ArrayList^ teamInfo2 = read.read(fileName2);

	int age = 0, teamP = 0, dP = 0,
		oP = 0, fP = 0, count = 0;
	String^ key = "#";

	// Team Name - Manager - 4-4-2 - Old - Power - Def Power - Min Power - Forvet Power
	// Footballer = No # Name # Place # Power # Age
	//Trabzon Spor#Abdullah Avci#4 - 4 - 2#28#71#68#66#81

	// Add Team name - Manager - 4-4-2
	for (int i = 0; i < teamInfo2->Count; i++) {
		if (teamInfo2[i]->ToString() == teamName) {
			teamLinevalues->Add(teamInfo2[i]);
			teamLinevalues->Add(teamInfo2[i + 1]);
			teamLinevalues->Add(teamInfo2[i + 2]);
			break;
		}
	}

	// Ort Old
	count = 0;
	for (int i = 0; i < teamInfo1->Count / 5; i++) {
		age += Convert::ToInt32(teamInfo1[i * 5 + 4]);
		count++;
	}

	age /= count;
	teamLinevalues->Add(age);

	// Ort Power
	count = 0;
	for (int i = 0; i < teamInfo1->Count / 5; i++) {
		teamP += Convert::ToInt32(teamInfo1[i * 5 + 3]);
		count++;
	}

	teamP /= count;
	teamLinevalues->Add(teamP);

	// Ort Def
	count = 0;
	for (int i = 0; i < teamInfo1->Count / 5; i++) {
		if (teamInfo1[i * 5 + 2]->ToString() == "DEF") {
			dP += Convert::ToInt32(teamInfo1[i * 5 + 3]);
			count++;
		}
	}

	dP /= count;
	teamLinevalues->Add(dP);

	// Ort Mid
	count = 0;
	for (int i = 0; i < teamInfo1->Count / 5; i++) {
		if (teamInfo1[i * 5 + 2]->ToString() == "ORT") {
			oP += Convert::ToInt32(teamInfo1[i * 5 + 3]);
			count++;
		}
	}

	oP /= count;
	teamLinevalues->Add(oP);

	// Ort For
	count = 0;
	for (int i = 0; i < teamInfo1->Count / 5; i++) {
		if (teamInfo1[i * 5 + 2]->ToString() == "FOR") {
			fP += Convert::ToInt32(teamInfo1[i * 5 + 3]);
			count++;
		}
	}

	fP /= count;
	teamLinevalues->Add(fP);

	StreamReader^ din = File::OpenText(fileName3);
	ArrayList^ lines = gcnew ArrayList;
	String^ str;

	while ((str = din->ReadLine()) != nullptr) {
		array<String^>^ words;
		words = str->Split('#');
		if (str != "" && words[0] != teamName) lines->Add(str);
		else if (words[0] == teamName) {
			str = teamLinevalues[0] + key + teamLinevalues[1] + key + teamLinevalues[2] + key + teamLinevalues[3] +
				key + teamLinevalues[4] + key + teamLinevalues[5] + key + teamLinevalues[6] + key + teamLinevalues[7];
			lines->Add(str);
		}
	}

	din->Close();

	StreamWriter^ sw = gcnew StreamWriter(fileName3);

	for (int i = 0; i < lines->Count; i++) {
		sw->WriteLine(lines[i]);
	}

	sw->Close();
}