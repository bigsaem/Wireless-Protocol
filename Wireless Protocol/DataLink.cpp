#include "DataLink.h"
DataLink* dataLink = new DataLink();
int packetizeFile(string filePath) {
	dataLink->uploadedFrames = new vector<char[1024]>();
	ifstream file{ filePath };
	char c;
	int counter = 0;
	while (file.get(c)) {
	/*	if (DWORD_SIZE == 0) {

		}*/
	}
	return 1;
}