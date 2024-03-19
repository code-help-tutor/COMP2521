WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
// COMP2521 23T2 Assignment 1

#ifndef MSET_STRUCTS_H
#define MSET_STRUCTS_H

// DO NOT CHANGE THE NAME OF THIS STRUCT
struct node {
	int item;           // DO NOT CHANGE/REMOVE THIS FIELD
	int count;          // DO NOT CHANGE/REMOVE THIS FIELD
	struct node *left;  // DO NOT CHANGE/REMOVE THIS FIELD
	struct node *right; // DO NOT CHANGE/REMOVE THIS FIELD

	// You may add more fields here if needed
};

// DO NOT CHANGE THE NAME OF THIS STRUCT
struct mset {
	struct node *tree;  // DO NOT CHANGE/REMOVE THIS FIELD

	// You may add more fields here if needed
};

// You may define more structs here if needed

////////////////////////////////////////////////////////////////////////
// Cursors

struct cursor {
	// You may add more fields here if needed
};

////////////////////////////////////////////////////////////////////////

#endif

