#include <vector>
#include <iostream>
#include "student.h"
using namespace std;

class grupa {
private:
	vector<Student> elevi;
public:
	void showAll();
	void adaugaStudent(Student x);
	void showBMerit();
	void showBStudii();
	void deletePicati();
	void showNrElevi();
	void checkGrupaById();
};
