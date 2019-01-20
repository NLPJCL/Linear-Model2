#include<iostream>
#include"dataset.h"
#include"linear_model.h"
using namespace std;

#include<numeric>
namespace test
{
	
}
int main()
{
	linear_model b;
	b.create_feature_space();
	b.online_training();



	//test::test_accumulate();
	/*
	dataset sen;
	sen.read_data("train");

	cout<<sen.sentences[0].word[0]<<endl;


	sen.shuffle();
	cout << sen.sentences[0].word[0] << endl;
	*/

	system("pause");
	return 0;
}