#include "Read.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections;

ArrayList^ readFromFile::read(String^ fileName) {
	ArrayList^ teamsInfo = gcnew ArrayList;
	String^ str;

	StreamReader^ din = File::OpenText(fileName);

	while ((str = din->ReadLine()) != nullptr) {
		array<String^>^ words;
		words = str->Split('#');

		for each(String^ temp in words) {
			teamsInfo->Add(temp);
		}
	}

	din->Close();

	return teamsInfo;
}