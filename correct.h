
void checkCorrectAVL(std::ostream &outstr) {
	outstr << "--------------------------------------------------------" << std::endl;
	outstr << "|		AVL Correct				|" << std::endl;
	outstr << "--------------------------------------------------------" << std::endl;
	std::string ok = "OKAY", er = "ERROR";

	outstr << "Making tree:		";
	AVL_tree<int> * ccAVL1 = new AVL_tree<int>();
	(ccAVL1) ? outstr << ok << std::endl : outstr << er << std::endl;
	//contains: 0
	
	outstr << "First input:		";
	int inputted = 0;
	ccAVL1->insert(0);
	(ccAVL1->root->key == inputted) ? outstr << ok << std::endl : outstr << er << std::endl;
	//contains: 0

	outstr << "Removing last:		";
	ccAVL1->remove(0);
	(ccAVL1->empty()) ? outstr << ok << std::endl : outstr << er << std::endl;
	//contains: -

	outstr << "Inserting many:		";
	ccAVL1->insert(16);//day
	ccAVL1->insert(01);//month
	ccAVL1->insert(18);//year
	ccAVL1->insert(583);//???
	(ccAVL1->size() == 3) ? outstr << ok << std::endl : outstr << er << std::endl;
	/*
	RELEVANT:  16
			  /  \
			  1   18
					\
					583
	*/
	outstr << "Searching:		";
	(ccAVL1->search(01) &&
		ccAVL1->search(16) &&
		ccAVL1->search(18) &&
		ccAVL1->search(583) &&
		!ccAVL1->search(544)) ? outstr << ok << std::endl : outstr << er << std::endl;
	//contains: 01, 16, 18, 583

	outstr << "MIN, MAX:		";
	(ccAVL1->findMin() == 1 && ccAVL1->findMax() == 583) ? outstr << ok << std::endl : outstr << er << std::endl;
	//contains: 01, 16, 18, 583


	outstr << "Removing node:		";
	ccAVL1->remove(18);
	/*
	RELEVANT:  16
			  /  \
			 1   583
	*/
	(ccAVL1->search(01) &&
		ccAVL1->search(16) &&
		!ccAVL1->search(18) &&
		ccAVL1->search(583) &&
		ccAVL1->size() == 2) ? outstr << ok << std::endl : outstr << er << std::endl;
	//contains: 01, 16, 583

	outstr << "Removing leaves:	";
	ccAVL1->remove(1);
	ccAVL1->remove(583);
	/*
	RELEVANT:  16
	*/
	(ccAVL1->search(16) &&
		!ccAVL1->search(18) &&
		!ccAVL1->search(583)&&
		ccAVL1->size()==1) ? outstr << ok << std::endl : outstr << er << std::endl;
	//contains:  16
}

void checkCorrectTreap(std::ostream &outstr) {
	outstr << "--------------------------------------------------------" << std::endl;
	outstr << "|		Treap Correct				|" << std::endl;
	outstr << "--------------------------------------------------------" << std::endl;
	std::string ok = "OKAY", er = "ERROR";

	outstr << "Making tree:		";
	treap<int> * ccTreap1 = new treap<int>();
	(ccTreap1) ? outstr << ok << std::endl : outstr << er << std::endl;
	//contains: 0

	outstr << "First input:		";
	int inputted = 0;
	ccTreap1->insert(0);
	(ccTreap1->root->key == inputted) ? outstr << ok << std::endl : outstr << er << std::endl;
	//contains: 0

	outstr << "Removing last:		";
	ccTreap1->erase(0);
	(ccTreap1->empty()) ? outstr << ok << std::endl : outstr << er << std::endl;
	//contains: -

	outstr << "Inserting many:		";
	ccTreap1->insert(16);//day
	ccTreap1->insert(01);//month
	ccTreap1->insert(18);//year
	ccTreap1->insert(583);//???
	(ccTreap1->size() == 4) ? outstr << ok << std::endl : outstr << er << std::endl;
	/*
	RELEVANT:  18
              /  \
			 1   583
			  \
			  16
	*/
	
	outstr << "Check priority:		";
	(ccTreap1->root->priority > ccTreap1->root->left->priority &&
	ccTreap1->root->priority > ccTreap1->root->right->priority &&
	ccTreap1->root->left->priority > ccTreap1->root->left->right->priority &&
		ccTreap1->root->left->priority < ccTreap1->root->right->priority) ? outstr << ok << std::endl : outstr << er << std::endl;
		
	outstr << "Searching:		";
	(ccTreap1->contains(01) &&
		ccTreap1->contains(16) &&
		ccTreap1->contains(18) &&
		ccTreap1->contains(583) &&
		!ccTreap1->contains(544)) ? outstr << ok << std::endl : outstr << er << std::endl;
	//contains: 01, 16, 18, 583

	outstr << "MIN, MAX:		";
	(ccTreap1->findMin()==1 && ccTreap1->findMax()==583) ? outstr << ok << std::endl : outstr << er << std::endl;
	//contains: 01, 16, 18, 583


	outstr << "Removing node:		";
	ccTreap1->erase(1);
	/*
		RELEVANT:  18
				  /  \
				 16   583
	*/
	(!ccTreap1->contains(01) &&
		ccTreap1->contains(16) &&
		ccTreap1->contains(18) &&
		ccTreap1->contains(583)&& 
		ccTreap1->size()==3) ? outstr << ok << std::endl : outstr << er << std::endl;


	outstr << "Removing leaves:	";
	ccTreap1->erase(16);
	ccTreap1->erase(583);
	/*
	RELEVANT:  18  
	*/
	(!ccTreap1->contains(16) &&
		ccTreap1->contains(18) &&
		!ccTreap1->contains(583)&&
		ccTreap1->size()==1) ? outstr << ok << std::endl : outstr << er << std::endl;
	//contains:  18
}