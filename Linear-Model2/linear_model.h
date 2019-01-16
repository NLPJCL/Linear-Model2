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
	//�洢��
	void save_file(int i);
	~linear_model();
private:
	//�������ݼ���
	dataset train;
	dataset dev;
	dataset test;
	map<string, int> model;//�����ռ䡣
	map<string, int> tag;//����
	vector<int> w;
	vector<int>v;
	map<int, int> v_times;
	vector<string> value;
	//���������ռ䡣
	vector<string> create_feature(sentence sentence, int pos);
	//�����㷨
	string maxscore_tag(sentence sen, int pos);
	vector<int> get_id(vector<string> f);
	void update_weight(sentence sen, int pos, string max_tag, string correct_tag);
	int count_score(int offset, vector<int> fv);
	int count_score_v(int offset, vector<int> fv);
	string maxscore_tag_v(sentence  sen, int pos);
	//���ۡ�
	double evaluate(dataset);
	double evaluate_v(dataset data);
};

