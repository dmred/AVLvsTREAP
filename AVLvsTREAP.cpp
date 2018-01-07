// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "avl.h"
#include "crtsn.h"
#include <ctime>
#include <vector>
#include "tests.h"
#include "correct.h"

int main(int argc, char* argv[])
{
	if (argc != 4)
	{
		std::cout << "Not arguments" << std::endl;
		return 0;
	}

	std::string inFile = argv[1];
	std::string outFile = argv[2];
	std::string opt = argv[3];
	if (!(opt == "file" || opt == "correct" || opt == "test")) return 0;
	
	if (opt == "test") {
		treapTest1(outFile);
		avlTest1(outFile);
		treapTest2(outFile);
		avlTest2(outFile);
		treap<long long> *buf1 = treapTest3(outFile);
		AVL_tree<long long> * buf2 = avlTest3(outFile);
		treapTest4(buf1, outFile);
		avlTest4(buf2, outFile);
		treapTest5(buf1, outFile);
		avlTest5(buf2, outFile);
		treapTest67(outFile);
		avlTest67(outFile);
	}
	if (opt == "file") {
		inpAVL(inFile, outFile);
		inpTreap(inFile, outFile);
	}

	
	if (opt == "correct") {
		std::ofstream fileOutAVL("001.txt", std::ios::out);
		std::ofstream fileOutTreap("002.txt", std::ios::out);
		checkCorrectTreap(fileOutTreap);
		checkCorrectAVL(fileOutAVL);
	}
	
	
	

	/*if (argv[3] == "1") {
		inpAVL(inFile, outFile);
		inpTreap(inFile, outFile);
	}/*

	//std::cout << outFile  << inFile << std::endl;
	/*
	int choice;
	std::string test = "";
ent:
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "Enter '1' to test AVL using file 'in.txt'	|" << std::endl;
	std::cout << "Enter '2' to run AVL tests			|" << std::endl;
	std::cout << "Enter '3' to test Treap using file 'in.txt'	|" << std::endl;
	std::cout << "Enter '4' to run Treap tests			|" << std::endl;
	std::cout << "Enter '5' to quit				|" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "Your choice: ";
	std::cin >> choice;
	std::cout << std::endl;
	switch (choice)
	{
	case 1: {
		
		goto ent;
		break;
	}
	case 2: {
		avlTest1();
		avlTest2();
		AVL_tree<long long> * buf = avlTest3();
		avlTest4(buf);
		avlTest5(buf);
		avlTest67();
		goto ent;
		break;
	}
	case 3: {
		inpTreap("kek.txt");
		goto ent;
		break;
	}
	case 4: {
		treapTest1();
		treapTest2();
		treap<long long> * buf = treapTest3();
		treapTest4(buf);
		treapTest5(buf);
		treapTest67();
		goto ent;
		break;
	}
	case 5: {
		return 1;
		break;
	}
	default: {
		std::cout << "Try to type one more time" << std::endl << std::endl;
		goto ent;
		break;
	}

	}
	*/


	system("pause");
	return 0;
}

