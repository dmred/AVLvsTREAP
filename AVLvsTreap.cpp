// ConsoleApplication2.cpp: îïğåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïğèëîæåíèÿ.
//

#include "stdafx.h"
#include "avl.h"
#include "crtsn.h"
#include <ctime>
#include <vector>

/*
ã====T===T==T====¬-ã¬
L=¬ã=¦ã==¦ã=¦=¬ã=-ã-¦
--¦¦-¦L==¦L=¬-¦¦--L¬¦
--¦¦-¦ã==¦=¬¦-¦¦---¦¦
--¦¦-¦L==T=-¦-¦¦---¦¦
--L--L===¦==--L----L-
*/
void avlTest1() {
	srand(1);
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "|		AVL Test1			|" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	clock_t begin_treap = clock();
	AVL_tree<int> tree;
	for (size_t i = 0; i < 1000000; i++)
	{
		(i % 2 == 0) ? tree.insert(rand() % 500000 + 1500000000) : tree.insert(rand() % 500000 - 1500000000);
	}
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;
	printf("It took me %d clicks (%f seconds).	|\n", res_treap, ((float)res_treap) / CLOCKS_PER_SEC);
	std::cout << "________________________________________________" << std::endl << std::endl;

}
/*
ã====T===T==T====¬ã==¬
L=¬ã=¦ã==¦ã=¦=¬ã=-L=¬¦
--¦¦-¦L==¦L=¬-¦¦--ã=-¦
--¦¦-¦ã==¦=¬¦-¦¦--¦ã=-
--¦¦-¦L==T=-¦-¦¦--¦L=¬
--L--L===¦==--L---L==-
*/
void avlTest2() {
	srand(2);
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "|		AVL Test2			|" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
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

	printf("It took me %d clicks (%f seconds).	|\n", res_treap, ((float)res_treap) / CLOCKS_PER_SEC);
	std::cout << "________________________________________________" << std::endl << std::endl;

}
/*
ã====T===T==T====¬ã==¬
L=¬ã=¦ã==¦ã=¦=¬ã=-L=¬¦
--¦¦-¦L==¦L=¬-¦¦--ã=-¦
--¦¦-¦ã==¦=¬¦-¦¦--L=¬¦
--¦¦-¦L==T=-¦-¦¦--ã=-¦
--L--L===¦==--L---L==-
*/
AVL_tree<long long> *  avlTest3() {
	srand(3);
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "|		AVL Test3			|" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	clock_t begin_treap = clock();
	AVL_tree<long long> * bigTree = new AVL_tree<long long>();
	for (size_t i = 0; i < 15000000; i++)
	{
		bigTree->insert(rand() % 35000000);
	}
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;

	printf("It took me %d clicks (%f seconds).	|\n", res_treap, ((float)res_treap) / CLOCKS_PER_SEC);
	std::cout << "________________________________________________" << std::endl << std::endl;
	return bigTree;
}
/*
ã====T===T==T====¬ã¬ã¬
L=¬ã=¦ã==¦ã=¦=¬ã=-¦¦¦¦
--¦¦-¦L==¦L=¬-¦¦--¦L-¦
--¦¦-¦ã==¦=¬¦-¦¦--L=¬¦
--¦¦-¦L==T=-¦-¦¦----¦¦
--L--L===¦==--L-----L-
*/
void avlTest4(AVL_tree<long long> * forFinding) {
	srand(4);
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "|		AVL Test4			|" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
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
		(forFinding->search(rand() % 35000000)) ? std::cout << "(" << i << ")" << "Superprize owner was found" << std::endl : std::cout << "Superprize owner was not found" << std::endl;
	}
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;

	printf("It took me %d clicks (%f seconds).	|\n", res_treap, ((float)res_treap) / CLOCKS_PER_SEC);
	std::cout << "________________________________________________" << std::endl << std::endl;;
}
/*
ã====T===T==T====¬ã==¬
L=¬ã=¦ã==¦ã=¦=¬ã=-¦ã=-
--¦¦-¦L==¦L=¬-¦¦--¦L=¬
--¦¦-¦ã==¦=¬¦-¦¦--L=¬¦
--¦¦-¦L==T=-¦-¦¦--ã=-¦
--L--L===¦==--L---L==-
*/
void avlTest5(AVL_tree<long long> * forFinding) {
	srand(5);
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "|		AVL Test5			|" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	clock_t begin_treap = clock();
	for (size_t i = 0; i < 1500000; i++)
	{
		forFinding->remove(i + 5000000);
	}
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;

	printf("It took me %d clicks (%f seconds).	|\n", res_treap, ((float)res_treap) / CLOCKS_PER_SEC);
	std::cout << "________________________________________________" << std::endl << std::endl;
}
/*
ã====T===T==T====¬ã==¬
L=¬ã=¦ã==¦ã=¦=¬ã=-¦ã=-
--¦¦-¦L==¦L=¬-¦¦--¦L=¬
--¦¦-¦ã==¦=¬¦-¦¦--¦ã¬¦
--¦¦-¦L==T=-¦-¦¦--¦L-¦
--L--L===¦==--L---L==-
*/

void avlTest67() {
	srand(6);
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "|		AVL Test6			|" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
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

	printf("It took me %d clicks (%f seconds).	|\n", res_treap, ((float)res_treap) / CLOCKS_PER_SEC);
	std::cout << "________________________________________________" << std::endl << std::endl;
}
/*
ã===T===T==T¬-ãT====T====T===T===T==T===¬
¦ã=¬¦ã=¬¦¬ã¦L=-¦=¬ã=¦=¬ã=¦ã=¬¦ã==¦ã¬¦ã=¬¦
¦L=-¦L=-¦¦¦¦ã¬-¦-¦¦---¦¦-¦L=-¦L==¦L-¦L=-¦
¦ã==¦ã¬ã-¦¦¦¦L¬¦-¦¦---¦¦-¦ã¬ã¦ã==¦ã¬¦ã==-
¦¦--¦¦¦¦ã-L¦¦-¦¦-¦¦---¦¦-¦¦¦¦¦L==¦¦¦¦¦
L---L-L-L==¦--L--L----L--L-L-L===¦-L¦-
*/


void printFile(std::ostream &outputstream, treap_node<int>* v, int indent) {

	if (v == nullptr) {
		return;
	}
	for (int i = indent; i; i--) outputstream << " ";

	//outputstream << v->key << " ";

	std::string s = std::to_string(v->priority);//short form priority
	outputstream << v->key   /*<< ", " << s[0] << s[1] << s[2]*/ << std::endl;


	if (!v->left && !v->right) {
		indent += 11;
	}
	if (v->left && v->right) {
		printFile(outputstream, v->left, indent - 4);
		printFile(outputstream, v->right, indent + 4);
	}
	else {
		printFile(outputstream, v->left, indent - 3);
		printFile(outputstream, v->right, indent + 3);
	}

	//printFile(outputstream, v->left,indent-3);
	//printFile(outputstream, v->right, indent+3);
}

/*
ã==T¬-ãT===T¬ãT====¬
L¬ã¦L=-¦ã=¬¦¦¦¦=¬ã=-
-¦¦¦ã¬-¦L=-¦¦¦¦-¦¦
-¦¦¦¦L¬¦ã==¦¦¦¦-¦¦
ã-L¦¦-¦¦¦--¦L-¦-¦¦
L==¦--L¦---L==--L-
*/

int inpAVL(std::string test) {
	std::ifstream fs(test, std::ios::in | std::ios::binary);
	std::ofstream fileOut("out.txt");
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
			if (a != 0 && b!=0) tree.insert(a, b);
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
			tree.print(fileOut);
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

	printf("It took me %d clicks (%f seconds).\n", res_treap, ((float)res_treap) / CLOCKS_PER_SEC);
	std::cout << std::endl;
	return 1;
}


/*
ã====T===T==T====¬-ã¬
L=¬ã=¦ã==¦ã=¦=¬ã=-ã-¦
--¦¦-¦L==¦L=¬-¦¦--L¬¦
--¦¦-¦ã==¦=¬¦-¦¦---¦¦
--¦¦-¦L==T=-¦-¦¦---¦¦
--L--L===¦==--L----L-
*/
void treapTest1() {
	srand(1);
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "|		Treap Test1			|" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	clock_t begin_treap = clock();
	treap<int> *first = new treap<int>();
	for (size_t i = 0; i < 1000000; i++)
	{
		(i % 2 == 0) ? first->insert(rand() % 500000 + 1500000000) : first->insert(rand() % 500000 - 1500000000);
	}
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;

	printf("It took me %d clicks (%f seconds).	|\n", res_treap, ((float)res_treap) / CLOCKS_PER_SEC);
	std::cout << "_________________________________________________" << std::endl << std::endl;
}
/*
ã====T===T==T====¬ã==¬
L=¬ã=¦ã==¦ã=¦=¬ã=-L=¬¦
--¦¦-¦L==¦L=¬-¦¦--ã=-¦
--¦¦-¦ã==¦=¬¦-¦¦--¦ã=-
--¦¦-¦L==T=-¦-¦¦--¦L=¬
--L--L===¦==--L---L==-
*/
void treapTest2() {
	srand(2);
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "|		Treap Test2			|" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
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

	printf("It took me %d clicks (%f seconds).	|\n", res_treap, ((float)res_treap) / CLOCKS_PER_SEC);
	std::cout << "_________________________________________________" << std::endl << std::endl;
}
/*
ã====T===T==T====¬ã==¬
L=¬ã=¦ã==¦ã=¦=¬ã=-L=¬¦
--¦¦-¦L==¦L=¬-¦¦--ã=-¦
--¦¦-¦ã==¦=¬¦-¦¦--L=¬¦
--¦¦-¦L==T=-¦-¦¦--ã=-¦
--L--L===¦==--L---L==-
*/
treap<long long> *  treapTest3() {
	srand(3);
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "|		Treap Test3			|" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
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

	printf("It took me %d clicks (%f seconds).	|\n", res_treap, ((float)res_treap) / CLOCKS_PER_SEC);
	std::cout << "_________________________________________________" << std::endl << std::endl;
	return bigTree;
}
/*
ã====T===T==T====¬ã¬ã¬
L=¬ã=¦ã==¦ã=¦=¬ã=-¦¦¦¦
--¦¦-¦L==¦L=¬-¦¦--¦L-¦
--¦¦-¦ã==¦=¬¦-¦¦--L=¬¦
--¦¦-¦L==T=-¦-¦¦----¦¦
--L--L===¦==--L-----L-
*/
void treapTest4(treap<long long> * forFinding) {
	srand(4);
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "|		Treap Test4			|" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
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
		(forFinding->contains(rand() % 35000000)) ? std::cout << "(" << i << ")" << "Superprize owner was found" << std::endl << std::endl : std::cout << "Superprize owner was not found" << std::endl << std::endl;
	}
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;

	printf("It took me %d clicks (%f seconds).	|\n", res_treap, ((float)res_treap) / CLOCKS_PER_SEC);
	std::cout << "_________________________________________________" << std::endl << std::endl;
}
/*
ã====T===T==T====¬ã==¬
L=¬ã=¦ã==¦ã=¦=¬ã=-¦ã=-
--¦¦-¦L==¦L=¬-¦¦--¦L=¬
--¦¦-¦ã==¦=¬¦-¦¦--L=¬¦
--¦¦-¦L==T=-¦-¦¦--ã=-¦
--L--L===¦==--L---L==-
*/
void treapTest5(treap<long long> * forFinding) {
	srand(4);
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "|		Treap Test5			|" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	clock_t begin_treap = clock();
	for (size_t i = 0; i < 1500000; i++)
	{
		forFinding->erase(i + 5000000);
	}
	clock_t end_treap = clock();
	clock_t res_treap = end_treap - begin_treap;

	printf("It took me %d clicks (%f seconds).	|\n", res_treap, ((float)res_treap) / CLOCKS_PER_SEC);
	std::cout << "_________________________________________________" << std::endl << std::endl;
}

/*
ã====T===T==T====¬ã==¬
L=¬ã=¦ã==¦ã=¦=¬ã=-¦ã=-
--¦¦-¦L==¦L=¬-¦¦--¦L=¬
--¦¦-¦ã==¦=¬¦-¦¦--¦ã¬¦
--¦¦-¦L==T=-¦-¦¦--¦L-¦
--L--L===¦==--L---L==-
*/

void treapTest67() {
	srand(6);
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "|		Treap Test6			|" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
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

	printf("It took me %d clicks (%f seconds).	|\n", res_treap, ((float)res_treap) / CLOCKS_PER_SEC);
	std::cout << "_________________________________________________" << std::endl << std::endl;
}

/*
ã==T¬-ãT===T¬ãT====¬
L¬ã¦L=-¦ã=¬¦¦¦¦=¬ã=-
-¦¦¦ã¬-¦L=-¦¦¦¦-¦¦
-¦¦¦¦L¬¦ã==¦¦¦¦-¦¦
ã-L¦¦-¦¦¦--¦L-¦-¦¦
L==¦--L¦---L==--L-
*/
int inpTreap(std::string test) {
	std::ifstream fs(test, std::ios::in | std::ios::binary);
	std::ofstream fileOut("out.txt");
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
			printFile(fileOut, tree->root, 44);
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

	printf("It took me %d clicks (%f seconds).\n", res_treap, ((float)res_treap) / CLOCKS_PER_SEC);
	std::cout << std::endl;
	return 1;
}

int main()
{
	
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
		inpAVL("kek.txt");
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
	system("pause");
	return 0;
}

