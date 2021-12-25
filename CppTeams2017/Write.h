#pragma once
using namespace System;
using namespace System::Collections;

class writeToFile {
public:
	void writeToTeamFile(ArrayList^);
	void writeScorBoard(ArrayList^);
	void writePlayers(ArrayList^, String^);
	void writeEndOfFile(ArrayList^, String^);
	void writeFixture(ArrayList^);
	void writeSavedInfo(String^);
	void writeSavedTeamsInfo(ArrayList^);
	void clearTeamsInfo();
	void deleteSendedTeam(String^, String^);
	void changePlayerInfo(ArrayList^);
	void changeTeamInfo(String^);
};