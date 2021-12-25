#pragma once
using namespace System;
using namespace System::Collections;

class Create {
public:
	void createTeam(ArrayList^);
private:
	void createFile(String^);
	ArrayList^ createNameList();
	ArrayList^ createRandomNo();
	ArrayList^ createRandomAge();
	ArrayList^ createRandomPower();
	int* createTactic(String^);
	ArrayList^ suffleArrayList(ArrayList^);
	void createTeamInfo(String^);
};