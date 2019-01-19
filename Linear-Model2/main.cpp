#include<iostream>
#include"dataset.h"
#include"linear_model.h"
using namespace std;

#include<numeric>
namespace test
{
	int test_accumulate()
	{
		vector<string> f;
		f.push_back(",");
	//	f.push_back("爱");
	//	f.push_back("你");


		string prefix, suffix;

		prefix = accumulate(f.cbegin(), f.cbegin() + 1, string(""));
		suffix=accumulate(f.cend() - 1, f.cend(), string(""));
		//	string prefix, suffix;

		//	prefix = accumulate(sentence.word_char[pos].begin(), sentence.word_char[pos].begin() + k+1, string(""));

		/*
		for (int n = 0; n <= k; n++)
		{
		prefix = prefix + sentence.word_char[pos][n];
		}
		*/
		//获取后缀。

		//	suffix= accumulate(sentence.word_char[pos].end()-(k+1), sentence.word_char[pos].end(),string(""));
		/*
		for (int n = pos_word_len - k - 1; n <= pos_word_len - 1; n++)
		{
		suffix = suffix + sentence.word_char[pos][n];
		}
		*/


		cout << prefix << endl;
		cout << suffix << endl;
		return 1;
	}

	
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