#include<iostream>
#include"dataset.h"
#include"linear_model.h"
using namespace std;
int main()
{
	linear_model b;
	b.create_feature_space();
	b.online_training();
	system("pause");
	return 0;
}