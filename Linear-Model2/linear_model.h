#pragma once
#include<iostream>
#include<map>
#include<vector>
#include"dataset.h"
#include"windows.h"
using namespace std;
class linear_model
{
public:
	void create_feature_space();
	void online_training();
	linear_model();
	//存储。
	void save_file(int i);
	~linear_model();
private:
	//基础数据集。
	dataset train;
	dataset dev;
	dataset test;
	map<string, int> model;//特征空间。
	map<string, int> tag;//词性
	vector<int> w;
	vector<int>v;
	map<int, int> v_times;
	vector<string> value;
	//创建特征空间。
	vector<string> create_feature(sentence sentence, int pos);
	//在线算法
	string maxscore_tag(sentence sen, int pos);
	vector<int> get_id(vector<string> f);
	void update_weight(sentence sen, int pos, string max_tag, string correct_tag);
	int count_score(int offset, vector<int> fv);
	int count_score_v(int offset, vector<int> fv);
	string maxscore_tag_v(sentence  sen, int pos);
	//评价。
	double evaluate(dataset);
	double evaluate_v(dataset data);
};

