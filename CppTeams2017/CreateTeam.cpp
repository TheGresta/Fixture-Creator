#include "CreateTeam.h"
#include "Read.h"
#include "Write.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections;

// teamInfo[] = {Team name, Team Manager, Team Tactic}
// Footballer = No # Name # Place # Power # Age
void Create::createTeam(ArrayList^ teamInfo) {
	writeToFile write;
	ArrayList^ teamList = gcnew ArrayList;
	ArrayList^ nameList = createNameList();
	ArrayList^ noList = createRandomNo();
	ArrayList^ ageList = createRandomAge();
	ArrayList^ powerList = createRandomPower();
	String^ fileName = teamInfo[0]->ToString() + ".txt";
	createFile(fileName);

	int* tactic = createTactic(teamInfo[2]->ToString());
	int k = tactic[0], d = tactic[1], 
		o = tactic[2], f = tactic[0];
	int size = 11;

	String^ place, ^name, ^no, ^age, ^power, ^full;
	String^ keyWord = "#";

	for (int i = 0; i < size; i++) {
		//Select role
		if (k != 0) {
			place = "KAL";
			--k;
		}
		else if (d != 0) {
			place = "DEF";
			--d;
		}
		else if (o != 0) {
			place = "ORT";
			--o;
		}
		else if (f != 0) {
			place = "FOR";
			--f;
		}

		name = nameList[i]->ToString();
		no = noList[i]->ToString();
		age = ageList[i]->ToString();
		power = powerList[i]->ToString();

		full = no + keyWord + name + keyWord + place + keyWord + power + keyWord + age;
		teamList->Add(full);
	}
	
	write.writePlayers(teamList, fileName);

	createTeamInfo(teamInfo[0]->ToString());
}

// Create Txt File With Given Team Name
void Create::createFile(String^ fileName) {

	try {
		FileStream^ fs = gcnew FileStream(fileName, FileMode::Create);
		fs->Close();
	}
	catch (System::Exception^ pe) {
		Console::WriteLine(pe->ToString());
	}
}

// Create Random 11 Footballer Full Name
ArrayList^ Create::createNameList() {
	readFromFile readFile;

	String^ fileName1 = "Isim.txt";
	String^ fileName2 = "Soyisim.txt";

	ArrayList^ nameList = readFile.read(fileName1);
	ArrayList^ lastNameList = readFile.read(fileName2);
	ArrayList^ totalNames = gcnew ArrayList;

	String ^fullName;
	int size = 11;

	nameList = suffleArrayList(nameList);
	lastNameList = suffleArrayList(lastNameList);

	for (int i = 0; i < size; i++) {
		fullName = nameList[i]->ToString() + " " + lastNameList[i]->ToString();
		totalNames->Add(fullName);
	}

	return totalNames;
}

// Create Random 11 Footballer No
ArrayList^ Create::createRandomNo() {
	ArrayList^ noList = gcnew ArrayList;
	ArrayList^ noValues = gcnew ArrayList;
	int size = 11, check, noMin = 1, noMax = 100;

	for (int i = noMin; i < noMax; i++) noValues->Add(i);

	noValues = suffleArrayList(noValues);

	for (int i = 0; i < size; i++) noList->Add(noValues[i]);

	return noList;
}

// Create Random 11 Footballer Age
ArrayList^ Create::createRandomAge() {
	ArrayList^ ageList = gcnew ArrayList;
	ArrayList^ ageValues = gcnew ArrayList;
	int oldT = 0, oldTmax = 352, oldTmin = 275, 
		oldMin = 18, oldMax = 37, size =11, old[11];

	for (int i = oldMin; i < oldMax; i++) ageValues->Add(i);
	
	while (oldT < oldTmin || oldT > oldTmax) {
		oldT = 0;
		ageValues = suffleArrayList(ageValues);

		for (int i = 0; i < size; i++) {
			old[i] = Convert::ToInt32(ageValues[i]);
			oldT += old[i];
		}
	}

	for (int i = 0; i <size; i++) {
		ageList->Add(old[i]);
	}

	return ageList;
}

// Create Random 11 Footballer Power
ArrayList^ Create::createRandomPower() {
	ArrayList^ powerList = gcnew ArrayList;
	ArrayList^ powerValues = gcnew ArrayList;
	int powerT = 0, powerTmin = 660, powerMin = 30, 
		powerMax = 101, size = 11, power[11];

	for (int i = powerMin; i < powerMax; i++) powerValues->Add(i);

	while (powerT < powerTmin) {
		powerT = 0;
		powerValues = suffleArrayList(powerValues);

		for (int i = 0; i < size; i++) {
			power[i] = Convert::ToInt32(powerValues[i]);
			powerT += power[i];
		}
	}

	for (int i = 0; i < size; i++) {
		powerList->Add(power[i]);
	}

	return powerList;
}

// Create Tactic As Integer Values
int* Create::createTactic(String^ tactic) {
	//Tactic Example : 4-4-2 : D-O-F
	int tactics[4];

	tactics[0] = 1;                                          // Keeper
	tactics[1] = Convert::ToInt32(tactic->Substring(0, 1));  // Def
	tactics[2] = Convert::ToInt32(tactic->Substring(2, 1));  // Mid
	tactics[3] = Convert::ToInt32(tactic->Substring(4, 1));  // For

	return tactics;
}

// Suffle Given ArrayList
ArrayList^ Create::suffleArrayList(ArrayList^ given) {	
	Random^ rnd = gcnew Random();
	int size = given->Count;

	while (size > 1) {
		int k = rnd->Next(size--);
		String^ t = given[size]->ToString();
		given[size] = given[k];
		given[k] = t;
	}

	return given;
}

// Create Teams Information
void Create::createTeamInfo(String^ team) {
	readFromFile read;
	writeToFile write;

	String^ fileName1 = team + ".txt";
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
		if (teamInfo2[i]->ToString() == team) {
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

	teamLine->Add(teamLinevalues[0] + key + teamLinevalues[1] + key + teamLinevalues[2] + key + teamLinevalues[3] +
		key + teamLinevalues[4] + key + teamLinevalues[5] + key + teamLinevalues[6] + key + teamLinevalues[7]);

	write.writeEndOfFile(teamLine, fileName3);
}

