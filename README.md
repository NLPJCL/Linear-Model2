# Linear-Model2

注:以下结果为averaged分支程序测试结果。

一、运行

1.运行环境：VS2017

2.参考结果

(1)小数据测试:

训练集：train.conll        

| partial feature | averaged percetron | 打乱数据 | 迭代次数  |dev准确率 | 迭代时间/次|
| :-------------: | :----------------: | :------: | :------: | :-------: | :----: |
|        √        |         ×          |    x     |  18/20   |  85.81%   | 0.389s |
|        √        |         √          |    x     |  20/30   |  85.99%   | 0.418s |
|        √        |         ×          |    √     |  11/21   |  85.61%   | 0.447s | 
|        √        |         √          |    √     |  9/29    |  86.04%   | 0.449s | 


（2）大数据集测试：

训练集：big-data/train.conll

开发集：big-data/dev.conll

测试集：big-data/test.conll

| partial feature | averaged percetron | 打乱数据 | 迭代次数 | dev准确率 | test准确率 |  迭代时间/次 |
| :-------------: | :----------------: | :------: | :------: | :-------: | ---------- | :----: |
|        ×        |         ×          |    x     |  20      |  91.67%   | 91.31%     | 16.125s |
|        ×        |         √          |    x     |  19      |  93.73%   | 93.45%     | 16.406s |
|        √        |         ×          |    √     |  26      |  93.08%   | 92.82%     | 17.836s  |
|        √        |         √          |    √     |  11/26   |  93.93%   | 93.68%     | 15.468s  |


