//
//  BillSplit.hpp
//  Project
//
//  Created by Sanjay Soundarajan on 11/8/16.
//  Copyright © 2016 INSERT TEAM NAME HERE. All rights reserved.
//

#ifndef BillSplit_hpp
#define BillSplit_hpp

#define ROUNDF(f, c) (((float)((int)((f) * (c))) / (c)))

#include <stdio.h>
#include "CreateOrders.hpp"
#include "Menu.hpp"
#include "SLL.hpp"
//#include "Table.hpp"
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

void splitBills(int tablenum);
void nosplitTotal(int tablenumber, float fulltotal);
void splitTotal(int tablenum, vector<int> &inputvector);
#endif /* BillSplit_hpp */
