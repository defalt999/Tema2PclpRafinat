#include <iostream>
#include "student.h"
#include "grupa.h"
using namespace std;

int main()
{
    grupa calc1;
    Student s1(1, "Denis", 10, 10, 9);
    Student s2(2, "Catalin", 8, 9, 9);
    Student s3(3, "Marcel", 4,3,3);
    Student s4(4, "Marius", 7, 7, 7);
    Student s5(5, "Cosmin", 6, 3, 1);
    Student s6(6, "Mihai", 8, 8, 8);
    Student s7(7, "Maria", 1, 3, 7);
    Student s8(8, "Sorin", 5,8, 9);
    Student s9(9, "Ion", 5, 2, 1);
    Student s10(10, "Alex", 9, 2, 10);
    

    calc1.adaugaStudent(s1);
    calc1.adaugaStudent(s2);
    calc1.adaugaStudent(s3);
    calc1.adaugaStudent(s4);
    calc1.adaugaStudent(s5);
    calc1.adaugaStudent(s6);
    calc1.adaugaStudent(s7);
    calc1.adaugaStudent(s8);
    calc1.adaugaStudent(s9);
    calc1.adaugaStudent(s10);
    calc1.showAll();
    calc1.showNrElevi();
    calc1.showBStudii();
    calc1.showBMerit();
    calc1.deletePicati();
    calc1.showAll();//Dupa stergere
    calc1.showNrElevi();
    calc1.checkGrupaById();
}
