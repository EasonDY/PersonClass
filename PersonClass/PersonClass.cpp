// PersonClass.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Person.h"
#include <iostream>
using namespace std;

int main()
{
	Person p;
	if (read(cin, p)) {
		print(cout, p);
	}
	system("pause");
    return 0;
}

