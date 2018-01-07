#include "stdafx.h"
#include <ctime>



void avlTest1(std::string testOut) {
	std::ofstream fileOut(testOut, std::ios::app);//inf speed
	srand(1);
	fileOut << "--------------------------------------------------------" << std::endl;
	fileOut << "|		AVL Test1				|" << std::endl;
	fileOut << "--------------------------------------------------------" << std::endl;
	clock_t begin_treap = clock();
	AVL_tree<int> tree;
	for (size_t i = 0; i < 1000000; i++)
	{
		(i % 2 == 0) ? tree.insert(rand() % 500000 + 1500000000) : tree.insert(rand() % 500000 - 1500000000);
	}
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;
	fileOut << "[AVL] It took me took me " << res_treap << " clicks (" << (float)res_treap / CLOCKS_PER_SEC << " seconds).	|" << std::endl;
	fileOut << "________________________________________________________" << std::endl << std::endl;

}


void avlTest2(std::string testOut) {
	std::ofstream fileOut(testOut, std::ios::app);//inf speed
	srand(2);
	fileOut << "--------------------------------------------------------" << std::endl;
	fileOut << "|		AVL Test2				|" << std::endl;
	fileOut << "--------------------------------------------------------" << std::endl;
	clock_t begin_treap = clock();
	AVL_tree<int> tree1;
	AVL_tree<int> tree2;
	AVL_tree<int> tree3;
	AVL_tree<int> tree4;
	AVL_tree<int> tree5;
	AVL_tree<int> tree6;
	AVL_tree<int> tree7;
	AVL_tree<int> tree8;
	AVL_tree<int> tree9;
	AVL_tree<int> tree10;
	for (size_t i = 0; i < 100000; i++)
	{
		(i % 2 == 0) ? tree1.insert(rand() % 500000 + 1500000000) : tree1.insert(rand() % 500000 - 1500000000);
		(i % 2 == 0) ? tree2.insert(rand() % 500000 + 1500000000) : tree2.insert(rand() % 500000 - 1500000000);
		(i % 2 == 0) ? tree3.insert(rand() % 500000 + 1500000000) : tree3.insert(rand() % 500000 - 1500000000);
		(i % 2 == 0) ? tree4.insert(rand() % 500000 + 1500000000) : tree4.insert(rand() % 500000 - 1500000000);
		(i % 2 == 0) ? tree5.insert(rand() % 500000 + 1500000000) : tree5.insert(rand() % 500000 - 1500000000);
		(i % 2 == 0) ? tree6.insert(rand() % 500000 + 1500000000) : tree6.insert(rand() % 500000 - 1500000000);
		(i % 2 == 0) ? tree7.insert(rand() % 500000 + 1500000000) : tree7.insert(rand() % 500000 - 1500000000);
		(i % 2 == 0) ? tree8.insert(rand() % 500000 + 1500000000) : tree8.insert(rand() % 500000 - 1500000000);
		(i % 2 == 0) ? tree9.insert(rand() % 500000 + 1500000000) : tree9.insert(rand() % 500000 - 1500000000);
		(i % 2 == 0) ? tree10.insert(rand() % 500000 + 1500000000) : tree10.insert(rand() % 500000 - 1500000000);

	}
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;

	fileOut << "[AVL] It took me took me " << res_treap << " clicks (" << (float)res_treap / CLOCKS_PER_SEC << " seconds).	|" << std::endl;
	fileOut << "________________________________________________________" << std::endl << std::endl;

}


AVL_tree<long long> *  avlTest3(std::string testOut) {
	std::ofstream fileOut(testOut, std::ios::app);//inf speed
	srand(3);
	fileOut << "--------------------------------------------------------" << std::endl;
	fileOut << "|		AVL Test3				|" << std::endl;
	fileOut << "--------------------------------------------------------" << std::endl;
	clock_t begin_treap = clock();
	AVL_tree<long long> * bigTree = new AVL_tree<long long>();
	for (size_t i = 0; i < 15000000; i++)
	{
		bigTree->insert(rand() % 35000000);
	}
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;

	fileOut << "[AVL] It took me took me " << res_treap << " clicks (" << (float)res_treap / CLOCKS_PER_SEC << " seconds).	|" << std::endl;
	fileOut << "________________________________________________________" << std::endl << std::endl;
	return bigTree;
}


void avlTest4(AVL_tree<long long> * forFinding, std::string testOut) {
	std::ofstream fileOut(testOut, std::ios::app);//inf speed
	srand(4);
	fileOut << "--------------------------------------------------------" << std::endl;
	fileOut << "|		AVL Test4				|" << std::endl;
	fileOut << "--------------------------------------------------------" << std::endl;
	clock_t begin_treap = clock();
	for (size_t i = 0; i < 5000000; i++)
	{
		forFinding->search(rand() % 35000000);
	}
	for (size_t i = 0; i < 1000000; i++)
	{
		forFinding->search(rand() % 35000000);
	}
	for (size_t i = 0; i < 50000; i++)
	{
		forFinding->search(rand() % 35000000);
	}
	for (size_t i = 0; i < 3; i++)
	{
		forFinding->search(rand() % 35000000);
		//(forFinding->search(rand() % 35000000)) ? std::cout << "(" << i << ")" << "Superprize owner was found" << std::endl : std::cout << "Superprize owner was not found" << std::endl;
	}
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;

	fileOut << "[AVL] It took me took me " << res_treap << " clicks (" << (float)res_treap / CLOCKS_PER_SEC << " seconds).	|" << std::endl;
	fileOut << "________________________________________________________" << std::endl << std::endl;
}


void avlTest5(AVL_tree<long long> * forFinding, std::string testOut) {
	std::ofstream fileOut(testOut, std::ios::app);//inf speed
	srand(5);
	fileOut << "--------------------------------------------------------" << std::endl;
	fileOut << "|		AVL Test5				|" << std::endl;
	fileOut << "--------------------------------------------------------" << std::endl;
	clock_t begin_treap = clock();
	for (size_t i = 0; i < 1500000; i++)
	{
		forFinding->remove(i + 5000000);
	}
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;

	fileOut << "[AVL] It took me took me " << res_treap << " clicks (" << (float)res_treap / CLOCKS_PER_SEC << " seconds).	|" << std::endl;
	fileOut << "________________________________________________________" << std::endl << std::endl;
}



void avlTest67(std::string testOut) {
	std::ofstream fileOut(testOut, std::ios::app);//inf speed
	srand(6);
	fileOut << "--------------------------------------------------------" << std::endl;
	fileOut << "|		AVL Test6				|" << std::endl;
	fileOut << "--------------------------------------------------------" << std::endl;
	AVL_tree<int> * kek = new AVL_tree<int>();
	for (size_t i = 0; i < 1000000; i++)
	{
		kek->insert(rand() % 100000000);
	}
	clock_t begin_treap = clock();
	kek->findMin();
	kek->findMax();
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;

	fileOut << "[AVL] It took me took me " << res_treap << " clicks (" << (float)res_treap / CLOCKS_PER_SEC << " seconds).		|" << std::endl;
	fileOut << "________________________________________________________" << std::endl << std::endl;
}


int inpAVL(std::string testIn, std::string testOut) {
	std::ifstream fs(testIn, std::ios::in | std::ios::binary);
	std::ofstream fileOut(testOut, std::ios::out);
	std::ofstream printOut("printOutAVL.txt", std::ios::out);
	if (!fs) return 1;
	std::string command;

	clock_t begin_treap = clock();

	AVL_tree<int> tree;

	while (!fs.eof()) {
		fs >> command;
		//std::cout << command << std::endl;;
		if (command == "insert")
		{
			int a, b;
			fs >> a;
			fs >> b;
			if (a != 0 && b != 0) tree.insert(a, b);
			//if (a != 0) tree.insert(a);
			//fs >> a;
		}
		if (command == "delete")
		{
			int a;
			fs >> a;
			if (a != 0) tree.remove(a);


		}
		if (command == "print")
		{
			tree.print(printOut);
		}
		if (command == "find")
		{
			int a;
			fs >> a;
			if (a != 0) {
				tree.search(a);
				//(first->contains(a)) ? std::cout << a << ": Contains" << std::endl : std::cout << a << ": Not Contains" << std::endl;
			}
		}

	}

	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;

	fileOut << "[AVL] Working with input file took me " << res_treap << " clicks (" << (float)res_treap/CLOCKS_PER_SEC << " seconds)." << std::endl;
	fileOut.close();
	printOut.close();
	return 1;
}


void treapTest1(std::string testOut) {
	std::ofstream fileOut(testOut, std::ios::out);//inf speed
	srand(1);
	fileOut << "--------------------------------------------------------" << std::endl;
	fileOut << "|		Treap Test1				|" << std::endl;
	fileOut << "--------------------------------------------------------" << std::endl;
	clock_t begin_treap = clock();
	treap<int> *first = new treap<int>();
	for (size_t i = 0; i < 1000000; i++)
	{
		(i % 2 == 0) ? first->insert(rand() % 500000 + 1500000000) : first->insert(rand() % 500000 - 1500000000);
	}
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;

	fileOut << "[Treap] It took me took me " << res_treap << " clicks (" << (float)res_treap / CLOCKS_PER_SEC << " seconds).	|" << std::endl;
	fileOut << "________________________________________________________" << std::endl << std::endl;
}


void treapTest2(std::string testOut) {
	std::ofstream fileOut(testOut, std::ios::app);//inf speed
	srand(2);
	fileOut << "--------------------------------------------------------" << std::endl;
	fileOut << "|		Treap Test2				|" << std::endl;
	fileOut << "--------------------------------------------------------" << std::endl;
	clock_t begin_treap = clock();
	treap<int> *tree1 = new treap<int>();
	treap<int> *tree2 = new treap<int>();
	treap<int> *tree3 = new treap<int>();
	treap<int> *tree4 = new treap<int>();
	treap<int> *tree5 = new treap<int>();
	treap<int> *tree6 = new treap<int>();
	treap<int> *tree7 = new treap<int>();
	treap<int> *tree8 = new treap<int>();
	treap<int> *tree9 = new treap<int>();
	treap<int> *tree10 = new treap<int>();
	for (size_t i = 0; i < 100000; i++)
	{
		(i % 2 == 0) ? tree1->insert(rand() % 500000 + 1500000000) : tree1->insert(rand() % 500000 - 1500000000);
		(i % 2 == 0) ? tree2->insert(rand() % 500000 + 1500000000) : tree2->insert(rand() % 500000 - 1500000000);
		(i % 2 == 0) ? tree3->insert(rand() % 500000 + 1500000000) : tree3->insert(rand() % 500000 - 1500000000);
		(i % 2 == 0) ? tree4->insert(rand() % 500000 + 1500000000) : tree4->insert(rand() % 500000 - 1500000000);
		(i % 2 == 0) ? tree5->insert(rand() % 500000 + 1500000000) : tree5->insert(rand() % 500000 - 1500000000);
		(i % 2 == 0) ? tree6->insert(rand() % 500000 + 1500000000) : tree6->insert(rand() % 500000 - 1500000000);
		(i % 2 == 0) ? tree7->insert(rand() % 500000 + 1500000000) : tree7->insert(rand() % 500000 - 1500000000);
		(i % 2 == 0) ? tree8->insert(rand() % 500000 + 1500000000) : tree8->insert(rand() % 500000 - 1500000000);
		(i % 2 == 0) ? tree9->insert(rand() % 500000 + 1500000000) : tree9->insert(rand() % 500000 - 1500000000);
		(i % 2 == 0) ? tree10->insert(rand() % 500000 + 1500000000) : tree10->insert(rand() % 500000 - 1500000000);

	}
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;

	fileOut << "[Treap] It took me took me " << res_treap << " clicks (" << (float)res_treap / CLOCKS_PER_SEC << " seconds).	|" << std::endl;
	fileOut << "________________________________________________________" << std::endl << std::endl;
}


treap<long long> *  treapTest3(std::string testOut) {
	std::ofstream fileOut(testOut, std::ios::app);//inf speed
	srand(3);
	fileOut << "--------------------------------------------------------" << std::endl;
	fileOut << "|		Treap Test3				|" << std::endl;
	fileOut << "--------------------------------------------------------" << std::endl;
	int buff = 0;
	clock_t begin_treap = clock();
	treap<long long> * bigTree = new treap<long long>();
	for (size_t i = 0; i < 15000000; i++)
	{
		if (buff != rand() % 35000000) {
			buff = rand() % 35000000;
			bigTree->insert(buff);
		}
		else srand(time(NULL));
	}
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;

	fileOut << "[Treap] It took me took me " << res_treap << " clicks (" << (float)res_treap / CLOCKS_PER_SEC << " seconds).	|" << std::endl;
	fileOut << "________________________________________________________" << std::endl << std::endl;
	return bigTree;
}


void treapTest4(treap<long long> * forFinding, std::string testOut) {
	std::ofstream fileOut(testOut, std::ios::app);//inf speed
	srand(4);
	fileOut << "--------------------------------------------------------" << std::endl;
	fileOut << "|		Treap Test4				|" << std::endl;
	fileOut << "--------------------------------------------------------" << std::endl;
	clock_t begin_treap = clock();
	for (size_t i = 0; i < 5000000; i++)
	{
		forFinding->contains(rand() % 35000000);
	}
	for (size_t i = 0; i < 1000000; i++)
	{
		forFinding->contains(rand() % 35000000);
	}
	for (size_t i = 0; i < 50000; i++)
	{
		forFinding->contains(rand() % 35000000);
	}
	for (size_t i = 0; i < 3; i++)
	{
		forFinding->contains(rand() % 35000000);
		//(forFinding->contains(rand() % 35000000)) ? std::cout << "(" << i << ")" << "Superprize owner was found" << std::endl << std::endl : std::cout << "Superprize owner was not found" << std::endl << std::endl;
	}
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;
	fileOut << "[Treap] It took me took me " << res_treap << " clicks (" << (float)res_treap / CLOCKS_PER_SEC << " seconds).	|" << std::endl;
	fileOut << "________________________________________________________" << std::endl << std::endl;
}


void treapTest5(treap<long long> * forFinding, std::string testOut) {
	std::ofstream fileOut(testOut, std::ios::app);//inf speed
	srand(4);
	fileOut << "--------------------------------------------------------" << std::endl;
	fileOut << "|		Treap Test5				|" << std::endl;
	fileOut << "--------------------------------------------------------" << std::endl;
	clock_t begin_treap = clock();
	for (size_t i = 0; i < 1500000; i++)
	{
		forFinding->erase(i + 5000000);
	}
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;

	fileOut << "[Treap] It took me took me " << res_treap << " clicks (" << (float)res_treap / CLOCKS_PER_SEC << " seconds).	|" << std::endl;
	fileOut << "________________________________________________________" << std::endl << std::endl;
}


void treapTest67(std::string testOut) {
	std::ofstream fileOut(testOut, std::ios::app);//inf speed
	srand(6);
	fileOut << "--------------------------------------------------------" << std::endl;
	fileOut << "|		Treap Test6				|" << std::endl;
	fileOut << "--------------------------------------------------------" << std::endl;
	treap<int> * kek = new treap<int>();
	for (size_t i = 0; i < 1000000; i++)
	{
		kek->insert(rand() % 100000000);
	}
	clock_t begin_treap = clock();
	kek->findMin();
	kek->findMax();
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;

	fileOut << "[Treap] It took me took me " << res_treap << " clicks (" << (float)res_treap / CLOCKS_PER_SEC << " seconds).	|" << std::endl;
	fileOut << "________________________________________________________" << std::endl << std::endl;
}


int inpTreap(std::string testIn, std::string testOut) {
	std::ifstream fs(testIn, std::ios::in | std::ios::binary);
	std::ofstream fileOut(testOut, std::ios::app);//inf speed
	std::ofstream printOut("printOutTreap.txt", std::ios::out);//data output by print command
	if (!fs) return 1;
	std::string command;

	clock_t begin_treap = clock();

	treap<int> * tree = new treap<int>();

	while (!fs.eof()) {
		fs >> command;
		//std::cout << command << std::endl;;
		if (command == "insert")
		{
			int a, b;
			fs >> a;
			fs >> b;
			if (a != 0 && b != 0) tree->insert(a, b);
			//if (a != 0) tree.insert(a);
			//fs >> a;
		}
		if (command == "delete")
		{
			int a;
			fs >> a;
			if (a != 0) tree->erase(a);
		}
		if (command == "print")
		{
			printFile(printOut, tree->root, 44);
		}

		if (command == "min")
		{
			tree->findMin();
		}

		if (command == "max")
		{
			tree->findMax();
		}

		if (command == "find")
		{
			int a;
			fs >> a;
			if (a != 0) {
				tree->contains(a);
				//(first->contains(a)) ? std::cout << a << ": Contains" << std::endl : std::cout << a << ": Not Contains" << std::endl;
			}
		}

	}

	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;
	fileOut << "[Treap] Working with input file took me took me " << res_treap << " clicks (" << (float)res_treap/CLOCKS_PER_SEC << " seconds)." << std::endl;
	fileOut.close();
	printOut.close();
	return 1;
}
