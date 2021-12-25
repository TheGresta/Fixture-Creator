#pragma once
using namespace System;
using namespace System::Collections;

class Calculator {
public: 
	void createFixture(ArrayList^);
	void createScorBoard(ArrayList^);
	ArrayList^ teamPlayerDetail();
	ArrayList^ teamVsPlayerDetail(String^);
	ArrayList^ teamVsTeamNames();
	ArrayList^ teamDetailMiniBox();
	ArrayList^ vsDetailMiniBox();
	ArrayList^ teamFixture();
	ArrayList^ teamList(ArrayList^);
	ArrayList^ tags(ArrayList^);
	ArrayList^ createMatrix(ArrayList^);
	ArrayList^ nextWeek(ArrayList^);
	ArrayList^ createScore(ArrayList^);
};
